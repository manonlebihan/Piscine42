/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:36:00 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/27 23:20:48 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_check.h"

char	*ft_trim_left(char *str, int start, int end)
{
	int		index;
	char	*str_copy;

	index = start;
	str_copy = (char *)malloc(sizeof(char) * (end - start + 1));
	while (start <= end && (str[start] >= '0' && str[start] <= '9'))
	{
		str_copy[index - start] = str[start];
		start++;
	}
	str_copy[index - start] = '\0';
	return (str_copy);
	free(str_copy);
}

char	*ft_trim_right(char *str, int start, int end)
{
	int		index;
	char	*str_copy;

	index = start;
	str_copy = (char *)malloc(sizeof(char) * (end - start + 1));
	while (start != end && (str[start] == ' ' || str[start] == ':'))
		start++;
	while (start != end && (str[start] >= 'a'
			&& str[start] <= 'z') && str[start] != '\n')
	{
		str_copy[index - start] = str[start];
		start++;
	}
	str_copy[index - start] = '\0';
	return (str_copy);
	free(str_copy);
}

char	***init_arr(char *str, int size, int *lines)
{
	int		index;
	int		nb_line;
	char	***arr;

	nb_line = 0;
	index = 0;
	while (size)
	{
		if (str[size] == '\n')
			nb_line++;
		size--;
	}
	nb_line += 2;
	arr = (char ***)malloc(sizeof(char **) * nb_line);
	while (index < nb_line - 1)
	{
		arr[index] = NULL;
		index++;
	}
	arr[nb_line - 1] = NULL;
	*lines = nb_line;
	return (arr);
	free(arr);
}

char	**ft_parse_line(char *str)
{
	int		left_start;
	int		left_end;
	int		right_start;
	int		right_end;
	char	**line;

	left_start = 0;
	left_end = 0;
	line = malloc(sizeof(char *) * 2);
	while (str[left_end] && str[left_end] != ':')
		left_end++;
	right_start = left_end + 2;
	right_end = right_start;
	while (str[right_end] && str[right_end] != '\n')
		right_end++;
	line[0] = ft_trim_left(str, left_start, left_end);
	line[1] = ft_trim_right(str, right_start, right_end);
	return (line);
	free(line);
}
