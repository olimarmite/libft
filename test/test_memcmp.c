#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	compare_memcmp(const char *str, const char *str2, size_t n)
{
	if (ft_memcmp(str, str2, n) == memcmp(str, str2, n))
	{
		printf("\nOK - with : %s==%s ft_memcmp: %d != memcmp: %d", str, str2,
				ft_memcmp(str, str2, n), memcmp(str, str2, n));
		fflush(stdout);
		return (0);
	}
	else
	{
		printf("\nKO - with : %s==%s ft_memcmp: %d != memcmp: %d", str, str2,
				ft_memcmp(str, str2, n), memcmp(str, str2, n));
		fflush(stdout);
		return (1);
	}
}

int	test_memcmp(void)
{
	int		failed;
	// char	s[4] = {-128, 0, 127, 0};
	// char		sCpy[4] = {-128, 0, 127, 0};
	// char		s2[4] = {0, 0, 127, 0};
	// char		s3[4] = {0, 0, 42, 0};

	failed = 0;

	// /* 1 */ compare_memcmp(s, sCpy, 4);
	// /* 2 */ compare_memcmp(s, s2, 0);
	// /* 3 */ compare_memcmp(s, s2, 1);  // > 0
	// /* 4 */ compare_memcmp(s2, s, 1);  // < 0
	// /* 5 */ compare_memcmp(s2, s3, 4); // != 0
	return (failed);
}
