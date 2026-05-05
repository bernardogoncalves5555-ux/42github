/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:35:30 by beduarte          #+#    #+#             */
/*   Updated: 2026/04/27 15:07:39 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_digit_count(int n)
{
	unsigned int	digits;

	digits = 0;
	if (n <= 0)
		digits++;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	int		len;
	int		is_neg;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	is_neg = (n < 0);
	len = ft_digit_count(n);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (is_neg)
		n *= -1;
	len--;
	while (len >= 0)
	{
		result[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	if (is_neg)
		result[0] = '-';
	return (result);
}

/* int main(void)
{
	char *s = ft_itoa(42);
	printf("%s\n", s);
	free(s);
	s = ft_itoa(-2147483648);
	printf("%s\n", s);
	free(s);
} */