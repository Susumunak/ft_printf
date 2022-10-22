/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:45:02 by del-khay          #+#    #+#             */
/*   Updated: 2022/10/23 00:11:37 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	alloc_size(long n, int base)
{
	unsigned int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		size++;
		n /= base;
	}
	return (size);
}

int	alloc2_size(unsigned long n, int base)
{
	unsigned int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		size++;
		n /= base;
	}
	return (size);
}

static void	ft_strup(char *s)
{
	while (*s)
	{
		*s = ft_toupper(*s);
		s++;
	}
}

int	ft_put_hex(unsigned long long n, int up)
{
	int		i;
	int		j;
	char	*ptr;

	i = alloc2_size(n, 16);
	j = i;
	ptr = (char *) malloc(i + 1);
	if (!ptr)
		return (0);
	ptr[i] = 0;
	while (i--)
	{
		if ((n % 16) > 9)
			ptr[i] = 'a' + ((n % 16) - 10);
		else
			ptr[i] = '0' + (n % 16);
		n /= 16;
	}
	if (up)
		ft_strup(ptr);
	ft_putstr_fd(ptr, 1);
	free(ptr);
	return (j);
}
