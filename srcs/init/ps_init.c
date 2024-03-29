/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 21:48:32 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/13 18:54:37 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_init.h"
#include "ps_utils.h"
#include "libft.h"

static int	ps_indexing_node(t_stack *stack, int n);

static int	ps_isvalid(t_stack *stack, char *nbr);

static int	ps_iterate_args(t_stack **stack, char **args);

// Build stack. Desassembly arguments to validate and iterate in stack
t_stack	**ps_init(int argc, char *argv[])
{
	t_stack				**stack;
	register int		i;
	int					ret;
	char				**str;

	i = 0;
	stack = ft_calloc(2, sizeof(t_stack *));
	if (!stack)
		return (0);
	while (++i < argc)
	{
		str = ft_split(argv[i], ' ');
		if (!str)
			ps_error(0, stack, 1);
		ret = ps_iterate_args(&stack[A], str);
		ps_free_split(str);
		if (ret == 1)
			ps_error(0, stack, ret);
		else if (ret == 2)
			ps_error("Error", stack, ret);
	}
	return (stack);
}

// Validate desassembled args, make a node and append in stack
static int	ps_iterate_args(t_stack **stack, char **args)
{
	register int	i;
	int				index;
	int				number;
	t_stack			*node;

	i = -1;
	while (args[++i])
	{
		if (ps_isvalid(*stack, args[i]))
		{
			number = ft_atoi(args[i]);
			index = ps_indexing_node(*stack, number);
			node = ps_stknew(number, index);
			if (!node)
				return (1);
			ps_stkadd_back(&stack[A], node);
		}
		else
		{
			ft_printf("error cause\n");
			return (2);
		}
	}
	return (0);
}

// Validate gived ascii-number
static int	ps_isvalid(t_stack *stack, char *nbr)
{
	if (!ps_isalldigit(nbr))
		return (0);
	else if (!ps_isint(nbr))
		return (0);
	else if (!ps_isunique(stack, nbr))
		return (0);
	return (1);
}

// Compare number from list and re-index list with indexed number
static int	ps_indexing_node(t_stack *stack, int n)
{
	unsigned int	index;

	index = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		if ((n > stack->nbr) && (index <= stack->idx))
			index = (stack->idx + 1);
		else if (n < stack->nbr)
			stack->idx += 1;
		stack = stack->next;
	}
	return (index);
}
