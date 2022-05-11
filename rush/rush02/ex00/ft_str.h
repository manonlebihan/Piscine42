/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:36:50 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/27 23:24:00 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H

void			ft_putchar(char c);
unsigned int	ft_strlen(char *str);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
char			**ft_split(char *str, char **lines, char charset);

#endif
