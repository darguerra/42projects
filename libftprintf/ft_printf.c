/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:49:37 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/28 18:20:17 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(char const *format, ...)
{
	va_list	list;
	int	i;

	va_start(list, format);
	i = 0;
	while (i < ft_strlen(format))
	{
		if(format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				write(1, va_arg(list, char), 1);
			}
			else if (format[i + 1] == 's')
			{
				
			}
			else if (format[i + 1] == 'p')
			{
				/* code */
			}
			else if (format[i + 1] == 'd')
			{
				va_arg(list,int);
			}
			else if (format[i] == 'i')
			{
				/* code */
			}
			else if (format[i] == 'u')
			{
				/* code */
			}
			else if (format[i] == 'x')
			{
				/* code */
			}
			else if (format[i] == 'X')
			{
				/* code */
			}
			else if (format[i] == '%')
			{
				/* code */
			}
		}
		i++; /* This site may be incorrect*/
	}

}