/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:16:42 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/09 13:20:02 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)search_str)
			return ((char *)&str[i]);
		i++;
	}
	if ((char)search_str == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
/*#include <string.h>
int	main()
{
	char *puntero = ft_strchr("teste", 's');
	char *pointer = strchr("teste", 's');
	printf("%s\n", puntero);
	printf("%s\n", pointer);
	return (0);
}*/