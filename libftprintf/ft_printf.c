/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:49:37 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/26 19:04:18 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(char const *format, ...)
{
	va_list	list;
	int	i;

	va_start(list, format);
	i = 0;
	while (i < format) //Atoi for change format(?)
	{
		va_arg(list,int);
		/*
		There must be the condionts
		*/
		i++;
	}
	
}