#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t length;
	size_t i;

	i = 0;
	length = ft_strlen((char*)src);
	while (i + 1 < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (length);
}

//int main(int argc, char **argv)
//{
//	int size = 0;
//	int size2 = 0;
//	int i = atoi(argv[1]);
//	int j = atoi(argv[2]);
//	char str[11] = "qqwweerrtt";
//	char str2[20] = "aazzuubbxx\0ooooo";
//	char str1[11] = "qqwweerrtt";
//	char str3[20] = "aazzuubbxx\0ooooo";
//	char *ptr = &str[i];
//	char *ptr2 = &str2[j];
//	char *ptr1 = &str1[i];
//	char *ptr3 = &str3[j];
//
//	size = strlcpy(ptr, ptr2, atoi(argv[3]));
//	size2 = ft_strlcpy(ptr1, ptr3, atoi(argv[3]));
//	printf("real => first char is %c\n", *ptr2);
//	printf("meme => first char is %c\n", *ptr3);
//	printf("real => %s and size was %d\n", str, size);
//	printf("meme => %s and size was %d\n", str1, size2);
//}
