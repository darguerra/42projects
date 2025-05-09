/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:23:30 by darguerr          #+#    #+#             */
/*   Updated: 2025/04/29 16:08:36 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	int	ft_strlen(const char *str )
{
	unsigned int	le;

	le = 0;
	while (str[le] != '\0')
	{
		le++;
	}
	return (le);
}
