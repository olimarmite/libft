#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	compare_memchr(const void *s, int c, size_t n)
{
	if (memchr(s, c, n) == ft_memchr(s, c, n))
	{
		return (0);
	}
	printf("\nmemchr :%s\nft_memchr :%s", (unsigned char *)memchr(s, c, n),
			(unsigned char *)ft_memchr(s, c, n));
	return (1);
}

int	test_memchr(void)
{
	int	failed;

	failed = 0;
	compare_memchr("heyo", 'o', 3);
	compare_memchr("heyo", 'e', 3);
	compare_memchr("", 'a', 8);
	compare_memchr("hey\200", '\200', 8000000000000000);
	compare_memchr("", '\0', 8);
	compare_memchr("wwww", '\0', 8);
	return (failed);
}
