/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:44:10 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/20 23:37:26 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "str.h"

/* display a character */
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

/* display a string */
void	ft_putstr(char *c)
{
	write(1, c, ft_strlen(c));
}

/* display a digit */
void	ft_putdigit(int i)
{
	ft_putchar('0' + i);
}

/* display a combination (a line of digits between 1 and 4, terminated by a line break) */
void ft_display_row(int *c) 
{
	int i;

	i = 0;
	while (i < 4) 
	{
		if (i > 0) {
			ft_putchar (' ');
		}
		ft_putdigit (c[i++]);
	}
	ft_putchar ('\n');
}

/* display a grid represened by those 4 rows by displaying each of them on a line */
void ft_display_grid(int **rows) 
{
	int i;

	i = 0;
	while (i < 4)
	{
		ft_display_row(rows[i]);
		i++;
	}
}
