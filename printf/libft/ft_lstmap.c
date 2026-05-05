/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:26:41 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/27 15:25:56 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/* void *fn(void *c) { return ft_strdup((char *)c); }
void del(void *c) { free(c); }
int main(void)
{
	t_list *lst = ft_lstnew("one");
	ft_lstadd_back(&lst, ft_lstnew("two"));
	t_list *mapped = ft_lstmap(lst, fn, del);
	while (mapped)
	{
		printf("%s\n", (char *)mapped->content);
		mapped = mapped->next;
	}
} */