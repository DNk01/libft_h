#include "libft.h"
void	*ft_calloc(size_t num, size_t size)
{
	size_t	n;
	void	*word;

	n = num * size;
	word = malloc(n);
	if (word)
		ft_memset(word, 0, n);
	return (word);
}
