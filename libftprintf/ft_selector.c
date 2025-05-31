/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:14:42 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/31 08:25:45 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_selector(char character, va_list list, int iterator)
{
	iterator++;
		if (character == 'c')
		{
			ft_putchar(va_arg(list, char));
		}
		else if (character == 's')
		{
			ft_putstring(va_arg(list, char *));
		}
		else if (character == 'p')
		{
			ft_putpointer(va_arg(list, void *));
		}
		else if (character == 'd')
		{
			ft_putnbr(va_arg(list, int), 1);
		}
		else if (character == 'i')
		{
			ft_putnbr(va_arg(list, int), 1);
		}
		else if (character == 'u')
		{
			ft_putunsignedint(va_arg(list, int));
		}
		else if (character == 'x')
		{
			ft_puthxd(va_arg(list, int),0);
		}
		else if (character == 'X')
		{
			ft_puthxd(va_arg(list, int),1);
		}
		else if (character == '%')
		{
			ft_putchar('%');
		}
		return (1);
}