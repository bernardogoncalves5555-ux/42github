/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:31:49 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/21 15:30:49 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_inset(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t start;
	size_t end;
	char *res;
	size_t i;

	start = 0;
	end = ft_strlen(s1);
	i = 0;
	if (end == 0)
	{
		res = malloc(1);
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	end--;
	while (s1[start] != '\0' && ft_inset(s1[start], set))
		start++;
	while (end > start && ft_inset(s1[end], set))
		end--;
	if (ft_inset(s1[start], set))
		return (ft_strdup(""));
	res = malloc(end - start + 2);
	if (!res)
		return (NULL);
	while (start <= end)
	{
		res[i] = s1[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}