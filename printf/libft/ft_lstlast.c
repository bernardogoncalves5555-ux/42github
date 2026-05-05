/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:59:05 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/27 15:23:04 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int main(void)
{
	t_list *lst = ft_lstnew("one");
	ft_lstadd_back(&lst, ft_lstnew("two"));
	ft_lstadd_back(&lst, ft_lstnew("three"));
	printf("%s\n", (char *)ft_lstlast(lst)->content);
} */