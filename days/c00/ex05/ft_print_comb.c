/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:05:09 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/13 10:23:43 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_print_comb(void)
{
	char	first_nb;
	char	second_nb;
	char	third_nb;

	first_nb = '0';
	while (first_nb <= '7')
	{
		second_nb = first_nb + 1;
		while (second_nb <= '8')
		{
			third_nb = second_nb + 1;
			while (third_nb <= '9')
			{
				write(1, &first_nb, 1);
				write(1, &second_nb, 1);
				write(1, &third_nb, 1);
				if (!(first_nb == '7' && second_nb == '8' && third_nb == '9'))
					write(1, ", ", 2);
				third_nb++;
			}
			second_nb++;
		}
		first_nb++;
	}
}
