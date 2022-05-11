/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:11:37 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/31 17:16:54 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i != nb && i != nb && i < 46345)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/*int	main(int argc, char *argv[])
{
	int	result;

	if (argc == 2)
	{
		result = ft_sqrt(atoi(argv[1]));
		printf("%d\n", result);
	}
	return (0);
}*/
