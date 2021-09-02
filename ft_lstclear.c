#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	int	i;
	t_list	*temp;

	temp = *lst;
	i = 0;
	while (lst)
	{
		ft_lstdelone(temp, del);
		temp = temp->next;
	}
	*lst = NULL;
}