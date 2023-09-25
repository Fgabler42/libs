/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_mod_uns.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:17:10 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/25 16:18:54 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	*ft_strjoin_mod_uns(char *s1, char *s2)
{
	unsigned int			i;
	unsigned int			j;
	unsigned char			*new;

	i = 0;
	j = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	new = (unsigned char *)ft_calloc(ft_strlen(s1)
			+ ft_strlen(s2) + 1, sizeof(char));
	if (!new)
		return (NULL);
	while (s1 && s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
		new[i++] = s2[j++];
	if (s1)
		return (free((void *)s1), s1 = NULL, new);
	else
		return (free((void *)s1), new);
}
