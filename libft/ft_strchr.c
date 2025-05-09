/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:16:42 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/09 09:41:56 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{
	char			*nex_str;
	size_t			i;
	size_t			j;
	size_t			boolean;

	nex_str[ft_strlen(str)];
	i = 0;
	j = 0;
	boolean = 0;
	while (str[i] != NULL)
	{
		if (str[i] == search_str)
		{
			boolean = 1;
			while (str != NULL)
			{
				nex_str[j] = str[i];
				j++;
				i++;
			}
			nex_str[i] = '\0';
		}
		i++;
	}
	if (boolean == 0)
		return (NULL);
	return (nex_str);
}
