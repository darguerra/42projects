/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:14:42 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/30 18:00:16 by darguerr         ###   ########.fr       */
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
			
		}
		else if (character == 'p')
		{
			/* code */
		}
		else if (character == 'd')
		{
			/*here putnbr*/
		}
		else if (character == 'i')
		{
			/* here putnbr */
		}
		else if (character == 'u')
		{
			/* code */
		}
		else if (character == 'x')
		{
				/*Here puthxd*/			
		}
		else if (character == 'X')
		{
			/* Here puthxd */
		}
		else if (character == '%')
		{
				/* code */
		}
		return (0);
}