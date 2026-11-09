/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 09:36:16 by aybella           #+#    #+#             */
/*   Updated: 2026/11/05 11:52:21 by aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	check_chr(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static	int	trim_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!check_chr(set, s1[i]))
		{
			return (i);
		}
		i++;
	}
	return (i);
}

static	int	trim_end(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	i = i - 1;
	while (i >= 0)
	{
		if (! check_chr(set, s1[i]))
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trim;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = trim_start(s1, set);
	end = trim_end(s1, set);
	if (end < start)
		trim = ft_substr(s1, 0, 0);
	else
		trim = ft_substr(s1, start, (end - start) + 1);
	return (trim);
}
