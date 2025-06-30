/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:46:44 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/30 08:54:23 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Function that creates a node for the buffer list
static t_list	*init_buffer(int fd)
{
	t_list	*buffer;

	buffer = malloc(sizeof(t_list));
	if (!buffer)
		return (NULL);
	buffer->buff = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!(buffer->buff))
	{
		free(buffer);
		return (NULL);
	}
	buffer->length = read(fd, buffer->buff, BUFFER_SIZE);
	if (buffer->length < 0)
	{
		free(buffer->buff);
		free(buffer);
		return (NULL);
	}
	buffer->index = 0;
	buffer->next = NULL;
	if (!buffer->length)
		buffer->eof = TRUE;
	else
		buffer->eof = FALSE;
	return (buffer);
}

//return a pointer that points to the begining of the line
static char	*get_str(int pos_end, t_list **buffer)
{
	int		index;
	char	*str;
	char	*ptr;

	str = malloc(sizeof(char) * (pos_end + 1));
	if ((!(*buffer) || (!(*buffer)->length) || pos_end <= 0) || (!str))
		return (free(*buffer), NULL);
	ptr = str;
	index = (*buffer)->index;
	if (pos_end == -1)
		return (free(str), NULL);
	while (pos_end--)
	{
		*str++ = (*buffer)->buff[index++];
		if (index == (*buffer)->length)
		{
			*buffer = free_all(*buffer);
			index = 0;
			if (!(*buffer) && pos_end > 0)
				break ;
		}
	}
	if (*buffer)
		(*buffer)->index = index;
	return (*str = '\0', ptr);
}

//Determines where the current line ends and calculates its length.
static int	end_line(int fd, t_list *buffer)
{
	int		i;
	int		pos_end;
	t_list	*tmp;

	if (!buffer)
		return (-1);
	i = buffer->index;
	pos_end = 0;
	while (buffer->buff[i] && i < buffer->length)
	{
		if (buffer->buff[i++] == '\n')
			return (++pos_end);
		++pos_end;
		if (i == buffer->length)
		{
			tmp = init_buffer(fd);
			if (!tmp)
				return (-1);
			tmp->next = buffer->next;
			buffer->next = tmp;
			buffer = tmp;
			i = 0;
		}
	}
	return (pos_end);
}

char	*get_next_line(int fd)
{
	static t_list	*fd_open[MAX_OPEN];
	char			*str;
	int				pos_end;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!fd_open[fd])
	{
		fd_open[fd] = init_buffer(fd);
		if (!fd_open[fd])
			return (NULL);
	}
	pos_end = end_line(fd, fd_open[fd]);
	if (pos_end <= 0)
		return (free_list(&fd_open[fd]), NULL);
	str = get_str(pos_end, &fd_open[fd]);
	if (fd_open[fd] && fd_open[fd]->eof
		&& fd_open[fd]->index >= fd_open[fd]->length)
		free_list(&fd_open[fd]);
	return (str);
}

/*int	main(void)
{
	char *example;
	int fd;

	fd = open("file.txt", O_RDONLY);

	while ((example = get_next_line(fd)) != NULL)
	{
		printf("%s", example);
		free(example);
	}

	close(fd);
	return (0);
}*/