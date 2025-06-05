/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:03:10 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/05 19:02:44 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Print a string in terminal */
int	ft_putstring(char *string)
{
	int	i;

	i = 0;
	if (!string)
	{
		ft_putstring("(null)");
		return (6);
	}
	while (string[i] != '\0')
	{
		ft_putchar(string[i]);
		i++;
	}
	return (i);
}
/* int main()
{
	char *string = "Hola caracola";

	ft_putstring(string);
	return (0);
} */