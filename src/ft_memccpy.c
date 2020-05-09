#include "libft.h"
#include <string.h>
#include <stdio.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *ptr_dest = dest;
	const char *ptr_src = src;
	int i;

	i = 0;
	while (n > 0)
	{
		ptr_dest[i] = ptr_src[i];
		if (ptr_src[i] == c)
			return ((void*)&ptr_dest[i + 1]);
		i++;
		n--;
	}
	return (NULL);
}

//int main(int argc, char **argv)
//{
//	argc = 2;
//	char dest[11] = "0123456789";
//	char dest1[11] = "0123456789";
//	char src[11] = "qqwweerrtx";
//	char src2[11] = "qqwweerrtx";
//	void *ptr_dest = dest;
//	void *ptr2_dest = dest1;
//	void *ptr_src = src;
//	void *ptr2_src = src2;
//	char ch = argv[1][0];
//
//	printf("%s => %s\n", ft_memccpy(ptr_dest, ptr_src, ch, 10 * sizeof(char)), dest);
//	printf("%s => %s", memccpy(ptr2_dest, ptr2_src, ch, 10 * sizeof(char)), dest1);
//}
