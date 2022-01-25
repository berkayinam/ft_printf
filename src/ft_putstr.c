/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:59:06 by binam             #+#    #+#             */
/*   Updated: 2022/01/24 17:59:08 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *ret_val)
{
	*ret_val += write(1, &c, 1);
}

void	ft_putstr(char *s, int *ret_val)
{
	if (!s)
	{
		ft_putstr("(null)", ret_val);
		return ;
	}
	while (*s)
		*ret_val += write(1, s++, 1);
}
