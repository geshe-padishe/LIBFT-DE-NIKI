#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t nbelm, size_t size)
{
	size_t i;
	void *ptr;
	char *str;

	i = 0;
	ptr = malloc(nbelm * size);
	if (ptr == NULL)
		return (NULL);
	str = ptr;
	while (i < size)
		str[i++] = 0;
	return (ptr);
}

//int main(int argc, char **argv)
//{
//	int i = 0;
//	char *ptr;
//	char *ptr2;
//
//	ptr = (char*)calloc(atoi(argv[1]), atoi(argv[2]));
//	ptr2 = (char*)ft_calloc(atoi(argv[1]), atoi(argv[2]));
//
//	while (i < atoi(argv[1]) - 1)
//	{
//		ptr[i] = 'W';
//		ptr2[i] = 'W';
//		i++;
//	}
//	ptr[i] = '\0';
//	ptr2[i] = '\0';
//
//	printf("real => %s\n", ptr);
//	printf("meme => %s\n", ptr2);
//
//}
