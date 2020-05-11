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
	if (size == 0)
		str[i] = 0;
	while (i < nbelm)
		str[i++] = 0;
	return (ptr);
}

int main(int argc, char **argv)
{
	int i = 0;
	char *ptr;
	char *ptr2;

	ptr = (char*)calloc(atoi(argv[1]), atoi(argv[2]));
	ptr2 = (char*)ft_calloc(atoi(argv[1]), atoi(argv[2]));

//	ptr[0] = 'W';
//	ptr2[0] = 'W';

	
	//printf("real => %s\n", ptr);
//	printf("meme => %s\n", ptr2);

}
