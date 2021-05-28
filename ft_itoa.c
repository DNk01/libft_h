#include "libft.h"
size_t	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{	
		n = n /10;
		len++;
	}
	return (len);
}

void	ft_neg(char *str, int *n, size_t *i)
{
	str[0] = '-';
	*n = *n * -1;
	*i = *i + 1;
}

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	size;
	char	*str;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	size = ft_nbrlen(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	str[size] = 0;
	if (n < 0)
		ft_neg(str, &n, &i);
	while (i < size--)
	{
		str[size] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
