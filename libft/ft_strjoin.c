/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:02:58 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/21 17:09:12 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined_str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!joined_str)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		joined_str[i] = s1[i];
		i++;
	}
	while (i < s1_len + s2_len)
	{
		joined_str[i] = s2[i - s1_len];
		i++;
	}
	joined_str[i] = '\0';
	return (joined_str);
}
