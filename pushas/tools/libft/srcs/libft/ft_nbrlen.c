/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:47:20 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/11 21:01:46 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Return number of algorism in a integer
int	ft_nbrlen(ssize_t n)
{
	size_t	nbr;
	int		len;

	len = 0;
	if (n < 0)
	{
		len += 1;
		nbr = (n * -1);
	}
	else
		nbr = n;
	if (nbr != 0)
	{
		len += ft_nbrlen(nbr / 10);
		len ++;
	}
	return (len);
}
