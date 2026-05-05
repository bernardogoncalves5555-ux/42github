/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:56:43 by beduarte          #+#    #+#             */
/*   Updated: 2026/05/05 17:08:14 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

static int	print_hex_pointer(uintptr_t nbr)
{
	int	len;

	len = 0;
	if (nbr >= 16)
	{
		len += print_hex_pointer(nbr / 16);
	}
	write(1, &"0123456789abcdef"[nbr % 16], 1);
	len++;
	return (len);
}

int	print_pointer(void *p)
{
	int len;
	uintptr_t nbr;

	len = 0;
	if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	nbr = (uintptr_t)p;
	len += write(1, "0x", 2);
	len += print_hex_pointer(nbr);
	return (len);
}