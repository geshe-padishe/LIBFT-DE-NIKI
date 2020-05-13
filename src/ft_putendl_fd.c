#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static unsigned int ft_strlen_endl(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
void ft_putendl_fd(char *s, int fd)
{
	size_t len;

	len = ft_strlen_endl(s);
	write (fd, s, len);
	write (fd, "\n", 1);
}

//int main(int argc, char **argv)
//{
//	ft_putendl_fd(argv[1], 1);
//}
