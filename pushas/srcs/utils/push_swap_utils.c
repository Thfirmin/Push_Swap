/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:27:34 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/14 20:49:00 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"
#include "ps_utils.h"
#include "ps_operations.h"
#include "libft.h"

static int	picker_dwn(t_stack *stk, unsigned int min, unsigned int max);

static int	picker_up(t_stack *stk, unsigned int min, unsigned int max);

void	take_shorter(t_stack **stack, char stk)
{
	unsigned int	shorter;
	int				len;
	t_stack			*tmp;
	int				i;

	if (!*stack)
		return ;
	len = ps_stksize(*stack);
	take_min_n_max(*stack, &shorter, 0);
	tmp = *stack;
	i = 1;
	while (tmp->idx != shorter)
	{
		i ++;
		tmp = tmp->next;
	}
	if (i <= (len / 2 + 1))
		while ((**stack).idx != shorter)
			rx(stack, 0, stk);
	else
		while ((**stack).idx != shorter)
			rrx(stack, 0, stk);
}

void	picker(t_stack **stka, unsigned int min, unsigned int max, char stk)
{
	int	up;
	int	dwn;

	if (!*stka)
		return ;
	up = picker_up(*stka, min, max);
	if (up < 0)
		return ;
	dwn = picker_dwn(*stka, min, max);
	if (up <= dwn)
	{
		while (!(((**stka).idx >= min) && ((**stka).idx <= max)))
			rx(stka, 0, stk);
	}
	else
	{
		while (!(((**stka).idx >= min) && ((**stka).idx <= max)))
			rrx(stka, 0, stk);
	}
}

// Verify rated number from up-down, what rule to use and how many rules to use
static int	picker_up(t_stack *stk, unsigned int min, unsigned int max)
{
	unsigned int	i;

	if (!stk)
		return (0);
	i = 1;
	while (stk && (!((stk->idx >= min) && (stk->idx <= max))) && ++i)
		stk = stk->next;
	if (!stk)
		return (-1);
	return (i - 1);
}

// Verify rated number from down-up, what rule to use and how many rules to use
static int	picker_dwn(t_stack *stk, unsigned int min, unsigned int max)
{
	unsigned int	i;
	void			*lst;
	t_stack			*tmp;

	if (!stk)
		return (0);
	tmp = ps_stklast(stk);
	i = 1;
	while ((!((tmp->idx >= min) && (tmp->idx <= max))) && ++i)
	{
		lst = (void *) tmp;
		tmp = stk;
		while ((void *) tmp->next != lst)
			tmp = tmp->next;
	}
	return (i);
}

