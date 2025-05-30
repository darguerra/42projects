/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthxd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:53:39 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/30 20:57:17 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthxd(unsigned int num, int uppercase)
{
	const char	*hex_lower;
	const char	*hex_upper;
	int	count;
	char	c;

	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";

	if (uppercase == 0)
	{
		if (num < 16)
			ft_putchar(hex_lower[num]);
		else
			ft_puthxd(num / 16, 0);
		c = (num % 16) + '0';
		ft_putchar(hex_lower[num]);
	return (count);
	}
	else
	{
		if (num < 16)
			ft_putchar(hex_upper[num]);
		else
			ft_puthxd(num / 16, 0);
		c = (num % 16) + '0';
		ft_putchar(hex_upper[num]);
	return (count);
	}
}