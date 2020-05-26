#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
**int main()
**{
**	int i = 0;
**
**	while (i < 255)
**	{
**		i++;
**	}
**}
*/
