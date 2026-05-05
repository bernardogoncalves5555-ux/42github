/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:11:01 by beduarte          #+#    #+#             */
/*   Updated: 2026/05/05 16:28:27 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_number(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count += write(1, "-2147483648", 11);
		return (count);
	}
	if (n < 0)
	{
		count += print_char('-');
		n *= -1;
	}
	if (n >= 10)
		count += print_number(n / 10);
	count += print_char('0' + n % 10);
	return (count);
}

/* int   main()
{
		print_number(-37527);
		return (0);
} */