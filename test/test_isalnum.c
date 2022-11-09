#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

int	compare_isalnum(int c)
{
	if ((ft_isalnum(c) == 0) == (isalnum(c) == 0))
	{
		return (0);
	}
	else
	{
		printf("\nKO - with : %c[%d] ft_isalnum: %d != isalnum: %d", c, c,
				ft_isalnum(c), isalnum(c));
		return (1);
	}
}

int	test_isalnum(void)
{
	int	i;
	int	failed;

	i = 0;
	failed = 0;
	while (i < 200)
	{
		if (compare_isalnum(i) != 0)
		{
			failed = 1;
		}
		i++;
	}
	return (failed);
}
