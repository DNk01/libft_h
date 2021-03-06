#include "libft.h"
void	*ft_memccpy(void *dst, const void *src, int ch, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	i = 0;
	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	while (i < n)
	{
		dest[i] = source[i];
		if (source[i] == (unsigned char)ch)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
