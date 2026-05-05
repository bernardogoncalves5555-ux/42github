/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:00:55 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/27 15:20:19 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	int				i;

	uc = (unsigned char)c;
	i = (int)ft_strlen(s) - 1;
	if (uc == '\0')
		return ((char *)&s[i + 1]);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == uc)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/* int main(void)
{
	printf("%s\n", ft_strrchr("hello", 'l'));
	printf("%p\n", ft_strrchr("hello", 'z'));
	printf("%s\n", ft_strrchr("hello", '\0'));
} */