#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

int	compare_isprint(int c)
{
	if ((ft_isprint(c) == 0) == (isprint(c) == 0))
	{
		return (0);
	}
	else
	{
		printf("\nKO - with : %c[%d] ft_isprint: %d != isprint: %d", c, c,
				ft_isprint(c), isprint(c));
		return (1);
	}
}

int	test_isprint(void)
{
	int	i;
	int	failed;

	i = 0;
	failed = 0;
	while (i < 200)
	{
		if (compare_isprint(i) != 0)
		{
			failed = 1;
		}
		i++;
	}
	return (failed);
}
