/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:42:33 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/26 11:11:34 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//Fill a block of memory with zeros
static void	ft_bzero(void *s, size_t n)
{
	unsigned long int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

//Keep a block of memory and change their container with zeros.
void	*ft_calloc(size_t type, size_t size)
{
	char	*ptr;

	ptr = malloc(size * type);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, size * type);
	return (ptr);
}
