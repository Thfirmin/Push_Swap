	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                    :+:     :+:            */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:52:44 by thfirmin          #+#    #+#             */
/*   Updated: 2022/08/17 18:41:03 by Thinotsuki   ###     ###.br              */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	ft_puthex_fd(unsigned int nb, char plcholder, int fd)
{
	size_t			len;
	int				capital;

	len = 0;
	capital = 0;
	if (plcholder == 'x')
		capital = 32;
	if (nb >= 16)
		len += ft_puthex_fd((nb / 16), plcholder, fd);
	if (nb % 16 >= 10)
		len = len + ft_putchar_fd((((nb % 16) - 10) + ('A' + capital)), fd);
	else
		len += ft_putchar_fd(((nb % 16) + '0'), fd);
	return (len);
}
