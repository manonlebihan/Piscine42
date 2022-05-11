/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:09:47 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/16 08:41:00 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)

{
	int	tmp;
	int	i;

	tmp = 0;
	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

/*int main()
{
	int	tab[] = {1, -27, 55, -62 ,16, 0};
	int	size = sizeof(tab) / sizeof(int);
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", tab[i]);
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", *(tab+i));
	}
}*/
