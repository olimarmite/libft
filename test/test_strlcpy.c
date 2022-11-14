#include "../libft.h"
#include <bsd/string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	compare_strlcpy(void)
{
	char	s1[10];
	char	s2[10];
	char	r1[10];
	char	r2[10];
	size_t	o1;
	size_t	o2;
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
	o1 = ft_strlcpy(s2, s1, 3);
	o2 = strlcpy(r2, r1, 3);
	if (o1 == o2 && (strcmp(s2, r2) == 0))
	{
		printf("\nft_strlcpy: %ld- dest: %s\nstrlcpy: %ld - dest: %s", o1, s2,
				o2, r2);
		return (0);
	}
	else
	{
		printf("\nKO - ft_strlcpy:");
		printf("\nft_strlcpy: %ld- dest: %s\nstrlcpy: %ld - dest: %s", o1, s2,
				o2, r2);
		return (1);
	}
}

int	test_strlcpy(void)
{
	int	failed;

	failed = 0;
	failed = compare_strlcpy();
	return (failed);
}
