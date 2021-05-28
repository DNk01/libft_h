#include "libft.h"
char	*ft_strrchr(char *string, int symbol)
{
	int	i;

	i = ft_strlen(string);
	if (symbol == 0)
		return ((char *)string + i);
	while (i-- >= 0)
		if (string[i] == symbol)
			return ((char *)&string[i]);
	return (NULL);
}
