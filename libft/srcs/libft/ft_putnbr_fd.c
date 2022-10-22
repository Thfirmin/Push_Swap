/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 05:50:39 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/22 16:54:15 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = (n * -1);
	}
	else
		num = n;
	if (num >= 10)
	{
		ft_putnbr_fd((num / 10), fd);
	}
	ft_putchar_fd(((num % 10) + '0'), fd);
}
