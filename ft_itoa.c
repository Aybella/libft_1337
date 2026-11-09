/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 09:36:41 by aybella           #+#    #+#             */
/*   Updated: 2026/11/03 09:26:17 by aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_power(long n)
{
	long	div;

	if (n < 0)
		n = n * -1;
	div = 1;
	while (n / div > 9)
	{
		div = div * 10;
	}
	return (div);
}

static int	count_number(long n)
{
	long	count;
	long	div;

	div = count_power(n);
	count = 0;
	if (n < 0)
		count = 1;
	while (div > 0)
	{
		div = div / 10;
		count++;
	}
	return (count);
}

static void	fill_str(char *s, long n, long div, long i)
{
	while (div > 0)
	{
		s[i] = (n / div + '0');
		n = n % div;
		div = div / 10;
		i++;
	}
	s[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*s;
	long	i;
	long	div;
	long	nb;

	nb = n;
	div = count_power(nb);
	s = malloc(count_number(nb) + 1);
	if (!s)
		return (NULL);
	i = 0;
	if (nb < 0)
	{
		s[0] = '-';
		i = 1;
		nb = nb * -1;
	}
	fill_str(s, nb, div, i);
	return (s);
}
