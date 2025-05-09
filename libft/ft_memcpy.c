/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 10:24:06 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/01 12:10:12 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	size_t			i;
	unsigned char	*aux_dst;
	unsigned char	*aux_src;

	i = 0;
	aux_dst = (unsigned char *) dest_str;
	aux_src = (unsigned char *) src_str;
	if ((aux_dst == NULL) && (aux_src == NULL))
	{
		return (NULL);
	}
	while (i < n)
	{
		aux_dst[i] = aux_src[i];
		i++;
	}
	dest_str = (void *) aux_dst;
	return (dest_str);
}
