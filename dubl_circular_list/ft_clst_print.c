/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clst_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:30:23 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/02 16:36:36 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clst_print(t_dubl_list *head)
{
	t_dubl_list	*tmp;
	int			guard;

	guard = 1;
	tmp = head;
	while (guard)
	{
		ft_printf("%d\n", tmp->content.split.val);
		tmp = tmp->next;
		if (tmp == head)
			guard = 0;
	}
}
