/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:00:50 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/26 11:25:01 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 70
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>

# define MAX_OPEN 65535

typedef enum s_bool
{
	FALSE,
	TRUE
}	t_bool;

typedef struct s_list
{
	char			*buff;
	int				lengh;
	int				index;
	t_bool			eof;
	struct s_list	*next;
}	t_list;

char	*get_next_line(int fd);
void	*ft_calloc(size_t type, size_t size);

#endif