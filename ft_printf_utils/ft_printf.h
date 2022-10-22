/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:14:36 by del-khay          #+#    #+#             */
/*   Updated: 2022/10/23 00:11:45 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "stdlib.h"
# include "unistd.h"
# include "stdarg.h"

int	ft_format(char c, va_list arg);
int	ft_printf(const char *s, ...);
int	ft_isspace(int c);
int	ft_pnbr(long n);
int	ft_pchar(int c);
int	ft_pstr(char *s);
int	alloc2_size(unsigned long n, int base);
int	ft_put_hex(unsigned long long n, int up);
int	alloc_size(long n, int base);

#endif