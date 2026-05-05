/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:17:42 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/27 15:22:10 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

/* void del(void *c) { free(c); }
int main(void)
{
	t_list *lst = ft_lstnew(ft_strdup("one"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("two")));
	ft_lstclear(&lst, del);
	printf("%p\n", lst);
} */