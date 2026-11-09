/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 10:24:57 by aybella           #+#    #+#             */
/*   Updated: 2026/11/06 15:53:35 by aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sp;
	int		i;
	int		len;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	sp = malloc(len + 1);
	if (!sp)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sp[i] = f(i, s[i]);
		i++;
	}
	sp[i] = '\0';
	return (sp);
}
