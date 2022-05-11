/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:07:43 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/31 20:18:17 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;
	int	len;

	len = ft_strlen(to_find);
	if (len == 0)
		return (str);
	while (str[i] != '\0' && n < len)
	{
		if (str[i++] == to_find[n])
			n++;
		else
			n = 0;
	}
	if (n == 0 || n < len)
		return (NULL);
	return (str + (i - n));
}

/*int    main(void)
{
    char str[] = "l'ane trotro, l'ane trotro, trop trop rigolo";
    char to_find[] = "trop";
	if (ft_strstr(str, to_find) == NULL)
		printf("null frere");
	else
    	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}*/
