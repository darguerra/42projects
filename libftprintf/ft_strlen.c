/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:23:30 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/26 13:16:49 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Return the lenght of a string*/
unsigned	int	ft_strlen(const char *str )
{
	unsigned int	le;

	le = 0;
	while (str[le] != '\0')
	{
		le++;
	}
	return (le);
}
