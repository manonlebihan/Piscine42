/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:44:56 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/20 23:32:40 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "find.h"
#include "display.h"

int	main(int argc, char *argv[])
{
	int	error;

	error = 0;
	if (argc != 2)
		error = 1;
	if (error == 0)
		error = find(argv[1]);
	if (error != 0)
		ft_putstr("Error\n");
	return (error);
}
