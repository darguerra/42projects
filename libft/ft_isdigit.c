/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:33:41 by darguerr          #+#    #+#             */
/*   Updated: 2025/04/28 12:11:21 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int n)
{
	int	result;

	result = 0;
	if (n >= 48 && n <= 57)
	{
		result += 1;
		return (result);
	}
	else
	{
		return (result);
	}
}
