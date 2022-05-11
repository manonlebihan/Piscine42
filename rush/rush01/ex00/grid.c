/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:54:06 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/20 23:39:46 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "str.h"

/* return the value of the normal view of a 4 boxes combinations */
int ft_normal_view(int *c) 
{
	int i;
	int	vn;
	int	max;

	i = 1;
	vn = 1;
	max = c[0];

	while (i < 4) 
	{
		if (c[i] > max) 
		{
			max = c[i];
			vn++;
		}
		i++;
	}
	return (vn);
}

/* return the value of the inverse view of a 4 boxes combinations */
int	ft_invert_view(int *c) 
{
	int	i;
	int	vi;
	int	max;

	i = 2;
	vi = 1;
	max = c[3];

	while (i >= 0) 
	{
		if (c[i] > max) 
		{
			max = c[i];
			vi++;
		}
		i--;
	}
	return (vi);
}

/* return true (1) if two combinations are a match (not two digits in the same rank) */
int ft_is_compatible(int *c1, int *c2)
{
	if (c1[0] == c2[0] || c1[1] == c2[1] || c1[2] == c2[2] || c1[3] == c2[3]) 
		return (0);
	else
		return (1);
}

/* return the cols matching the grid given by the rows passed as parameters */
int **ft_get_cols(int **rows)
{
	int i;
	int j; 
	int **cols;

	cols = (int **)malloc(4 * 4 * sizeof (int));
	i = 0;
	while (i < 4)
	{
		cols[i] = (int *)malloc(4 * sizeof(int));
		j = 0;
		while (j < 4)
		{
			cols[i][j] = rows[j][i];
			j++;
		}
		i++;
	}
	return (cols);
}

/* build the input matching the grid that the rows and cols represents */
char *build_input(int **rows, int **cols) 
{
	char *input_build;

	input_build = (char *)malloc(31 * sizeof (char));
	ft_fill(input_build, 31, ' ');
	input_build[0] = ft_digit_to_char(ft_normal_view(cols[0]));
	input_build[2] = ft_digit_to_char(ft_normal_view(cols[1]));
	input_build[4] = ft_digit_to_char(ft_normal_view(cols[2]));
	input_build[6] = ft_digit_to_char(ft_normal_view(cols[3]));
	input_build[8]  = ft_digit_to_char(ft_invert_view(cols[0]));
	input_build[10] = ft_digit_to_char(ft_invert_view(cols[1]));
	input_build[12] = ft_digit_to_char(ft_invert_view(cols[2]));
	input_build[14] = ft_digit_to_char(ft_invert_view(cols[3]));
	input_build[16] = ft_digit_to_char(ft_normal_view(rows[0]));
	input_build[18] = ft_digit_to_char(ft_normal_view(rows[1]));
	input_build[20] = ft_digit_to_char(ft_normal_view(rows[2]));
	input_build[22] = ft_digit_to_char(ft_normal_view(rows[3]));
	input_build[24] = ft_digit_to_char(ft_invert_view(rows[0]));
	input_build[26] = ft_digit_to_char(ft_invert_view(rows[1]));
	input_build[28] = ft_digit_to_char(ft_invert_view(rows[2]));
	input_build[30] = ft_digit_to_char(ft_invert_view(rows[3]));

	return (input_build);
}

