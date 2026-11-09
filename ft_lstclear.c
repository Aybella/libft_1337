/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:35:41 by aybella           #+#    #+#             */
/*   Updated: 2026/11/02 14:47:31 by aybella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*n;
	t_list	*next;

	if (!lst || !del)
		return ;
	n = *lst;
	while (n)
	{
		next = n->next;
		del(n->content);
		free(n);
		n = next;
	}
	*lst = NULL;
}
