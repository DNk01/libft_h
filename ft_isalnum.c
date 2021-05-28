#include "libft.h"
int	ft_isalnum(int ch)
{
	if ((ch >= '0' && ch <= '9' ) || (ch >= 'A' && 'Z' >= ch)
		|| (ch >= 'a' && 'z' >= ch))
		return (1);
	return (0);
}
