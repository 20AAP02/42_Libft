#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new;

    if (!(new = malloc(sizeof(t_list))))
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}

/*int main()
{
    int a = 7456356;
    t_list *lst = ft_lstnew(&a);
    printf("%i", *(int *)(lst->content));
    free(lst);
}*/