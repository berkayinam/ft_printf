/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:47:26 by binam             #+#    #+#             */
/*   Updated: 2022/01/24 13:47:29 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar(char c, int *ret_val);
void	ft_putstr(char *str, int *ret_val);
void	ft_putnbr(int num, int *ret_val);
void	*ft_memset(void *ptr, int c, size_t size);
void	ft_putptr(unsigned long num, int *ret_val);
void	ft_putunbr(unsigned int num, int *ret_val);

size_t	ft_strlen(const char *str);

char	*ft_convert(size_t num, char *repres);

int		ft_printf(const char *str, ...);

#endif
