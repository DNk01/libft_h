#include "libft.h"
void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list		*begin;

	if (alst)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			begin = ft_lstlast((*alst));
			begin->next = new;
		}
	}
}
