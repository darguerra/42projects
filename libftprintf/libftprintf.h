/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:50:55 by darguerr          #+#    #+#             */
/*   Updated: 2025/05/31 08:44:37 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int				ft_printf(char *format, ...);
unsigned int	ft_strlen(const char *str);
int				ft_numlen(int n);
int				ft_selector(char *format, va_list list, int iterator);
void			ft_putchar(char c);
void			ft_putnbr(int n, int fd);
int				ft_putstring(char *string);
int				ft_puthxd(unsigned int num, int uppercase);
int				ft_putpointer(void *ptr);
int				ft_putunsignedint(unsigned int n);
#endif