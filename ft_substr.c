#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;
	size_t j;

	j = 0;
	i = start;
	while (s[i] && i - start < len)
		i++;
	str = malloc(i - start + 1);
	if (str == NULL)
		return (NULL);
	while (i - start - j > 0)
	{
		str[j] = s[start + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

//int main(int argc, char **argv)
//{
//	//DANGER LA STRING DE BASE PEUT NE PAS AVOIR DE CHARACTER A LINDEX START
//	(void)argc;
//	printf("%s\n", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
//}
