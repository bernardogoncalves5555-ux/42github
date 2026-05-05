/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:27:25 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/27 15:21:49 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int main(void)
{
	t_list *lst = ft_lstnew("two");
	ft_lstadd_front(&lst, ft_lstnew("one"));
	while (lst) { printf("%s\n", (char *)lst->content); lst = lst->next; }
} */