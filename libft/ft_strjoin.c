/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:50:21 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/21 13:05:27 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	ft_strcat(result, s1);
	ft_strcat(result, s2);
	return (result);
}