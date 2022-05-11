/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:10:29 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/14 16:42:12 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	index2;

	index = 0;
	while (index < size)
	{
		index2 = 1;
		while (index2 < size)
		{
			if (tab[index2] < tab[index2 - 1])
				ft_swap(&(tab[index2]), &(tab[index2 - 1]));
			index2++;
		}
		index++;
	}
}
