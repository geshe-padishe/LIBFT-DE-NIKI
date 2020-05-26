#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nbelm, size_t size)
{
	size_t	i;
	void	*ptr;
	char	*str;

	i = 0;
	if ((ptr = malloc(nbelm * size)) == NULL)
		return (NULL);
	str = ptr;
	if (nbelm == 0)
		str[i] = 0;
	while (i < nbelm)
		str[i++] = 0;
	return (ptr);
}
/*
**int main(int argc, char **argv)
**{
**	int size = 0;
**	void * d1 = ft_calloc(size, sizeof(int));
**	void * d2 = calloc(size, sizeof(int));
**
**	if (memcmp(d1, d2, size * sizeof(int)))
**		printf("failed");
**	free(d1);
**	free(d2);
**	printf("success");
**	char *ptr;
**	char *ptr2;
**	argc = 2;
**	ptr = (char*)calloc(atoi(argv[1]), atoi(argv[2]));
**	ptr2 = (char*)ft_calloc(atoi(argv[1]), atoi(argv[2]));
**
**	ptr[0] = 'W';
**	ptr2[0] = 'W';
**
**
**	printf("real => %s\n", ptr);
**	printf("meme => %s\n", ptr2);
**}
*/
