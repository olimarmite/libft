#include "../libft.h"
#include <bsd/string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	compare_strlcat(void)
{
	char	s1[11];
	char	s2[30];
	char	r1[11];
	char	r2[30];
	size_t	o1;
	size_t	o2;
	int		i;

	i = 0;
	while (i < 30)
	{
		s2[i] = 0;
		r2[i] = 0;
		i++;
	}
	i = 0;
	while (i < 9)
	{
		s1[i] = i + 48;
		r1[i] = i + 48;
		i++;
	}
	s1[i] = 0;
	r1[i] = 0;
	o1 = ft_strlcat(s2, s1, 10);
	o2 = strlcat(r2, r1, 10);
	if (o1 == o2) //&& (strcmp(s2, r2) == 0))
	{
		printf("\nft_strlcat: %ld- dest: %s\nstrlcat: %ld - dest: %s\n", o1, s2,
				o2, r2);
		return (0);
	}
	else
	{
		printf("\nKO - ft_strlcat:");
		printf("\nft_strlcat: %ld- dest: %s\nstrlcat: %ld - dest: %s\n", o1, s2,
				o2, r2);
		return (1);
	}
}

int	test_strlcat(void)
{
	int	failed;

	failed = 0;
	failed = compare_strlcat();
	return (failed);
}
