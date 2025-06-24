/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:13:36 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/24 19:51:34 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
char	*ft_strjoin_free(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
	{
		free(s1);
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		result[i+j] = s2[j];
		j++;
	}
	result[i + j] = s2[j];
	free(s1);
	return (result);
	
	
}
size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char *extract_line(const char *s)
{
	int		i;
	char	*line;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return(NULL);

	i = 0;
	while (s[i] && s[i] != '\n')
	{
		line[i] = s[i];
		i++;
	}
	if (s[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}
char *update_list(char *s)
{
	int	i;
	int	j;
	char	*new_list;

	i = 0;
	j = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	if (!s[i])
	{
		free(s);
		return (NULL);
	}
	new_list = malloc(ft_strlen(s) - i + 1);
	if (!new_list)
	{
		free(s);
		return (NULL);
	}
	j = 0;
    while (s[i + j])
    {
        new_list[j] = s[i + j];
        j++;
    }
    new_list[j] = '\0';
    free(s);
    return (new_list);
}

t_list	*read_to_list(int fd, t_list *list)
{
	t_list	list_read;
	int i;

	i = 0;
	
}