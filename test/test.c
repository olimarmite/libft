#include <stdio.h>

int		test_isalpha(void);
int		test_isdigit(void);
int		test_isalnum(void);
int		test_isascii(void);
int		test_isprint(void);
int		test_strlen(void);
int		test_memset(void);
int		test_memcpy(void);

void	run_test(char *name, int (*test_function)(void))
{
	if (test_function() == 0)
	{
		printf("\n%s - OK", name);
	}
	else
	{
		printf("\n%s - KO", name);
	}
}

int	main(int argc, char const *argv[])
{
	run_test("isAlpha", test_isalpha);
	run_test("isDigit", test_isdigit);
	run_test("isAlnum", test_isalnum);
	run_test("isAscii", test_isascii);
	run_test("isPrint", test_isprint);
	run_test("strlen ", test_strlen);
	run_test("memset ", test_memset);
	run_test("memscpy", test_memcpy);
	return (0);
}
