#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *ptr;

    ptr = lst;
    while (ptr -> next != NULL)
        ptr = ptr -> next;
    return (ptr);
}