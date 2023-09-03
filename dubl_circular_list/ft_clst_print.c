/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clst_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:30:23 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/03 13:54:54 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clst_print(t_dubl_list *head, void *content, char *typ)
{
	t_dubl_list	*tmp;
	int			guard;

	guard = 1;
	tmp = head;
	while (guard)
	{
		if (ft_memcmp(typ, "int", 3))
			ft_printf("%d\n", *((int*)content));
		if (ft_memcmp(typ, "char", 3))
			ft_printf("%s\n", ((char *) content));
		tmp = tmp->next;
		if (tmp == head)
			guard = 0;
	}
}
