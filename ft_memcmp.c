#include "libft.h"
int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	size_t			i;
	unsigned char	*b1;
	unsigned char	*b2;

	i = 0;
	b1 = (unsigned char *) buf1;
	b2 = (unsigned char *) buf2;
	while ((i < count) && b1[i] == b2[i])
		i++;
	if (i == count)
		return (0);
	else
		return (b1[i] - b2[i]);
}
