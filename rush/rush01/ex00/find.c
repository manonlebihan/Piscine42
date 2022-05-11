/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:26:37 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/20 23:40:46 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "grid.h"
#include "str.h"
#include "display.h"

/* every combinations of 4 differents digits between 1 and 4
there is 4 * 3 * 2 * 1 = 24 */

/* on declare et on effecte un meme temps car on défini en dur toutes les valeurs
	on ne pourrait pas le faire en séparant déclaration et définition */
int combinations[24][4] = 
{
	{ 1, 2, 3, 4 },
	{ 1, 3, 2, 4 },
	{ 2, 1, 3, 4 },
	{ 2, 3, 1, 4 },
	{ 1, 2, 4, 3 },
	{ 1, 3, 4, 2 },
	{ 2, 3, 4, 1 },
	{ 3, 1, 2, 4 },
	{ 3, 2, 1, 4 },
	{ 1, 4, 2, 3 },
	{ 2, 4, 1, 3 },
	{ 2, 1, 4, 3 },
	{ 3, 1, 4, 2 },
	{ 3, 2, 4, 1 },
	{ 3, 4, 1, 2 },
	{ 1, 4, 3, 2 },
	{ 2, 4, 3, 1 },
	{ 3, 4, 2, 1 },
	{ 4, 1, 2, 3 },
	{ 4, 2, 1, 3 },
	{ 4, 1, 3, 2 },
	{ 4, 2, 3, 1 },
	{ 4, 3, 1, 2 },
	{ 4, 3, 2, 1 }
};

/* search for a valid combination et returns a string compatible with the input expected */
int find(char *input_program)
{
	int		i;
	int		j;
	int		k; 
	int		l; 
	int		**rows; 
	int		**cols;
	char	*input_build;

	rows = (int **)malloc(4 * 4 * sizeof (int));
	i = 0;
	while (i < 24) 
	{
		j = 0;
		while (j < 24) 
		{
			if (ft_is_compatible(combinations[i], combinations[j]))
			{
				k = 0;
				while (k < 24) 
				{
					if (ft_is_compatible(combinations[i], combinations[k]) && ft_is_compatible(combinations[j], combinations[k])) 
					{
						l = 0;
						while (l < 24)
						{
							if (ft_is_compatible(combinations[i], combinations[l]) && ft_is_compatible(combinations[j], combinations[l]) && ft_is_compatible(combinations[k], combinations[l])) 
							{
								rows[0] = combinations[i];
								rows[1] = combinations[j];
								rows[2] = combinations[k];
								rows[3] = combinations[l];
								cols = ft_get_cols(rows);
								input_build = build_input(rows, cols);
								free (cols);
								if (ft_strcmp(input_build, input_program))
								{
									ft_display_grid(rows);
									free (input_build);
									free (rows);

									return (0);
								}
								free (input_build);
							}
							l++;
						}
					}
					k++;
				}
			}
			j++;
		}
		i++;
	}
	free (rows);
	return (1);
}