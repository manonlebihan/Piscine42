/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 08:32:31 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/23 20:56:57 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

/*int	main(void)
{
	char dest[] = "Manon";
	char src[] = "HelloTheWorld"; 
	printf("Destination : %s\nSource : %s\n", dest, src);
	ft_strncpy(dest, src, 5);
	printf("Destination : %s\nSource : %s\n", dest, src);
}*/
