#include "libft.h"
int	ft_isalpha(int ch)
{
	if ((ch >= 'A' && 'Z' >= ch) || (ch >= 'a' && 'z' >= ch))
		return (1);
	return (0);
}
