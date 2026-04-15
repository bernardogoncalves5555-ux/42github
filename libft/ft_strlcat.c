/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <berduarte@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:48:00 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/15 15:15:28 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			i;
	size_t			j;
	size_t			total_len;

	total_len = ft_strlen(dest) + ft_strlen(src);
	i = ft_strlen(dest);
	j = 0;
	if (size <= ft_strlen(dest))
		return (total_len);
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (total_len);
}
