#include "libft.h"
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	s = ft_strlen(s1);
	while (s && ft_strchr(set, s1[s]))
		s--;
	str = ft_substr((char *)s1, 0, s + 1);
	return (str);
}
