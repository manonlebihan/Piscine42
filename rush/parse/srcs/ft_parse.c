// [a number][0 to n spaces]:[0 to n spaces][any printable characters]\n
#include <stdlib.h>
#include "ft_memlib.h"
/*
function who determine if a character is printable or not.
*/
int     ft_is_printable(char c)
{
    if (c < ' ' || c > '~')
        return (0);
    return (1);
}

int     ft_is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

/*
recreate a char * who store only the result of the left trim.
destroy str
*/
char    *ft_trim_left(char *str)
{
    char    *start;
    char    *_str;

    start = str;
    while (*str && ft_is_digit(*str))
        str++;
    _str = (char*)malloc(sizeof(char) * (str - start));
    while (str != start)
    {
        *_str = *start;
        start++;
        _str++;
    }
    return _str;
}

char    *ft_trim_right(char *str)
{
    char    *start;
    char    *_str;

    while (*str && !ft_is_printable(*str))
        str++;
    start = str;
    while (*str && ft_is_digit(*str))
        str++;
    _str = (char*)malloc(sizeof(char) * (str - start));
    while (str != start)
    {
        *_str = *start;
        start++;
        _str++;
    }
    return _str;
}

char    ***init_tab(char ***tab, char *str)
{
    int	count;

	count = 0;
	while (*str)
		if (*str == '\n')
			count++;
	tab = (char ***)malloc(sizeof(char **) * (count + 2));
	*(tab + count + 1) = NULL;
    return (tab);
}

char    **ft_parse_line(char *str)
{
    char    *left;
    char    *left_end;
    char    *right;
    char    *right_end;
    char    **line;

    left = str;
	line = (char**)malloc(sizeof(char*) * 2);
    while (*str && *str != ':')
        str++;
    left_end = str - 1;
    str++;
    right = str;
    while (*str && *str != '\n')
        str++;
    right_end = str - 1;
	line[0] = ft_trim_left(ft_str_frto(left, left_end));
	line[1] = ft_trim_right(ft_str_frto(right, right_end));
	return (line);
}
