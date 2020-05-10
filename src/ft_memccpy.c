#include "libft.h"
#include <string.h>
#include <stdio.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *ptr_dest = dest;
	const char *ptr_src = src;
	int i;
	char ch;
	
	while (n > 0)
	{
		ptr_dest[i] = ptr_src[i];
		if (ptr_src[i] == (char)c)
			return ((void*)&ptr_dest[i + 1]);
		i++;
		n--;
	}
	return (NULL);
}

/*int main(int argc, char **argv)
{
	argc = 2;
	char dest[] = "01234567896666666666666666666";
	char dest1[] = "01234567896666666666666666666";
	char src[] = "string with \200 inside";
	void *ptr_dest = dest;
	void *ptr2_dest = NULL;
	void *ptr_src = src;
	char ch = argv[1][0];

	src[13] = ch;
	printf("mine => %s => %s\n", ft_memccpy(ptr_dest, ptr_src, ch, 21), dest);
	printf("real => %s => %s", memccpy(ptr2_dest, ptr_src, ch, 21), dest1);
}
