#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

int	compare_tolower(int c)
{
	if (ft_tolower(c) == tolower(c))
	{
		return (0);
	}
	else
	{
		printf("\nKO - with : %c[%d] ft_tolower: %d != tolower: %d", c, c,
				ft_tolower(c), tolower(c));
		return (1);
	}
}

int	test_tolower(void)
{
	int	i;
	int	failed;

	i = 0;
	failed = 0;
	while (i < 200)
	{
		if (compare_tolower(i) != 0)
		{
			failed = 1;
		}
		i++;
	}
	return (failed);
}