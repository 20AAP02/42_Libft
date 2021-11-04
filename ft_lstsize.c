#include "libft.h"

int	ft_lstsize(t_list *lst)
{
		int	i;
		t_list	*ptr;

		i = 0;
		ptr = lst;
		while (ptr -> next != NULL)
		{
				i++;
				ptr = ptr -> next;
		}
		if (ptr->next == NULL)
		i++;
		return (i);
}
