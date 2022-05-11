/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:40:02 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/23 17:04:52 by mle-biha         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	int				dest_size;

	index = 0;
	dest_size = ft_strlen(dest);
	while (index < nb && src[index] != '\0')
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
    ft_strncat(dest, src, 3);
    printf("Destination : %s\nSource : %s\n", dest, src);
	return (0);
}*/
