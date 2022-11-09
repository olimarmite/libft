#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	compare_memset(void)
{
	int	*s1;
	int	*r1;
	int	*s2;
	int	*r2;
	int	*s3;
	int	*r3;
	int	*s4;
	int	*r4;

	s1 = malloc(sizeof(int) * 10);
	r1 = ft_memset(s1, 64, 10);
	s2 = malloc(sizeof(int) * 10);
	r2 = memset(s2, 64, 10);
	s3 = malloc(sizeof(int) * 10);
	r3 = ft_memset(s1, 64, 0);
	s4 = malloc(sizeof(int) * 10);
	r4 = memset(s2, 64, 0);
	if ((strcmp((char *)r1, (char *)r2) == 0) && (strcmp((char *)r2,
				(char *)r4) == 0))
	{
		return (0);
	}
	else
	{
		printf("\nKO - ft_memset:");
		printf("\nr1 :%s\nr2 :%s", (char *)r1, (char *)r2);
		printf("\nr3 :%s\nr4 :%s", (char *)r3, (char *)r4);
		// printf("\nKO - with : %s ft_memset: %ld != memset: %ld", str,
		// ft_memset(str), memset(str));
		return (1);
	}
}

int	test_memset(void)
{
	int	failed;

	failed = 0;
	failed = compare_memset();
	return (failed);
}
