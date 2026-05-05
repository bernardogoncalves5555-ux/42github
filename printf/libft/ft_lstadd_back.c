/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:00:52 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/27 15:21:36 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/* int main(void)
{
	t_list *lst = ft_lstnew("one");
	ft_lstadd_back(&lst, ft_lstnew("two"));
	ft_lstadd_back(&lst, ft_lstnew("three"));
	while (lst) { printf("%s\n", (char *)lst->content); lst = lst->next; }
} */