#include "libft.h"
char	*ft_strchr(const char *string, int symbol)
{
	int	i;

	i = 0;
	while (string[i] != (char)symbol)
		if (!string[i++])
			return (NULL);
	return ((char *)&string[i]);
}
