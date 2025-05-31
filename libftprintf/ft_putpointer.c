/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 08:10:26 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/31 08:41:26 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putpointer(void *ptr)
{
	int				count;
	unsigned long	resultptr;

	count = 0;
	resultptr = (unsigned long)ptr;
	if (ptr == NULL)
	{
		ft_putstring("nil");
		return (3);
	}
	ft_putstring("0x");
	count += 2;
	count += ft_puthxd(resultptr, 0);
	return (count);
}
