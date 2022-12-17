/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 00:58:07 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/12 12:36:25 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ps_stack.h"
#include "ps_utils.h"

// Send received error message to received fd and exit returning fd;
void	ps_error(char *message, t_stack **stack, int ret)
{
	if (stack)
		ps_ab_stkclear(stack);
	if (message)
		ft_putendl_fd(message, ret);
	exit (ret);
}
