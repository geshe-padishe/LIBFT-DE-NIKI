#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

//int main()
//{
//	const char str[10] = "012345678";
//
//	printf("me => %zu\n", ft_strlen(str));
//	printf("real => %zu", strlen(str));
//}
