#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));	
}

int main(int argc, char **argv)
{
	argc = 2;
	printf("me => %d\n", ft_isalnum(argv[1][0]));
	printf("real => %d\n", isalnum(argv[1][0]));
}
