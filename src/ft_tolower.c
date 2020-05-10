#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 32);
	return (c);
}

//int main()
//{
//	int i = 0;
//
//	while (i < 200)
//	{
//		if (ft_toupper(i) == toupper(i))
//			printf("1");
//		else
//			printf("error");
//		i++;
//	}
//}
