#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Find the first occurrence of find in s, where the search is limited to the
 * first slen characters of s.
 */
char	*strnstr(const char *s, const char *find, size_t slen)
{
	size_t	len;

	char c, sc;
	if ((c = *find++) != '\0')
	{
		len = strlen(find);
		do
		{
			do
			{
				if (slen-- < 1 || (sc = *s++) == '\0')
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}

int	compare_strnstr(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = "raclette";
	s2 = "et";
	s3 = "raclette";
	s4 = "et";
	if ((strcmp(strnstr(s1, s2, 7), ft_strnstr(s1, s2, 3)) == 0)
		&& (strcmp(strnstr(s3, s4, 3), ft_strnstr(s3, s4, 3)) == 0))
	{
		return (0);
	}
	else
	{
		printf("\nKO - ft_strnstr:");
		printf("\nstrnstr :%s\nft_strnstr :%s", strnstr(s1, s2, 7),
				ft_strnstr(s1, s2, 3));
		printf("\nstrnstr :%s\nft_strnstr :%s", strnstr(s3, s4, 3),
				ft_strnstr(s3, s4, 3));
		// printf("\nKO - with : %s ft_strnstr: %ld != strnstr: %ld", str,
		// ft_strnstr(str), strnstr(str));
		return (1);
	}
}

int	test_strnstr(void)
{
	int	failed;

	failed = 0;
	failed = compare_strnstr();
	return (failed);
}
