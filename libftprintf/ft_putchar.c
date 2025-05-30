/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:01:43 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/30 13:09:08 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(char c)
{
	write(1, &c,1);
	return (0);
}
/*int	main(void)
{
	ft_putchar('c');
	ft_putchar('o');
	ft_putchar('c');
	ft_putchar('a');
	ft_putchar('\n');
	ft_putchar('c');
	ft_putchar('o');
	ft_putchar('l');
	ft_putchar('a');

	return (0);
}*/