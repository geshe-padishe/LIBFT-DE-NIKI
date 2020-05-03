#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int main(int argc, char **argv)
{
	char c = argv[1][0];

	argc = 2;
	printf("me => %d\n", ft_isalpha(c));
	printf("real => %d\n", isalpha(c));
}
