/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 08:10:26 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/03 13:54:37 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/* Prints a pointer address in hexadecimal format
(0x prefix) or "nil" for NULL pointers.
Returns the number of characters printed. */
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
/* int	main(void)
{
	int num = 422;
	int *ptrExample;
	char *ptrExample1;
	int	count1;
	int count2;

	ptrExample = &num;
	ptrExample1 = "Hello Dario";
	count1 = ft_putpointer(ptrExample);
	ft_putchar('\n');
	count2 = ft_putpointer(ptrExample1);
	ft_putchar('\n');
	ft_putstring("fist: \n");
	ft_putnbr(count1,1);
	ft_putchar('\n');
	ft_putstring("second: \n");
	ft_putnbr(count2, 1);
	return(0);
} */