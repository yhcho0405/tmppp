/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youncho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 20:48:55 by youncho           #+#    #+#             */
/*   Updated: 2020/11/08 00:41:25 by youncho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	l;
	size_t	idx;

	idx = 0;
	if (!*n)
		return ((char *)h);
	if (!ft_strlen(h) || len < ft_strlen(n))
		return (0);
	while (idx < len)
	{
		l = 0;
		while (idx + l < len && ((char *)h)[idx + l] &&
			((char *)n)[l] && ((char *)h)[idx + l] == ((char *)n)[l])
			l++;
		if (!((char *)n)[l])
			return ((char *)h + idx);
		idx++;
	}
	return (0);
}
