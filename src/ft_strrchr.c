#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ptr;

	i = -1;
	ptr = NULL;
	while (s[++i])
		if (s[i] == c)
			ptr = &s[i];
	if (c == '\0' && s[i] == '\0')
		return ((char*)&s[i]);
	return ((char*)ptr);
}
/*
**int main(int argc, char **argv)
**{
**	char str[10] = "01\0 89";
**	int i = 1;
**
**	printf("meme => %s", ft_strrchr(str, argv[1][0]) + i);
**	printf(" >> address is %p\n", ft_strrchr(str, argv[1][0] + i));
**	printf("real => %s", strrchr(str, argv[1][0]) + i);
**	printf(" >> address is %p\n", strrchr(str, argv[1][0]) + i);
**}
*/
