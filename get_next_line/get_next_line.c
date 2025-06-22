/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:57:27 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/22 17:45:42 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* Get next line returns a read line of a file descriptor if is successful
but if would there are other behaviors or errors must return NULL.
*/
char *get_next_line(int fd)
{
    static t_list   *list = NULL;
    char            *next_line;
    
    result = read(fd, buffer, 15);
    if (result < 0) // < 0 or <= 0?
        return (NULL);
}

int main(void)
{
    int fd;
    char    *line;

    //open the file with the flag READ ONLY
    //return the file descriptor
    fd = open("/file.txt/", O_RDONLY); 

//use the GNL function with fd parameter inside in a loop while
    line = get_next_line(fd);
    while (line != NULL)
    {
        line = get_next_line(fd);
    }

close(fd);
}