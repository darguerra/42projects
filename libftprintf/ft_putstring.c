/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:03:10 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/03 13:28:49 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Print a string in terminal */
int	ft_putstring(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		ft_putchar(string[i]);
		i++;
	}
	return (0);
}
/* int main()
{
	char *string = "Hola caracola";

	ft_putstring(string);
	return (0);
} */