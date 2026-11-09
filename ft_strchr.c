/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 13:52:09 by aybella           #+#    #+#             */
/*   Updated: 2026/10/31 14:47:23 by aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t				i;
	unsigned const char	*sp;

	sp = (unsigned const char *)s;
	i = 0;
	if ((unsigned char)c == '\0')
	{
		while (sp[i])
			i++;
		return ((char *)&sp[i]);
	}
	while (sp[i])
	{
		if (sp[i] == (unsigned char)c)
			return ((char *)&sp[i]);
		i++;
	}
	return (NULL);
}
