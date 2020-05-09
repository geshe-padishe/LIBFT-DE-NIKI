#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && --n > 0 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

//int	main(int argc, char **argv)
//{
//	char str[10] = "pp";
//	char str2[10] = "123";
//	int i = 0;
//
//	while (i < 15)
//	{
//		//printf("meme => %d\n", ft_strncmp(str, str2, i * sizeof(char)));
//		//printf("real => %d\n", strncmp(str, str2, i * sizeof(char)));
//		printf("i = %d, str = %s, str 2 = %s\n", i, str, str2);
//		printf("meme => %d\nreal => %d\n", ft_strncmp(str, str2, i), strncmp(str, str2, i));
//		printf("---------------\n");
//		i++;
//	}
//}
