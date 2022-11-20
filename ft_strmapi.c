#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	unsigned char *buff;
	i = 0;
	buff = (unsigned char *)ft_strdup(s);
	if (!buff)
		return (NULL);
	while (buff[i])
	{
		buff[i] = f(i, buff[i]);
		i++;
	}
	return (char *)(buff);
}