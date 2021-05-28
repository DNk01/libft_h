#include "libft.h"
void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t				i;
	unsigned const char	*a;
	unsigned char		cc;

	i = 0;
	a = (unsigned const char *) arr;
	cc = (unsigned char) c;
	while (i < n)
	{
		if (a[i] == cc)
			return ((void *)&a[i]);
		i++;
	}
	return (NULL);
}
