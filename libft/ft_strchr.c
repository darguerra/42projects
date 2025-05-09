/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:16:42 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/09 12:02:26 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{
	char			*nex_str;
	size_t			i;
	size_t			position;

	nex_str[ft_strlen(str)];
	i = 0;
	position = NULL;
	while (str[i] != NULL)
	{
		if (str[i] == search_str && position == NULL)
			position = i;
	}
	if (position == NULL)
		return (NULL);
	i = 0;
	while ( str[i] == NULL)
	{
		nex_str[i] = str[i + position];
	}
	return (nex_str);
}
