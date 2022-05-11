/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:15:22 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/31 18:10:04 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_forbidden_char(char c)
{
	if (c < '!' || c > '~' || c == '+'
		|| c == '-')
		return (1);
	else
		return (0);
}

int	ft_is_base_valid(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (ft_forbidden_char(base[i]))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				base_len;
	long long int	nb;

	nb = nbr;
	if (ft_is_base_valid(base) == 1)
	{
		base_len = ft_strlen(base);
		if (nb < 0)
		{
			nb *= -1;
			ft_putchar('-');
		}
		if (nb >= base_len)
			ft_putnbr_base(nb / base_len, base);
		ft_putchar(base[nb % base_len]);
	}
}

/*int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_putnbr_base(atoi(argv[1]), argv[2]);
		ft_putchar('\n');
	}
}*/
