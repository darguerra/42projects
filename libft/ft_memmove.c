/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:22:32 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/07 13:14:14 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t numBytes)
{
	unsigned char	*cast_to;
	unsigned char	*cast_from;

	cast_to = (unsigned char *) to;
	cast_from = (unsigned char *) from;
	if (to <= from)
		ft_memcpy(to, from, numBytes);
	if (to > from)
	{
		while (numBytes > 0)
		{
			numBytes--;
			cast_to[numBytes] = cast_from[numBytes];
		}
	}
	to = (void *) cast_to;
	return (to);
}
