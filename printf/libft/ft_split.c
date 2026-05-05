/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:06:31 by username          #+#    #+#             */
/*   Updated: 2026/04/27 15:17:11 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_getword(const char *s, char c, int start)
{
	int		len;
	int		j;
	char	*word;

	len = 0;
	while (s[start + len] != c && s[start + len] != '\0')
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	j = 0;
	while (j < len)
	{
		word[j] = s[start + j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

static void	ft_free(char **result, int created_words)
{
	while (created_words > 0)
		free(result[--created_words]);
	free(result);
}

static char	**ft_fill(char **result, const char *s, char c)
{
	int	created_words;
	int	i;

	created_words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			result[created_words] = ft_getword(s, c, i);
			if (!result[created_words])
			{
				ft_free(result, created_words);
				return (NULL);
			}
			created_words++;
		}
		i++;
	}
	result[created_words] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!result)
		return (NULL);
	return (ft_fill(result, s, c));
}

/* int main(void)
{
	char **res = ft_split("one,two,three", ',');
	for (int i = 0; res[i]; i++)
	{
		printf("%s\n", res[i]);
		free(res[i]);
	}
	free(res);
} */