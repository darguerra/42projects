/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 07:43:14 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/31 08:54:51 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsignedint(unsigned int n)
{
	char			c;
	unsigned int	count;

	count = 0;
	if (n > 9)
		count += ft_putunsignedint(n / 10);
	c = (n % 10) + '0';
	ft_putchar(c);
	return (count + 1);
}

/* int	main(void)
{
    int	ret1;
    int	ret2;

    ret1 = ft_putunsignedint(-129);
    write(1, "\n", 1);
    ret2 = ft_putunsignedint(1998);
    write(1, "\n", 1);
    printf("Chars printed: %d, %d\n", ret1, ret2);
    return (0);
} */