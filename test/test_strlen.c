#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	compare_strlen(const char *str)
{
	if (ft_strlen(str) == strlen(str))
	{
		return (0);
	}
	else
	{
		printf("\nKO - with : %s ft_strlen: %ld != strlen: %ld", str,
				ft_strlen(str), strlen(str));
		return (1);
	}
}

int	test_strlen(void)
{
	int	failed;

	failed = 0;
	if (compare_strlen("gasygdygadsygadgs") || compare_strlen("")
		|| compare_strlen("3a5c4dsvdv sius sg sgf gff gdsg \n"))
	{
		failed = 1;
	}
	return (failed);
}
