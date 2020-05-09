#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
	return ((c >= 0 && c < 128));
}

//int main()
//{
//	int i = -400;
//
//	while (i < 400)
//	{
//		printf("%d", (ft_isascii(i) == isascii(i)));
//		i++;
//	}
//}
