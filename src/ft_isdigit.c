#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
**int main(int argc, char **argv)
**{
**	argc = 2;
**	printf("me => %d\n", ft_isdigit(argv[1][0]));
**	printf("real => %d\n", isdigit(argv[1][0]));
**}
*/
