/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:52:37 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/20 22:31:38 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

void	ft_putchar(char c);
int		ft_strlen(char *string);
void	ft_putstr(char *c);
void	ft_putdigit(int i);
char	ft_digit_to_char(int i);
void	ft_fill(char *string, int len, char c);
int		ft_strcmp(char *string1, char *string2);

#endif
