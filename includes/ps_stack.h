	/* ************************************************************************** */
	/*                                                                            */
	/*                                                        :::      ::::::::   */
/*   ps_stack.h                                         :+:      :+:    :+:   */
	/*                                                    +:+ +:+         +:+     */
	/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
	/*                                                +#+#+#+#+#+   +#+           */
	/*   Created: 2022/10/21 22:44:35 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/28 13:44:13 by thfirmin         ###   ########.fr       */
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
	int				idx;
	struct s_stack	*next;
}					t_stack;

t_stack	*ps_stknew(int nbr, int index);
t_stack	*ps_stklast(t_stack *stack);
void	ps_stkdelone(t_stack *elem);
void	ps_stkclear(t_stack **stack);
void	ps_stkadd_back(t_stack **stack, t_stack *elem);
void	ps_stkadd_front(t_stack **stack, t_stack *elem);
void	ps_stkiter(t_stack *stack, void (*f)(int *));

#endif
