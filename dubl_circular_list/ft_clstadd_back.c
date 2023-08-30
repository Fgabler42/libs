/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:58:30 by fgabler           #+#    #+#             */
/*   Updated: 2023/08/30 16:56:30 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clstadd_back(t_dubl_list **lst, t_dubl_list *new)
{
	t_dubl_list	*tail;

	tail = *lst;
	if (tail != NULL)
	{
		tail = tail->prev;
		tail->next = new;
		(*lst)->prev = new;
		new->prev = tail;
		new->next = *lst;
	}
	else
	{
		*lst = new;
		new->prev = new;
		new->next = new;
	}
}
