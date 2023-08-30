/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:30:16 by fgabler           #+#    #+#             */
/*   Updated: 2023/08/30 16:57:10 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clstclear(t_dubl_list **lst)
{
	t_dubl_list	*current;
	t_dubl_list	*next;
	int			guard;

	guard = false;
	current = *lst;
	while (guard)
	{
		next = current->next;
		free (current);
		current = NULL;
		current = next;
		if (current == (*lst))
			guard = true;
	}
	*lst = NULL;
}
