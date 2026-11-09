/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 17:04:21 by aybella           #+#    #+#             */
/*   Updated: 2026/11/06 15:55:14 by aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t	size)
{
	unsigned char	*s;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	s = malloc(size * nmemb);
	if (!s)
		return (NULL);
	ft_bzero (s, (size * nmemb));
	return ((void *)s);
}
