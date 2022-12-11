/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 00:58:07 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/10 23:39:55 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ps_stack.h"
#include "ps_utils.h"

// Send received error message to received fd and exit returning fd;
void	ps_error(char *message, t_stack **stack, int ret)
{
	if (stack)
		ps_clear(stack);
	if (message)
		ft_putendl_fd(message, ret);
	exit (ret);
}

// Clear stack properly
void	ps_clear(t_stack **stack)
{
	if (stack[A])
		ps_stkclear(&stack[A]);
	if (stack[B])
		ps_stkclear(&stack[B]);
	free(stack);
}
