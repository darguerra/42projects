/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:14:42 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/04 23:56:57 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_selector(char character, va_list list)
{
	if (character == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (character == 's')
		return (ft_putstring(va_arg(list, char *)));
	else if (character == 'p')
		return (ft_putpointer(va_arg(list, void *)));
	else if (character == 'd' || character == 'i')
		return (ft_putnbr(va_arg(list, int), 1));
	else if (character == 'u')
		return (ft_putunsignedint(va_arg(list, unsigned int)));
	else if (character == 'x')
		return (ft_puthxd(va_arg(list, unsigned int), 0));
	else if (character == 'X')
		return (ft_puthxd(va_arg(list, unsigned int), 1));
	else if (character == '%')
		return (ft_putchar('%'));
	return (0);
}
