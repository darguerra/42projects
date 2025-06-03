/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:01:08 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/03 13:37:55 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/* Print a number in terminal */
void	ft_putnbr(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10, fd);
	c = (n % 10) + '0';
	ft_putchar(c);
	return ;
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