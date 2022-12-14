/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 21:33:42 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/14 17:37:28 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Initialize and sort stack
int	main(int argc, char *argv[])
{
	t_stack **stack;

	if (argc <= 1)
		return (0);
	stack = ps_init(argc, argv);
	if (!stack)
		return (1);
	push_swap(stack);
	ps_check_stack(stack[A], stack[B]);
	ps_ab_stkclear(stack);
	return (0);
}
