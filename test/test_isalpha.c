#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

int	compare_isalpha(int c)
{
	if ((ft_isalpha(c) == 0) == (isalpha(c) == 0))
	{
		return (0);
	}
	else
	{
		printf("\nKO - with : %c[%d] ft_isalpha: %d != isalpha: %d", c, c,
				ft_isalpha(c), isalpha(c));
		return (1);
	}
}

int	test_isalpha(void)
{
	int	i;
	int	failed;

	i = 0;
	failed = 0;
	while (i < 200)
	{
		if (compare_isalpha(i) != 0)
		{
			failed = 1;
		}
		i++;
	}
	return (failed);
}
