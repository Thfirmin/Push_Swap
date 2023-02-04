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
	char	*line;
	char	*prev;

	rule = 0;
	while (1)
	{
		while (!ft_strchr(rule, '\n'))
		{
			line = get_next_line(0);
			if (!line)
				break;
			prev = rule;
			rule = ft_strjoin(prev, line);
			//free(prev);
			//prev = 0;
			//free(line);
			//line = 0;
		}
		//rule = get_next_line(0);
		if (rule)
		{
			ft_putstr_fd("line received: \"", 2);
			ft_putstr_fd(rule, 2);
			ft_putendl_fd("\"\n.\n", 2);
		}
		if (!rule)
			break ;
		if (*rule == 'p')
			ps_psh_rule(rule, stack, step);
		else if (*rule == 'r')
			ps_rot_rule(rule, stack, step);
		else if (*rule == 's')
			ps_swp_rule(rule, stack, step);
		else
		{
			//free(rule);
			ft_putstr_fd("debug ps_stack_process: \"", 2);
			ft_putstr_fd(rule, 2);
			ft_putendl_fd("\"", 2);
			free(rule);
			ps_error("Error", stack, 2);
		}
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
	{
		ft_putstr_fd("debug ps_psh_rule: \"", 2);
		ft_putstr_fd(rule, 2);
		ft_putendl_fd("\"", 2);
		free(rule);
		ps_error("Error", stack, 2);
	}
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
	{
		ft_putstr_fd("debug ps_rot_rule: \"", 2);
		ft_putstr_fd(rule, 2);
		ft_putendl_fd("\"", 2);
		free(rule);
		ps_error("Error", stack, 2);
	}
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
	{
		ft_putstr_fd("debug ps_swp_rule: \"", 2);
		ft_putstr_fd(rule, 2);
		ft_putendl_fd("\"", 2);
		free(rule);
		ps_error("Error", stack, 2);
	}
}
