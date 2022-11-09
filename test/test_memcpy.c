#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	compare_memcpy(void)
{
	char	s1[10];
	char	s2[10];
	char	r1[10];
	char	r2[10];
	char	*o1;
	char	*o2;
	int		i;

	i = 0;
	while (i < 9)
	{
		s1[i] = i + 48;
		r1[i] = i + 48;
		i++;
	}
	s1[i] = 0;
	r1[i] = 0;
	o1 = ft_memcpy(s2, s1, 10);
	o2 = memcpy(r2, r1, 10);
	if (strcmp(o1, o2) == 0)
	{
		return (0);
	}
	else
	{
		printf("\nKO - ft_memcpy:");
		printf("\nft_memcpy: %s\nmemcpy: %s", o1, o2);
		return (1);
	}
}

int	test_memcpy(void)
{
	int	failed;

	failed = 0;
	failed = compare_memcpy();
	return (failed);
}
