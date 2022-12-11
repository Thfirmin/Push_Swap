/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:37:31 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/23 01:13:02 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//convert ASCII string to integer

ssize_t	ft_atoi(const char *str)
{
	ssize_t	atoinum;
	short int	signal;

	signal = 1;
	atoinum = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal = (signal * -1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		atoinum = (atoinum * 10);
		atoinum = (atoinum + (*str - '0'));
		str++;
	}
	atoinum = (atoinum * signal);
	return (atoinum);
}
