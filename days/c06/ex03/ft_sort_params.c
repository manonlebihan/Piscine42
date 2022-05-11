/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 01:59:33 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/31 03:02:54 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}

void	ft_print_argv(int argc, char **argv)
{
	while (argc > 1)
	{
		ft_putstr(*(argv));
		ft_putstr("\n");
		argv++;
		argc--;
	}
}

int	main(int argc, char **argv)
{
	int		count;
	int		count2;
	char	*buff;

	count2 = 1;
	while (count2 < argc)
	{
		count = 1;
		while (count < argc - 1)
		{
			if (ft_strcmp(argv[count], argv[count + 1]) > 0)
			{
				buff = argv[count];
				argv[count] = argv[count + 1];
				argv[count + 1] = buff;
			}			
			count++;
		}
		count2++;
	}	
	argv++;
	ft_print_argv(argc, argv);
	return (0);
}
