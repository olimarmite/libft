#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

int	compare_isascii(int c)
{
	if ((ft_isascii(c) == 0) == (isascii(c) == 0))
	{
		return (0);
	}
	else
	{
		printf("\nKO - with : %c[%d] ft_isascii: %d != isascii: %d", c, c,
				ft_isascii(c), isascii(c));
		return (1);
	}
}

int	test_isascii(void)
{
	int	i;
	int	failed;

	i = 0;
	failed = 0;
	while (i < 200)
	{
		if (compare_isascii(i) != 0)
		{
			failed = 1;
		}
		i++;
	}
	return (failed);
}
