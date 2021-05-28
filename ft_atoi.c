#include "libft.h"
int	ft_atoi(const char *str)
{
	int					i;
	int					znak;
	unsigned long long	num;

	i = 0;
	znak = 1;
	num = 0;
	if (!str[i])
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' ||str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			znak = -1;
	while (str[i] >= '0' && str[i] <= '9')
		num = num * 10 + str[i++] - '0';
	return ((int)(num * znak));
}
