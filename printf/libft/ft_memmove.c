/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:54:24 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/27 15:08:45 by beduarte         ###   ########.fr       */
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

/* int main(void)
{
	char buf[] = "memmove";
	ft_memmove(buf + 2, buf, 4);
	printf("%s\n", buf);
	char buf2[] = "overlap";
	ft_memmove(buf2, buf2 + 2, 4);
	printf("%s\n", buf2);
} */