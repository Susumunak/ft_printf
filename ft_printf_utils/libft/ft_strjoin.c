/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:41:18 by del-khay          #+#    #+#             */
/*   Updated: 2022/10/13 21:44:59 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	size;
	unsigned int	i;
	char			*rslt;

	if (!s1 || !s2)
		return (0);
	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	rslt = (char *) malloc(sizeof(char) * size);
	if (!rslt)
		return (0);
	while (*s1)
		rslt[i++] = *s1++;
	while (*s2)
		rslt[i++] = *s2++;
	rslt[i] = 0;
	return (rslt);
}
