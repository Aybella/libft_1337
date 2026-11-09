/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:15:05 by aybella           #+#    #+#             */
/*   Updated: 2026/10/31 15:24:09 by aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*sp;
	unsigned const char	*st;

	sp = (unsigned const char *)s1;
	st = (unsigned const char *)s2;
	i = 0;
	while (i < n && sp[i] == st[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)sp[i] - (unsigned char)st[i]);
}
