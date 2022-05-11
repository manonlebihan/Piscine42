/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:15:59 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/21 17:18:43 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/*int    main(void)
{
    char dest[20] = "";
    char src[] = "HelloTheWorld"; 
    printf("Destination : %s\nSource : %s\n", dest, src);
    ft_strcpy(dest, src);
    printf("Destination : %s\nSource : %s\n", dest, src);
}*/
