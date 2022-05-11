#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#include "ft_strlib.h"

# define BUF_SIZE 8192

char	*ft_resize_str(char *buffer);
char    **ft_parse_line(char *str);
char    ***init_tab(char ***tab, char *str);

char	*read_file(char *path)
{
	int		file_descriptor;
	int		read_octets;
	char	*buffer;
	char	*str;
	char	***tab;

	file_descriptor = open(path, O_RDONLY);
	if (file_descriptor == -1)
	{
		ft_putstr("An error occured\n");	
		return (NULL);
	}
	buffer = (char *)malloc(sizeof(char) * BUF_SIZE);
	read_octets = read(file_descriptor, buffer, BUF_SIZE);
	if (read_octets == -1)
		ft_putstr("An error occured");
	if (close(file_descriptor) == -1)
	{
		ft_putstr("An error occured\n");	
		return (NULL);
	}
	str = ft_resize_str(buffer);

	tab = init_tab(tab, str);
	while (*tab != NULL)
	{
		*tab = ft_parse_line(str);
		ft_putstr(**tab);
		ft_putstr(**tab);
		tab++;
	}
	free(buffer);
	return (str);
}

int	main()
{
	read_file("numbers.dict");
	return (0);
}