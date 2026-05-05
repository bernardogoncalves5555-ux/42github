/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 14:27:12 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/27 15:06:01 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*s;

	if (nmemb != 0 && size > ((size_t)-1) / nmemb)
		return (NULL);
	s = malloc(nmemb * size);
	if (!s)
		return (NULL);
	ft_bzero(s, nmemb * size);
	return (s);
}

/* int main(void)
{
	int *p = ft_calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++)
		printf("%d\n", p[i]);
	free(p);
} */