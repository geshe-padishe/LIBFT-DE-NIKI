#include <unistd.h>

static int	ft_strlen_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void		ft_putstr_fd(char *s, int fd)
{
	size_t len;

	len = ft_strlen_putstr(s);
	write(fd, s, len);
}
/*
**int main(int argc, char **argv)
**{
**	ft_putstr_fd(argv[1], 1);
**}
*/
