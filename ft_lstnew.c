#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <stdio.h>

// int main()
// {
// 	t_list *ret;

// 	ret = ft_lstnew((void *)42);
// 	printf("return: %d", (int)ret);
// 	return (0);
// }