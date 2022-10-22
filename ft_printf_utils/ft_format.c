/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:04:50 by del-khay          #+#    #+#             */
/*   Updated: 2022/10/23 00:11:54 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_format(char c, va_list arg)
{
	int	i;

	i = 0;
	if (c == 'd' || c == 'i')
		i = ft_pnbr((int)va_arg(arg, int));
	else if (c == 's')
		i = ft_pstr(va_arg(arg, char *));
	else if (c == 'c')
		i = ft_pchar(va_arg(arg, int));
	else if (c == 'u')
		i = ft_pnbr((unsigned int)va_arg(arg, unsigned int));
	else if (c == '%')
		i = ft_pchar('%');
	else if (c == 'x')
		i = ft_put_hex((unsigned int) va_arg(arg, int), 0);
	else if (c == 'X')
		i = ft_put_hex((unsigned int) va_arg(arg, int), 1);
	else if (c == 'p')
	{
		ft_putstr_fd("0x", 1);
		i = ft_put_hex((unsigned long)va_arg(arg, void *), 0) + 2;
	}
	else
		return (0);
	return (i);
}
