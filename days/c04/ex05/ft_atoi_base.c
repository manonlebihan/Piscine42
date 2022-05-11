/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:59:07 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/29 09:40:10 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_get_val(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int	ft_is_in_base(char c, char *base)
{
	int	i;
	int	found;

	i = 0;
	found = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			found = 1;
			break ;
		}
		i++;
	}
	return (found);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_is_base_valid(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] < '!' || base[i] > '~' || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	val;

	if (!ft_is_base_valid(base))
		return (0);
	i = 0;
	while (str[i] != '\0' && (str[i] == ' '
			|| (str[i] >= '\t' && str[i] <= '\r')))
		i++;
	sign = 1;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	val = 0;
	while (str[i] != '\0' && ft_is_in_base(str[i], base))
	{
		val = val * ft_strlen(base) + ft_get_val(str[i], base);
		i++;
	}
	return (sign * val);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", ft_atoi_base(argv[1], argv[2]));
}*/
