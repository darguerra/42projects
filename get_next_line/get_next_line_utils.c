/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:42:33 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/30 08:41:44 by darguerr         ###   ########.fr       */
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

//clean up memory allocated for a linked list node
//while maintaining the list's structure
t_list	*free_all(t_list *buffer)
{
	t_list	*tmp;

	tmp = buffer->next;
	free(buffer->buff);
	free(buffer);
	return (tmp);
}

void	free_list(t_list **list)
{
	t_list	*tmp;

	while (*list)
	{
		tmp = (*list)->next;
		free_all(*list);
		*list = tmp;
	}
}
