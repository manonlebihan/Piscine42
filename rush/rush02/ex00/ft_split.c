/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:36:22 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/27 23:23:08 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_str.h"

#define MAX_SIZE 1500

void	ft_copy_into(char *str, char *dest)
{
	while (*str)
	{
		*dest = *str;
		str++;
		dest++;
	}
	*dest = '\0';
}

char	**ft_split(char *str, char **arr, char charset)
{
	int		count;
	int		size;
	char	buff[MAX_SIZE];

	count = 0;
	size = 0;
	while (str[size] != '\0')
	{
		size = 0;
		while (str[size] != charset)
		{
			buff[size] = str[size];
			size++;
		}
		buff[size] = '\0';
		arr[count] = malloc(sizeof(char) * (ft_strlen(buff) + 1));
		ft_copy_into(buff, arr[count]);
		count++;
		str = &(str[size + 1]);
	}
	arr[count] = NULL;
	return (arr);
}
