#include "libft.h"
int	ft_strncmp(const char *string1, const char *string2, size_t num)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 1;
	if (num == 0)
		return (0);
	s1 = (unsigned char *)string1;
	s2 = (unsigned char *)string2;
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
		if (i < num)
			i++;
		else
			return (0);
	}
	return (*s1 - *s2);
}
