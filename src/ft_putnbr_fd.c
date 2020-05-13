#include <unistd.h>
#include <stdlib.h>

static void ft_putchar_nbr_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			ft_putnbr_fd(n * -1, fd);
		}
		if (n >= 1)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_nbr_fd(n % 10 + 48, fd);
		}
	}
}

//int main(int argc, char **argv)
//{
//	ft_putnbr_fd(atoi(argv[1]), 1);
//
//}