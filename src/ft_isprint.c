#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
	return ((c >= 32 && c <= 126));
}

//int main()
//{
//	int i = 0;
//	while (i < 300)
//	{
//		printf("%d is %d ", i, (ft_isprint(i) == isprint(i)));
//		printf("real is %d and I am %d\n", isprint(i), ft_isprint(i));
//		i++;
//	}
//}