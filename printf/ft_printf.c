/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beduarte <beduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 14:45:16 by beduarte          #+#    #+#             */
/*   Updated: 2026/05/06 16:36:35 by beduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_specifier(char spec, va_list ap)
{
	if (spec == 'c')
		return (print_char((char)va_arg(ap, int)));
	if (spec == 's')
		return (print_string(va_arg(ap, char *)));
	if (spec == 'p')
		return (print_pointer(va_arg(ap, void *)));
	if (spec == 'd' || spec == 'i')
		return (print_number(va_arg(ap, int)));
	if (spec == 'u')
		return (print_unsigned(va_arg(ap, unsigned int)));
	if (spec == 'x')
		return (print_hex(va_arg(ap, unsigned int), 0));
	if (spec == 'X')
		return (print_hex(va_arg(ap, unsigned int), 1));
	if (spec == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	int			count;

	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += handle_specifier(format[i + 1], ap);
			i++;
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}
