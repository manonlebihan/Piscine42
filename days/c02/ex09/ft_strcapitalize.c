/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:29:59 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/21 19:09:11 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] += 32;
		}
		index++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		index;

	index = 0;
	ft_strlowcase(str);
	while (str[index] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'z')
			&& (index == 0 || (!(str[index - 1] >= '0'
						&& str[index - 1] <= '9')
					&& !(str[index - 1] >= 'a'
						&& str[index -1] <= 'z')
					&& !(str[index - 1] >= 'A'
						&& str[index - 1] <= 'Z'))))
		{
			str[index] -= 32;
		}		
		index++;
	}
	return (str);
}

/*int	main(void)
{
	char	c[]  = "salut, coMmEnt tu VAS ? 42mots quarantE-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(c));
	return (0);
}*/
