/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:54:11 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/28 13:34:00 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ps_rules.h"
#include "libft.h"

static void	check_stack(t_stack *stka, t_stack *stkb);

int	main(int argc, char *argv[])
{
	t_stack	**stack;
	int		len;

	stack = malloc(2 * sizeof(t_stack *));
	if (!stack)
		ps_error(0, 0);
	stack[B] = 0;
	len = ps_fill_stack(&stack[A], argc, argv);
	if (len < 0)
		ps_error(stack, stack[A]);
	// Sorting Stack;
	check_stack(stack[A], stack[B]);
	//push_swap(&stack[A], &stack[B]);
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

static void	check_stack(t_stack *stka, t_stack *stkb)
{
	ft_printf ("------------------------\n");
	for (int i = 1; stka || stkb; i ++)
	{
		if (stka)
			ft_printf ("%d (%d)\t", stka->nbr, stka->idx);
		else
			ft_printf ("  \t");
		if (stkb)
			ft_printf ("%d (%d)\n", stkb->nbr, stkb->idx);
		else
			ft_printf ("\n");
		if (stka)
			stka = stka->next;
		if (stkb)
			stkb = stkb->next;
	}
	ft_printf ("\n\e[4mA\e[m\t\e[4mB\e[m\n");
	ft_printf ("------------------------\n");
}

