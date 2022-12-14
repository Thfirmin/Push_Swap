/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_checker_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 00:49:19 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/11 02:12:59 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"
#include "get_next_line.h"

static void	ps_psh_rule(char *rule, t_stack **stack, int step);

static void	ps_rot_rule(char *rule, t_stack **stack, int step);

static void	ps_swp_rule(char *rule, t_stack **stack, int step);

// Read STDIN, take gived rules and apply in stack
void	ps_stack_process(t_stack **stack, int step)
{
	char	*rule;

	while (1)
	{
		rule = get_next_line(0);
		if (!rule)
			break ;
		if (*rule == 'p')
			ps_psh_rule(rule, stack, step);
		else if (*rule == 'r')
			ps_rot_rule(rule, stack, step);
		else if (*rule == 's')
			ps_swp_rule(rule, stack, step);
		else
			ps_error("Error", stack, 2);
		free(rule);
	}
}

// Apply push rules
static void	ps_psh_rule(char *rule, t_stack **stack, int step)
{
	if (!ft_strncmp(rule, "pa\n", 4))
		px(&stack[B], &stack[A], ('a' * step));
	else if (!ft_strncmp(rule, "pb\n", 4))
		px(&stack[A], &stack[B], ('b' * step));
	else
		ps_error("Error", stack, 2);
}

// Apply [rev_]rotates rules
static void	ps_rot_rule(char *rule, t_stack **stack, int step)
{
	if (!ft_strncmp(rule, "ra\n", 4))
		rx(&stack[A], 0, ('a' * step));
	else if (!ft_strncmp(rule, "rb\n", 4))
		rx(0, &stack[B], ('b' * step));
	else if (!ft_strncmp(rule, "rr\n", 4))
		rx(&stack[A], &stack[B], ('r' * step));
	else if (!ft_strncmp(rule, "rra\n", 5))
		rrx(&stack[A], 0, ('a' * step));
	else if (!ft_strncmp(rule, "rrb\n", 5))
		rrx(0, &stack[B], ('b' * step));
	else if (!ft_strncmp(rule, "rrr\n", 5))
		rrx(&stack[A], &stack[B], ('r' * step));
	else
		ps_error("Error", stack, 2);
}

// Apply swap rules
static void	ps_swp_rule(char *rule, t_stack **stack, int step)
{
	if (!ft_strncmp(rule, "sa\n", 4))
		sx(&stack[A], 0, ('a' * step));
	else if (!ft_strncmp(rule, "sb\n", 4))
		sx(0, &stack[B], ('b' * step));
	else if (!ft_strncmp(rule, "ss\n", 4))
		px(&stack[A], &stack[B], ('s' * step));
	else
		ps_error("Error", stack, 2);
}
