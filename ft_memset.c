/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:24:31 by aybella           #+#    #+#             */
/*   Updated: 2026/10/31 11:25:26 by aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sp;
	unsigned char	cp;

	sp = (unsigned char *)s;
	cp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		sp[i] = cp;
		i++;
	}
	return (s);
}
