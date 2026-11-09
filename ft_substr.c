/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 17:33:53 by aybella           #+#    #+#             */
/*   Updated: 2026/11/05 11:51:41 by aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	sub_len;
	char	*sub;

	if (s == NULL)
		return (NULL);
	sub_len = 0;
	if (start >= ft_strlen(s))
		sub_len = 0;
	else if (len > ft_strlen(s) - start)
		sub_len = ft_strlen(s) - start;
	else if (len <= ft_strlen(s) - start)
		sub_len = len;
	sub = malloc(sub_len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < sub_len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
