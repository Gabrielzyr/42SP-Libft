#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*end;

	if (lst == NULL)
		return (lst);
	while (lst != NULL)
	{
		end = lst;
		lst = lst->next;
	}
	return (end);
}
