#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	compare_strncmp(const char *str, const char *str2, size_t n)
{
	if (ft_strncmp(str, str2, n) == strncmp(str, str2, n))
	{
		return (0);
	}
	else
	{
		printf("\nKO - with : %s==%s ft_strncmp: %d != strncmp: %d", str, str2,
				ft_strncmp(str, str2, n), strncmp(str, str2, n));
		return (1);
	}
}

int	test_strncmp(void)
{
	int	failed;

	failed = 0;
	if (compare_strncmp("gasygdygadsygadgs", "gasygdygadsygadgs", 17)
		|| compare_strncmp("", "", 5) || compare_strncmp("gasygdygadsygadgs",
			"gasygdygadsygadga", 17) || compare_strncmp("gasygdygadsygadgs",
			"gasygdygadsygadga", 16), compare_strncmp("gasygdygadsygadgs",
			"gasygdy", 17) || compare_strncmp("gasygdygadsygadgs",
			"gasygdygadsygadgs", 0))
	{
		failed = 1;
	}
	return (failed);
}
