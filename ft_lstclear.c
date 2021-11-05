/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <amaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:09:45 by amaria-m          #+#    #+#             */
/*   Updated: 2021/11/05 11:41:02 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (lst)
	{
		while (*lst)
		{
			ptr = (*lst)-> next;
			del((*lst)-> content);
			free(*lst);
			*lst = ptr;
		}
	}
}
