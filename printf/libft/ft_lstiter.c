/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:22:39 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/27 15:22:47 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void fn(void *c) { printf("%s\n", (char *)c); }
int main(void)
{
	t_list *lst = ft_lstnew("one");
	ft_lstadd_back(&lst, ft_lstnew("two"));
	ft_lstiter(lst, fn);
} */