#include <stdio.h>
#include <stdlib.h>

int find_size(long nb_c)
{
	int size;

	size = 0;
	if (nb_c < 0)
	{
		nb_c = nb_c * -1;
		size++;
	}
	while (nb_c >= 1)
	{
		size++;
		nb_c = nb_c / 10;
	}
	return (size);
}

char *ft_itoa(int n)
{
	char *str;
	long nb_c;
	int size;
	int i;

	i = 0;
	size = 0;
	nb_c = n;
	size = find_size(nb_c);
	str = malloc(size + 1);
	if (nb_c < 0)
	{
		str[i] = '-';
		nb_c = nb_c * -1;
	}
	if (n == 0)
		str[0] = '0';
	while (nb_c >= 1)
	{
		str[size - i - 1] = (nb_c % 10) + 48;
		nb_c = nb_c / 10;
		i++;
	}
	return (str);
}

//int main(int argc, char **argv)
//{
//	int i = (atoi(argv[1]));
//
//	printf("%s\n", ft_itoa(i));	
//}
