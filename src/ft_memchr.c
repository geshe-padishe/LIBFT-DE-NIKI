#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *src = s;

	while (n-- > 0)
		if (*src++ == c)
			return ((void*)--src);
	return (NULL);
}
/*
**int main(int argc, char **argv)
**{
**	char str[10] = "bussjuggs";
**	const char *ptr = str;
**	char *ptr2;
**	char c = argv[1][0];
**
**	ptr2 = ft_memchr(ptr, c, 9);
**	printf("me => %s\n", ptr2);
**	ptr2 = memchr(ptr, c, 9);
**	printf("real => %s\n", ptr2);
**}
*/
