#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && --n > 0 && (unsigned char)*s1 == (unsigned char)*s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
int	main(int argc, char **argv)
{
	char str[] = "reawe34024356";
	char str2[] = "\0";
	int i = 0;

	while (i < 15)
	{
		//printf("meme => %d\n", ft_strncmp(str, str2, i * sizeof(char)));
		//printf("real => %d\n", strncmp(str, str2, i * sizeof(char)));
		printf("i = %d, str = %s, str 2 = %s\n", i, str, str2);
		printf("meme => %d\n", ft_strncmp(str, str2, i));
		printf("real => %d\n", strncmp(str, str2, i));
		printf("---------------\n");
		i++;
	}

	char *s1 = "\200";
	char *s2 = "\0";
	int i1 = ((strncmp(s1, s2, 1) > 0) ? 1 : ((strncmp(s1, s2, 1) < 0) ? -1 : 0));
	int i2 = ((ft_strncmp(s1, s2, 1) > 0) ? 1 : ((ft_strncmp(s1, s2, 1) < 0) ? -1 : 0));

	if (i1 == i2)
		printf("success");
	printf("failure");
}
*/
