/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 00:13:40 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/11 02:00:50 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"

static int	ps_checked(t_stack **stack);

int	main(int argc, char *argv[])
{
	t_stack	**stack;

	stack = ps_init(argc, argv);
	if (!stack)
		return (1);
	ps_stack_process(stack);
	if (ps_checked(stack))
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
	ps_clear(stack);
	return (0);
}

static int	ps_checked(t_stack **stack)
{
	t_stack	*node;

	if (stack[B])
		return (0);
	node = stack[A];
	while (node->next)
	{
		if (node->nbr > node->next->nbr)
			return (0);
		node = node->next;
	}
	return (1);
}
