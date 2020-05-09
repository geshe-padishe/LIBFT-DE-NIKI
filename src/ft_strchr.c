#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	int i;

	i  = -1;
	while (s[++i])
		if (s[i] == c)
			return((char *)&s[i]);
	if (c == '\0' && s[i] == '\0')
		return((char *)&s[i]);
	return (NULL);
}

//int main(int argc, char **argv)
//{
//	char str[10] = "012345\0r6";
//
//	printf("me => %s\n", ft_strchr(str, argv[1][0]));
//	printf("real => %s", strchr(str, argv[1][0]));
//}
