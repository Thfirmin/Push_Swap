/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:54:11 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/23 10:46:59 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	main(int argc, char *argv[])
{
	t_stack	**stack;
	t_stack	*elem;
	int		len;

	stack = malloc(2 * sizeof(t_stack *));
	if (!stack)
		ps_error(0, 0);
	len = ps_fill_stack(&stack[A], argc, argv);
	if (len < 0)
		ps_error(stack, stack[A]);
	// Sorting Stack;
	elem = stack[A];
	for (int i = 1; elem; i ++)
	{
		ft_printf ("argc[%d] = %d\n", i, elem->nbr);
		elem = elem->next;
	}
	// Clear Stack;
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
		ps_split_clear(varg);
		if (!ret)
			return (-1);
		i ++;
	}
	return (i);
}
