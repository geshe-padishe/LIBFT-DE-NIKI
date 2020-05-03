#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main()
{
	int i = 0;

	while (i < 200)
	{
		if (ft_toupper(i) == toupper(i))
			printf("1");
		else
			printf("error");
		i++;
	}
}
