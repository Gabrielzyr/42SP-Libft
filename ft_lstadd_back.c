#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
		return ;
	}
	new->next = NULL;
	*lst = new;
	return ;
}
