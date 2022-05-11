/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:55:32 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/20 23:40:04 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIND_H
# define FIND_H

int	find(char *input_program);
int ft_is_compatible(int *c1, int *c2);
int **ft_get_cols(int **rows);
char *build_input(int **rows, int **cols);


#endif