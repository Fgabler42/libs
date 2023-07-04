/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_char_mod.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:29:47 by fgabler           #+#    #+#             */
/*   Updated: 2023/07/04 18:13:08 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include/ft_printf.h"

void	put_char_mod(char _restrict_, int *ret_len)
{
	*ret_len += write(1, &_restrict_, 1);
}
