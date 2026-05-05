/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:29:11 by beduarte          #+#    #+#             */
/*   Updated: 2026/05/05 16:56:19 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += print_unsigned(n / 10);
	count += print_char('0' + n % 10);
	return (count);
}

/* int   main()
{
		print_unsigned(325481);
		return (0);
} */