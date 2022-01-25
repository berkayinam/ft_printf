/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:46:00 by binam             #+#    #+#             */
/*   Updated: 2022/01/24 13:46:02 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *ret_val)
{
	if (num < 0)
	{
		ft_putchar('-', ret_val);
		if (num == -2147483648)
		{
			ft_putchar('2', ret_val);
			ft_putnbr(147483648, ret_val);
			return ;
		}
		num = -num;
	}
	if (num > 9)
		ft_putnbr(num / 10, ret_val);
	ft_putchar(num % 10 + 48, ret_val);
}
