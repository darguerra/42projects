/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:00:50 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/24 19:48:41 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
#include <fcntl.h>

typedef struct s_list
{
    char            *str_buf;
    struct s_list   *next;
}   t_list;


char	*get_next_line(int fd);
char	*ft_strchr(const char *str, int search_str);
char	*ft_strjoin_free(char const *s1, char const *s2);
size_t  ft_strlen(const char *s);
char    *extract_line(const char *s);
char    *update_list(char *s);
#endif