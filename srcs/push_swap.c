/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:54:11 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/02 17:10:01 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ps_rules.h"
#include "libft.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	t_stack	**stack;
	int		len;

	stack = malloc(2 * sizeof(t_stack *));
	if (!stack)
		ps_error(0, 0);
	len = ps_fill_stack(&stack[A], argc, argv);
	if (len < 0)
		ps_error(stack, stack[A]);
	// Sorting Stack;
	push_swap(&stack[A], &stack[B], len);
	//check_stack(stack[A], stack[B]);
	//Clear Stack;
	ps_clear(stack, stack[A]);
	return (0);
}

void	ps_error(t_stack **hstack, t_stack *stack)
{
	ps_clear(hstack, stack);
	ft_putendl_fd("Error", 2);
	exit(2);
}

int	ps_fill_stack(t_stack **stack, int argc, char *argv[])
{
	int		i;
	int		ret;
	int		idx;
	char	**varg;

	i = 0;
	while (i < (argc - 1))
	{
		varg = ft_split(argv[(i + 1)], ' ');
		if ((argc >= 2) && (!varg))
			return (-1);
		else if ((argc >= 2) && (!varg[0]))
			return (-1);
		ret = ps_fill_arg(stack, varg);
		idx = ret;
		ps_split_clear(varg);
		if (!ret)
			return (-1);
		i ++;
	}
	return (idx);
}

int	ps_fill_arg(t_stack **stack, char **varg)
{
	static int		idx;
	int				i;
	t_stack			*elem;

	i = 0;
	while (varg[i])
	{
		elem = 0;
		if (ps_isvalid(*stack, varg[i]))
			elem = ps_stknew(ft_atoi(varg[i]), ps_tkidx(*stack, varg[i], idx));
		if (!elem)
			return (0);
		(void) check_stack;
		ps_plusone(stack, elem->idx);
		ps_stkadd_back(stack, elem);
		i ++;
		idx ++;
	}
	return (idx);
}
