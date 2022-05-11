/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:21:52 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/31 01:22:45 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 1)
		return (0);
	while (nb % div != 0 && div < (nb - 1))
		div++;
	if (nb % div != 0 || nb == 2)
		return (1);
	return (0);
}

/*int	main(int argc, char *argv[])
{
	int	result;

	if (argc == 2)
	{
		result = ft_is_prime(atoi(argv[1]));
		printf("%d\n", result);
	}
	return (0);
}*/
