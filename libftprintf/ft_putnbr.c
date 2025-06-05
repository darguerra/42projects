/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:01:08 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/04 23:36:06 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/* Print a number in terminal */
int	ft_putnbr(int n, int fd)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		count++;
	}
	if (n > 9)
		count += ft_putnbr(n / 10, fd);
	ft_putchar((n % 10) + '0');
	return (count + 1);
}
/* int	main()
{
	int example;
	int example2;

	example = -2147483648;
	//example2 = 2;
	ft_putnbr(example,1);
	//ft_putnbr(example2, 1);
	return (1);
} */