#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h> 

int ft_atoi(const char* nstr)
{
	int nbr;
	int sign;

	sign = 1;
	nbr = 0;
	while ((*nstr > 8 && *nstr < 14) || *nstr == 32 || *nstr == '+')
		nstr++;
	if (*nstr == '-')
	{
		sign = -1;
		nstr++;
	}
	if ((*nstr >= '0' && *nstr <= '9'))
		while (*nstr >= '0' && *nstr <= '9')
		{
			nbr = nbr * 10 + (*nstr - 48);
			nstr++;
		}
	else
		return (0);
	return (nbr * sign);
}

//int main(int argc, char **argv)
//{
//	char *str = argv[1];
//	printf("%d\n", atoi(str) - ft_atoi(str));
//	printf("--------\n");
//}
