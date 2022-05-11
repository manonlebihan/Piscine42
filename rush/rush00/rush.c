/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:08:35 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/12 14:58:27 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x,int y)
{
	int line;
	int	col;

	line = 1;
	col = 1;
	while(line <= y)
	{
		while(col <= x)
		{
			if (line == 1 || line == y)
			{
				if (col == 1)
					ft_putchar('A');
				else if(col == x)
					ft_putchar('C');
				else
					ft_putchar('B');
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

int	main()
{
	rush(1,5);
	return 0;
}
