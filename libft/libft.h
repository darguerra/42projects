/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:17:22 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/09 13:08:16 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>

int				ft_isalnum(int a);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int n);
int				ft_isprint(int c);
void			*ft_memset(void *str, int c, size_t n);
unsigned int	ft_strlen(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void			*ft_memmove(void *to, const void *from, size_t numBytes);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
int				ft_toupper(int ch);
int				ft_tolower(int ch);
char			*ft_strchr(const char *str, int search_str);
#endif
