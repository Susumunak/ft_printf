/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:10:07 by del-khay          #+#    #+#             */
/*   Updated: 2022/10/23 00:11:49 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	ft_isformat(int c)
{
	char	*format;

	format = "discuxXp%";
	while (*format)
	{
		if ((char)c == *format)
			return (1);
		format++;
	}
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list			args;
	unsigned int	n;
	unsigned int	i;

	n = 0;
	i = 0;
	va_start(args, s);
	while (s && s[i])
	{
		if (s[i] == '%' && ft_isformat(s[i + 1]))
		{
			n += ft_format(s[++i], args);
			i++;
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			n++;
			i++;
		}
	}
	va_end(args);
	return (n);
}
