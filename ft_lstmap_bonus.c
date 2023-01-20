
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newls;
	t_list	*ls;

	if (!lst)
		return (0);
	newls = 0;
	while (lst)
	{
		ls = ft_lstnew(f(lst->content));
		if (!ls)
		{
			ft_lstclear(&newls, del);
			return (0);
		}
		ft_lstadd_back(&newls, ls);
		lst = lst->next;
	}
	return (newls);
}
