/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 16:59:25 by aybella           #+#    #+#             */
/*   Updated: 2026/10/31 17:04:08 by aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*sp;

	i = 0;
	len = ft_strlen(s);
	sp = malloc(len + 1);
	if (!sp)
		return (NULL);
	while (i < len)
	{
		sp[i] = s[i];
		i++;
	}
	sp[i] = '\0';
	return (sp);
}
