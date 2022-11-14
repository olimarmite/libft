#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	compare_memmove(void)
{
	char str[100] = {
		'1',
		'2',
		'3',
		'4',
		'5',
		'6',
		'7',
		'8',
		'9',
	};
	char str2[100] = {
		'1',
		'2',
		'3',
		'4',
		'5',
		'6',
		'7',
		'8',
		'9',
	};
	ft_memmove(str + 1, str + 2, 3);   //expect 1234556789
	ft_memmove(str2 + 3, str2 + 2, 3); //expect 123345789
	if ((strcmp(str, "134556789") == 0) && (strcmp(str2, "123345789") == 0))
	{
		return (0);
	}
	else
	{
		printf("\nKO - ft_memmove:");
		printf("\nft_memmove: %s- expect 134556789\n%s- expect 123345789\n",
				str,
				str2);
		return (1);
	}
}
int	test_memmove(void)
{
	int	failed;

	failed = 0;
	failed = compare_memmove();
	return (failed);
}
