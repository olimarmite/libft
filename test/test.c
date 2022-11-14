#include <stdio.h>

int		test_isalpha(void);
int		test_isdigit(void);
int		test_isalnum(void);
int		test_isascii(void);
int		test_isprint(void);
int		test_strlen(void);
int		test_memset(void);
int		test_memcpy(void);
int		test_strnstr(void);
int		test_memmove(void);
int		test_strlcpy(void);
int		test_strlcat(void);
int		test_toupper(void);
int		test_tolower(void);
int		test_strchr(void);
int		test_strrchr(void);

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

int	main(void)
{
	run_test("isAlpha", test_isalpha);
	run_test("isDigit", test_isdigit);
	run_test("isAlnum", test_isalnum);
	run_test("isAscii", test_isascii);
	run_test("isPrint", test_isprint);
	run_test("strlen ", test_strlen);
	run_test("memset ", test_memset);
	run_test("memscpy", test_memcpy);
	run_test("strnstr", test_strnstr);
	run_test("memmove", test_memmove);
	run_test("strlcpy", test_strlcpy);
	run_test("strlcat", test_strlcat);
	run_test("toupper", test_toupper);
	run_test("tolower", test_tolower);
	run_test("toupper", test_toupper);
	run_test("tostrchr", test_strchr);
	run_test("tostrrchr", test_strrchr);
	return (0);
}
