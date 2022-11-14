#include "../libft.h"
#include <bsd/string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * Find the first occurrence of find in s, where the search is limited to the
 * first slen characters of s.
 */
// char	*strnstr(const char *s, const char *find, size_t slen)
// {
// 	size_t	len;

// 	char c, sc;
// 	if ((c = *find++) != '\0')
// 	{
// 		len = strnstr(find);
// 		do
// 		{
// 			do
// 			{
// 				if (slen-- < 1 || (sc = *s++) == '\0')
// 					return (NULL);
// 			} while (sc != c);
// 			if (len > slen)
// 				return (NULL);
// 		} while (strncmp(s, find, len) != 0);
// 		s--;
// 	}
// 	return ((char *)s);
// }

int	compare_strnstr(char *s1, char *s2, size_t n)
{
	if (ft_strnstr(s1, s2, n) == strnstr(s1, s2, n))
	{
		// printf("\nOK - with : %s--%s2 ft_strnstr: %s != strnstr: %s", s1, s2,
		// 		ft_strnstr(s1, s2, n), strnstr(s1, s2, n));
		return (0);
	}
	else
	{
		printf("\nKO - with : %s--%s2 ft_strnstr: %s != strnstr: %s", s1, s2,
				ft_strnstr(s1, s2, n), strnstr(s1, s2, n));
		return (1);
	}
}

int	test_strnstr(void)
{
	int	failed;

	failed = 0;
	compare_strnstr("gasy   gdygaadgsa",
					"gasy   gdygadsygadgs",
					100000);
	compare_strnstr("gasygdygadsygadg    s", "gasy   gdygadsygadgs", -1);
	compare_strnstr("gasyg   dygadsygadg    s", "", 0);
	compare_strnstr("1234567891234567089", "089", 19);
	compare_strnstr("1234567891234567089", "089", 18);
	compare_strnstr("", "A", 18);
	compare_strnstr("1234567891234567089", "A", 18);
	compare_strnstr("1234567891234567089", "45", 18);
	compare_strnstr("1234567891234567089", "123", 18);
	compare_strnstr("1234567891234567089", "89", 18);
	compare_strnstr("1234567891234567089", "1234567891234567089", 20);
	compare_strnstr("gasygdy   gadsygadg    s", "gasy   gdygadsyg  adgs",
			100000);
	compare_strnstr("gasygdygadsygadg    s", "gasy   gdygadsygadgs", 100000);
	compare_strnstr("gasygdygad   sygadg    s", "gasy   gdygadsygadgs", 100000);
	compare_strnstr("gasygdygadsygadg    s", "gasy   gdygadsywergwergadgs", 4);
	compare_strnstr("gasygdygadsygadg    s", "gasy   gdygadsygadgs", 100000);
	compare_strnstr("gasygdygadsygadg    s", "gasy   gdygadsygadgs", 100000);
	// if (compare_strnstr("gasygdygadsygadg    s", "gasy   gdygadsygadgs",
	// 100000)
	// 	|| compare_strnstr("", "", 0) || compare_strnstr("gasygdygadsygadgs",
	// 		"gasygdygadsygadgs", 0))
	// {
	// 	failed = 1;
	// }
	return (failed);
}
