/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:53:52 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/29 13:09:09 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/

int	ft_iterative_factorial(int nb)
{
	int	index;
	int	result;

	index = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while (index <= nb)
	{
		result *= index;
		index++;
	}
	return (result);
}

/*int	main(int argc, char *argv[])
{
	int	result;

	if (argc == 2)
	{
		result = ft_iterative_factorial(atoi(argv[1]));
		printf("%d\n", result);
	}
	return (0);
}*/
