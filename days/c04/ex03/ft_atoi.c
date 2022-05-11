/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:10:53 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/28 22:13:44 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_issign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	else
		return (0);
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_ctoi(char c)
{
	return (c - '0');
}

int	ft_atoi(char *str)
{
	int	index;
	int	sign;
	int	value;

	index = 0;
	while (str[index] != '\0' && ft_isspace(str[index]) != 0)
		index++;
	sign = 1;
	while (str[index] != '\0' && ft_issign(str[index]) != 0)
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	value = 0;
	while (str[index] != '\0' && ft_isdigit(str[index]) != 0)
	{
		value = value * 10 + ft_ctoi(str[index]);
		index++;
	}
	return (sign * value);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n", ft_atoi(argv[1]));
}*/
