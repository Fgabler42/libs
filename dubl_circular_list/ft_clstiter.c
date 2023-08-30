/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clstiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:28:25 by fgabler           #+#    #+#             */
/*   Updated: 2023/08/30 16:58:33 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clstiter(t_dubl_list *lst, void (*f)(void *), t_direction direction)
{
	t_dubl_list	*head;

	head = lst;
	while (lst)
	{
		f (lst->content);
		if (direction == clockwise)
			lst = lst->next;
		else
			lst = lst->prev;
		if (lst == head)
			return ;
	}
}
