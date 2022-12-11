/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rules.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:55:30 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/02 16:32:46 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_RULES_H
# define PS_RULES_H
# include "libft.h"
# include "ps_stack.h"

// Push
void	pa(t_stack **stka, t_stack **stkb);
void	pb(t_stack **stka, t_stack **stkb);

// Swap
void	sa(t_stack **stka);
void	sb(t_stack **stkb);
void	ss(t_stack **stka, t_stack **stkb);

// Rotate
void	ra(t_stack **stka);
void	rb(t_stack **stkb);
void	rr(t_stack **stka, t_stack **stkb);

// Reverse Rotate
void	rra(t_stack **stka);
void	rrb(t_stack **stkb);
void	rrr(t_stack **stka, t_stack **stkb);
#endif
