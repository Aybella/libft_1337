/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:09:10 by aybella           #+#    #+#             */
/*   Updated: 2026/10/31 17:24:49 by aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*sp;

	sp = (unsigned const char *)s;
	i = 0;
	while (i < n)
	{
		if (sp[i] == (unsigned char)c)
			return ((void *)&sp[i]);
		i++;
	}
	return (NULL);
}
