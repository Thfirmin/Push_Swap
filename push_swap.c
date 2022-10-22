/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:54:11 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/22 00:50:56 by thfirmin         ###   ########.fr       */
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
		ps_error();
	len = ps_fill_stack(&stack[A], argc, argv);
	if (len < 0)
	{
		ps_stkclear(&stack[A]);
		free (stack);
		ps_error();
	}
	// Sorting Stack;
	elem = stack[A];
	for (int i = 1; elem; i ++)
	{
		printf ("argc[%d] = %d\n", i, elem->nbr);
		elem = elem->next;
	}
	// Clear Stack;
	ps_stkclear(&stack[A]);
	free (stack);
	return (0);
}

void	ps_error(void)
{
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
		if (!varg && argc > 2)
			return (-1);
		ret = ps_fill_arg(stack, varg);
		ps_split_clear(varg);
		if (!ret)
			return (-1);
		i ++;
	}
	return (i);
}
