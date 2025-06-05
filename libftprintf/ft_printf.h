/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darguerr <darguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:50:55 by darguerr          #+#    #+#             */
/*   Updated: 2025/06/04 23:51:12 by darguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int				ft_printf(const char *format, ...);
unsigned int	ft_strlen(const char *str);
int				ft_numlen(int n);
int				ft_selector(char character, va_list list);
int				ft_putchar(char c);
int				ft_putnbr(int n, int fd);
int				ft_putstring(char *string);
int				ft_puthxd(unsigned long num, int uppercase);
int				ft_putpointer(void *ptr);
int				ft_putunsignedint(unsigned int n);
#endif