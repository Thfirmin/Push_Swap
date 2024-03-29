/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 21:33:42 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/14 20:52:26 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// Initialize and sort stack
int	main(int argc, char *argv[])
{
	t_stack	**stack;

	printf("Argc = %i", argc - 1);
	for (int i = 1; i < argc; i ++)
		printf ("argv[%i] = %s\n", i, argv[i]);
	if (argc <= 1)
		return (0);
	stack = ps_init(argc, argv);
	if (!stack)
		return (1);
	push_swap(stack);
	ps_ab_stkclear(stack);
	return (0);
}
