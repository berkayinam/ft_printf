/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:46:20 by binam             #+#    #+#             */
/*   Updated: 2022/01/24 13:46:21 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long num, int *ret_val)
{
	if (num == 0)
	{
		ft_putstr("0x0", ret_val);
		return ;
	}
	ft_putstr("0x", ret_val);
	ft_putstr(ft_convert(num, "0123456789abcdef"), ret_val);
}
