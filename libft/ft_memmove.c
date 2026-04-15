/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <berduarte@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:54:24 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/15 13:47:36 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)src;
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			i--;
			p1[i] = p2[i];
		}
	}
	return (dest);
}
