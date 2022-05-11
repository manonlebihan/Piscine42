/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:49:45 by mle-biha          #+#    #+#             */
/*   Updated: 2022/03/20 23:35:53 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* calculate the length of a string */
int	ft_strlen(char *string)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (string[i++] != '\0')
		len++;
	return (len);
}

/* convert a digit into a char */
char	ft_digit_to_char(int i)
{
	return ('0' + i);
}

/* fill a string with a given character */
void	ft_fill(char *string, int len, char c)
{
	int		i;

	i = 0;
	while (i < len)
	{
		string[i] = c;
		i++;
	}
}

/* compare two strings to see if they are equals */
int	ft_strcmp(char *string1, char *string2)
{
	int		i;
	int		len1;
	int		len2;

	len1 = ft_strlen(string1);
	len2 = ft_strlen(string2);
	if (len1 != len2)
		return (0);
	i = 0;
	while (i < len1)
	{
		if (string1[i] != string2[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
