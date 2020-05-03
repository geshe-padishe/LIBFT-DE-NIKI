#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *ptr = s1;
	const char *ptr2 = s2;

	while (n-- > 0)
		if (*ptr++ != *ptr2++)
			return (*(ptr - 1) - *(ptr2 - 1));
	return (0);
}

int main()
{
	char str[10] = "012";
	char str2[10] = "01";
	int i = -10;
	while (i < 10)
	{
		if (ft_memcmp(str, str2, i) != memcmp(str, str2, i))
		{
			printf("%d\n",i);
			printf("meme => %d\n", ft_memcmp(str, str2, i));
			printf("real => %d\n", memcmp(str, str2, i));
			printf("-----------\n");
		}
		i++;
	}
}
