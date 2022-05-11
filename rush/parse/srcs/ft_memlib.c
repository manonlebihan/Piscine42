#include <stdlib.h>
#include "ft_strlib.h"

char	*ft_resize_str(char *buffer)
{
	char	*str;
	
	str = (char *)malloc(sizeof(char) * (ft_strlen(buffer) + 1));
	while (*(buffer - 1))
	{
		*str = *buffer;
		str++;
		buffer++;
	}
	return (str);
}

char	*ft_str_frto(char *start, char *end)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (end - start));
	while (start != end)
	{
		*str = *start;
		start++;
		end++;
	}
	return (str);
}