/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:54:36 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/27 15:23:53 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/* int main(void)
{
	t_list *lst = ft_lstnew("one");
	ft_lstadd_back(&lst, ft_lstnew("two"));
	ft_lstadd_back(&lst, ft_lstnew("three"));
	printf("%d\n", ft_lstsize(lst));
} */