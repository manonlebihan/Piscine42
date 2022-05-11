/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:26:09 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/29 13:15:39 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	index;
	int	result;

	index = 1;
	result = 1;
	if (power < 0)
		return (0);
	while (index <= power)
	{
		result *= nb;
		index++;
	}
	return (result);
}

/*int	main(int argc, char *argv[])
{
	int	result;

	if (argc == 3)
	{
		result = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
		printf("%d\n", result);
	}
	return (0);
}*/
