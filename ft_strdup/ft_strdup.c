#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen4(const char *s)
{
	size_t i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}
char *ft_strdup(const char *s)
{
	char *str;
	size_t len;
	int i;

	i = 0;
	len = ft_strlen4(s);
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main(int argc, char **argv)
{
	const char *s = argv[1];

	printf("real => %s\n", strdup(s));
	printf("meme => %s\n", ft_strdup(s));
}
