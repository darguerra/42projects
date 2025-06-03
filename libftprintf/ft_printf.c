/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:49:37 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/31 09:27:01 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *format, ...)
{
	va_list			list;
	unsigned int	i;
	int				count;

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
		ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (count);
}
