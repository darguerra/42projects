/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:01:23 by darguerr          #+#    #+#             */
/*   Updated: 2025/04/30 19:32:29 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	aux = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		aux[i] = c;
		i++;
	}
	str = (void *) aux;
	return (str);
}
