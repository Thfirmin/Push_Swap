/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                    :+:     :+:            */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:52:11 by thfirmin          #+#    #+#             */
/*   Updated: 2022/08/17 18:40:34 by Thinotsuki   ###     ###.br              */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	ft_putptr_fd(void *ptr, int fd)
{
	unsigned long int	len;
	unsigned long int	nb;

	len = 0;
	nb = (unsigned long int) ptr;
	if (nb < 16)
		len += ft_putstr_fd("0x", fd);
	if (nb >= 16)
		len += ft_putptr_fd(((void *)(nb / 16)), fd);
	if (nb % 16 >= 10)
		len += ft_putchar_fd((((nb % 16) - 10) + 'a'), fd);
	else
		len += ft_putchar_fd(((nb % 16) + '0'), fd);
	return (len);
}
