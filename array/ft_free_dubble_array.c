/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_dubble_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:31:09 by fgabler           #+#    #+#             */
/*   Updated: 2024/02/06 14:15:37 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_save(char *string);

void	free_dubble_array(char **arr)
{
	unsigned int	i;

	i = 0;
	while (arr[i] != NULL)
		free_save(arr[i++]);
	free(arr);
	arr = NULL;
}

static void	free_save(char *string)
{
	if (string == NULL)
		return ;
	free(string);
	string = NULL;
}
