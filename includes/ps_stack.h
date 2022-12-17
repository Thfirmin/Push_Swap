/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 21:09:40 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/13 16:12:20 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_STACK_H
# define PS_STACK_H
# ifndef A
#  define A 0
# endif
# ifndef B
#  define B 1
# endif
# include <stdlib.h>

typedef struct s_stack
{
	int				nbr;
	unsigned int	idx;
	struct s_stack	*next;
}					t_stack;

t_stack	*ps_stknew(int number, int index);
t_stack	*ps_stklast(t_stack *stack);
void	ps_stkclear(t_stack **stack);
void	ps_stkadd_back(t_stack **stack, t_stack *node);
void	ps_stkadd_front(t_stack **stack, t_stack *node);
int		ps_stksize(t_stack *stack);

#endif
