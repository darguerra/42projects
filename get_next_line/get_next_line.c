/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:57:27 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/24 19:49:35 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* Get next line returns a read line of a file descriptor if is successful
but if would there are other behaviors or errors must return NULL.
*/
char *get_next_line(int fd)
{
	static char	*remainder = NULL;
	char		buffer[BUFFER_SIZE + 1];
	char		*line;
	int			bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!remainder)
		remainder = malloc(1);
	if(!remainder)
		return (NULL);
	remainder[0] = '\0';
	while (!ft_strchr(remainder, '\n') && 
			(bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		remainder = ft_strjoin_free(remainder, buffer);
		if (!remainder)
			return (NULL);
	}
	if (bytes_read < 0)
	{
		free(remainder);
		remainder = NULL;
		return (NULL);
	}
	if (remainder[0] == '\0')
	{
		free(remainder);
		remainder = NULL;
		return (remainder);
	}
	/**********/
	line = extract_line(remainder);
	if (!line)
	{
		free(remainder);
		remainder = NULL;
		return (NULL);
	}
	remainder = update_remainder(remainder);

	return(line);
	
}

int main(void)
{
    int fd;
    char    *line;

    //open the file with the flag READ ONLY
    //return the file descriptor
    fd = open("file.txt", O_RDONLY); 

//use the GNL function with fd parameter inside in a loop while
    line = get_next_line(fd);
    while (line != NULL)
    {
        line = get_next_line(fd);
    }

close(fd);
return (0);
}