#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst && new)
    {
        new->next = *lst;
        *lst = new;
    }
}

/*t_list *ft_lstnew(void *content)
{
    t_list *new;

    if (!(new = malloc(sizeof(t_list))))
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ptr;

    ptr = *lst;
    while (ptr -> next != NULL)
        ptr = ptr -> next;
    ptr -> next = new;
}

int main()
{
    int a = 9;
    int b = 3;
    int c = 1;
    t_list *lst;
    
    lst = ft_lstnew(&a);
    ft_lstadd_front(&lst, ft_lstnew(&b));

    ft_lstadd_back(&lst, ft_lstnew(&c));
}*/