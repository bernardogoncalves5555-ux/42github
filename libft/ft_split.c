/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:06:31 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/21 16:35:12 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_wordcount(const char *s, char c)
{
    size_t  i;
    size_t  count;

    i = 0;
    count = 0;
    while(s[i] != '\0')
    {
        if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
            count++;
        i++;
    }
    return (count);
}

static char *ft_getword(const char *s, char c, size_t start)
{
    while (start != c && start != '\0')
    
}

char    **ft_split(const char *s, char c)
{
    
}