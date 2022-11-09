#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

int	compare_isdigit(int c)
{
	if ((ft_isdigit(c) == 0) == (isdigit(c) == 0))
	{
		return (0);
	}
	else
	{
		printf("\nKO - with : %c[%d] ft_isdigit: %d != isdigit: %d", c, c,
				ft_isdigit(c), isdigit(c));
		return (1);
	}
}

int	test_isdigit(void)
{
	int	i;
	int	failed;

	i = 0;
	failed = 0;
	while (i < 200)
	{
		if (compare_isdigit(i) != 0)
		{
			failed = 1;
		}
		i++;
	}
	return (failed);
}
