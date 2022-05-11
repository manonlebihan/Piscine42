/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:31:57 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/23 17:05:34 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	dest_size;

	index = 0;
	dest_size = ft_strlen(dest);
	while (src[index] != '\0')
	{
		dest[dest_size + index] = src[index];
		index++;
	}
	dest[dest_size + index] = '\0';
	return (dest);
}

/*int    main(void)
{
    char dest[200] = "Manon";
    char src[] = "Victor"; 
    printf("Destination : %s\nSource : %s\n", dest, src);
    ft_strcat(dest, src);
    printf("Destination : %s\nSource : %s\n", dest, src);
	return (0);
}*/
