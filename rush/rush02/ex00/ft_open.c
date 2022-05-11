/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:33:40 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/27 23:16:47 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "ft_str.h"
#include "ft_parse.h"
#include "ft_check.h"

#include <stdio.h>

char	**ft_read_file(char *file)
{
	int		fd;
	int		read_file;
	int		close_file;
	char	*store_file;
	char	**lines;

	fd = open(file, O_RDONLY);
	ft_check_action(fd);
	store_file = (char *)malloc(sizeof(char) * 3000);
	read_file = read(fd, store_file, 3000);
	ft_check_action(read_file);
	close_file = close(fd);
	ft_check_action(close_file);
	lines = malloc(sizeof(char) * 1500);
	lines = ft_split(store_file, lines, ':');
	free(store_file);
	free(lines);
	return (lines);
}

void	ft_read_dict(char *file)
{
	char	***dict;
	char	***save;
	char	**lines;

	lines = ft_read_file(file);
	dict = malloc(sizeof(char **) * 5);
	save = dict;
	while (*lines != NULL)
	{
		*dict = malloc(1000);
		ft_split(*lines, *dict, ':');
		lines++;
		dict++;
	}
	dict = save;
	free(dict);
}

int	main(void)
{
	ft_read_dict("numbers.dict");
	return (0);
}
