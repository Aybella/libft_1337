/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:09:46 by aybella           #+#    #+#             */
/*   Updated: 2026/11/02 11:29:07 by aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		div;
	char	b;

	div = 1;
	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * -1;
	}
	while (nb / div > 9)
	{
		div = div * 10;
	}
	while (div > 0)
	{
		b = (nb / div) + '0';
		write(fd, &b, 1);
		nb = nb % div;
		div = div / 10;
	}
}
