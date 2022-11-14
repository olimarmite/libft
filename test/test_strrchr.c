#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	compare_strrchr(void)
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
	c2 = 't';
	s3 = "raclette";
	c3 = 'z';
	if ((strcmp(strrchr(s1, c1), ft_strrchr(s1, c1)) == 0)
		&& (strcmp(strrchr(s2, c2), ft_strrchr(s2, c2)) == 0) && (strrchr(s3,
				c3) == ft_strrchr(s3, c3)))
	{
		return (0);
	}
	printf("\nstrrchr :%s\nft_strrchr :%s", strrchr(s1, c1), ft_strrchr(s1,
				c1));
	printf("\nstrrchr :%s\nft_strrchr :%s", strrchr(s2, c2), ft_strrchr(s2,
				c2));
	printf("\nstrrchr :%s\nft_strrchr :%s", strrchr(s3, c3), ft_strrchr(s3,
				c3));
	return (1);
}

int	test_strrchr(void)
{
	int	failed;

	failed = 0;
	failed = compare_strrchr();
	return (failed);
}
