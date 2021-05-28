#include "libft.h"
void	ft_bzero (void *s, size_t n)
{
	unsigned char	*cha;
	size_t			i;

	i = 0;
	cha = (unsigned char *)s;
	while (n--)
		*cha++ = 0;
}
