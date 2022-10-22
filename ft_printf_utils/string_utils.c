/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:04:01 by del-khay          #+#    #+#             */
/*   Updated: 2022/10/23 00:11:40 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_pchar(int c)
{	
	ft_putchar_fd((char)c, 1);
	return (1);
}

int	ft_pnbr(long n)
{
	ft_putnbr_fd(n, 1);
	return (alloc_size(n, 10));
}

int	ft_pstr(char *s)
{
	if (s)
	{
		ft_putstr_fd(s, 1);
		return (ft_strlen(s));
	}
	else
		ft_putstr_fd("(null)", 1);
	return (ft_strlen("(null)"));
}

int	ft_isspace(int c)
{
	char	*spcs;

	spcs = " \t\n\v\f\r";
	while (*spcs)
	{
		if ((char)c == *spcs)
			return (1);
		spcs++;
	}
	return (0);
}
