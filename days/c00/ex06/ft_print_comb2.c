/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:06:52 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/14 11:39:29 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nbr(int nbr)
{
	ft_putchar('0' + (nbr / 10));
	ft_putchar('0' + (nbr % 10));
}

void	ft_print_comb2(void)
{
	int	first_nbr;
	int	second_nbr;

	first_nbr = 0;
	second_nbr = 1;
	while (first_nbr < 99 || second_nbr < 99)
	{
		ft_print_nbr(first_nbr);
		ft_putchar(' ');
		ft_print_nbr(second_nbr);
		if (!(first_nbr == 98 && second_nbr == 99))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		second_nbr++;
		if (second_nbr == 100)
		{
			first_nbr++;
			second_nbr = first_nbr + 1;
		}
	}
}
