/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <berduarte@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:00:55 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/15 16:09:23 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	if (c == '\0')
		return ((char *)&s[i + 1]);
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[0] == c)
		return ((char *)&s[0]);
	return (0);
}
