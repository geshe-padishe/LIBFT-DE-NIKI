#include <stdlib.h>
#include <stdio.h>

static int	ft_strlen_mapi(const char *s)
{
	int i;
	
	i = 0;
	while(s[i])
		i++;
	return (i);
}

char		add_one_to_char(unsigned int i, char ch)
{
	i = 0;
	i++;
	return (ch + 1);
}

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	size_t len;
	unsigned int i;

	i = 0;
	len = ft_strlen_mapi(s);
	if ((str = malloc(len + 1)) == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

//int main(int argc, char **argv)
//{
//	argc = 2;
//	argc++;
//	printf("%s\n", ft_strmapi(argv[1], add_one_to_char));
//}
