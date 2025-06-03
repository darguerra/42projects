/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthxd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:53:39 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/03 13:12:50 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/* This function print a decimal number in hexadecimal number */
int	ft_puthxd(unsigned int num, int uppercase)
{
	const char	*hex;
	int		count;

	count = 0;
	hex = (uppercase == 0) ? "0123456789abcdef" : "0123456789ABCDEF";

	if (num >= 16)
		count += ft_puthxd(num / 16, uppercase);
	ft_putchar(hex[num % 16]);
	return (count + 1);
}
/*int	main(void)
{
    int result;
    
    result = ft_puthxd(255, 0);  // Should print "ff" and return 2
    ft_putchar('\n');
    printf("Chars printed: %d\n", result);
    
    result = ft_puthxd(255, 1);  // Should print "FF" and return 2
    ft_putchar('\n');
    printf("Chars printed: %d\n", result);
    
    return (0);
} */
