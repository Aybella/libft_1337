/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 10:56:45 by aybella           #+#    #+#             */
/*   Updated: 2026/11/05 12:10:54 by aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	is_word;
	int	count;

	count = 0;
	is_word = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && is_word)
		{
			is_word = 0;
			count++;
		}
		else if (s[i] == c)
			is_word = 1;
		i++;
	}
	return (count);
}

static char	*fill_word(char const *s, int start, char c)
{
	int		i;
	int		j;
	char	*sp;

	i = start;
	j = start;
	while (s[j] && s[j] != c)
		j++;
	sp = malloc(j - i + 1);
	if (!sp)
		return (NULL);
	while (i < j)
	{
		sp[i - start] = s[i];
		i++;
	}
	sp[i - start] = '\0';
	return (sp);
}

static void	free_arr(char **sp, int j)
{
	while (j > 0)
	{
		j--;
		free(sp[j]);
	}
	free(sp);
}

static char	**fill_arr(char **sp, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		sp[j] = fill_word(s, i, c);
		if (!sp[j])
			return (free_arr(sp, j), NULL);
		while (s[i] && s[i] != c)
			i++;
		j++;
	}
	sp[j] = NULL;
	return (sp);
}

char	**ft_split(char const *s, char c)
{
	char	**sp;

	if (!s)
		return (NULL);
	sp = malloc((count_word(s, c) + 1) * sizeof (char *));
	if (!sp)
		return (NULL);
	return (fill_arr(sp, s, c));
}
