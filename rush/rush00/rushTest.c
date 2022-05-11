/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:54:21 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/12 15:45:13 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
		int line;
		int col;

		line = 1;
		col = 1;

		while (line <= y)
		{
			while (col <= x)
			{
				if (line == 1 || line == y)
				{
					if (col  == 1)
						ft_putchar('A');
					if (col > 1 && col < x)
						ft_putchar('B');
					if (col == x)
						ft_putchar('C');		
				}
				else
				{
					if (col == 1 || col == x)
						ft_putchar('B');
					else
						ft_putchar(' ');
				}
				col++;
			}
			ft_putchar('\n');
			line++;
			col = 1;
		}
}

int main()
{
	rush(23,356);
}
