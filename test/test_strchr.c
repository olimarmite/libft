#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	compare_strchr(void)
{
	char	*s1;
	char	c1;
	char	*s2;
	char	c2;
	char	*s3;
	char	c3;

	s1 = "raclette";
	c1 = '\0';
	s2 = "raclette";
	c2 = 'c';
	s3 = "raclette";
	c3 = 'z';
	if ((strcmp(strchr(s1, c1), ft_strchr(s1, c1)) == 0) && (strcmp(strchr(s2,
					c2), ft_strchr(s2, c2)) == 0) && (strchr(s3,
				c3) == ft_strchr(s3, c3)))
	{
		return (0);
	}
	printf("\nstrchr :%s\nft_strchr :%s", strchr(s1, c1), ft_strchr(s1, c1));
	printf("\nstrchr :%s\nft_strchr :%s", strchr(s2, c2), ft_strchr(s2, c2));
	printf("\nstrchr :%s\nft_strchr :%s", strchr(s3, c3), ft_strchr(s3, c3));
	return (1);
}

int	test_strchr(void)
{
	int	failed;

	failed = 0;
	failed = compare_strchr();
	return (failed);
}
