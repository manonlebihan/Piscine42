#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	char    *start;

	start = str;
	while (*str++);
	return (str - start);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= (-1);
	}
	if (nb < 10)
	{
		ft_putchar('0' + nb);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}
