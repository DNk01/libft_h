#include "libft.h"
void	*ft_memset(void *word, int c, size_t n)
{
	unsigned char	*cha;

	cha = (unsigned char *)word;
	while (n--)
		*cha++ = (unsigned char)c;
	return (word);
}
