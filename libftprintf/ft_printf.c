/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:49:37 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/31 08:31:28 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *format, ...)
{
	va_list	list;
	int		i;
	int		count;

	va_start(list, format);
	count = 0;
	i = 0;
	while (i < ft_strlen(format))
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				ft_putchar('%');
			}
			count += ft_selector(format[i], list, i);
		}
		i++;
		ft_putchar(format[i]);
	}
	va_end(list);
	return (0);
}
