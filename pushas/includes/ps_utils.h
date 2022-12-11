/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 01:15:42 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/10 22:40:24 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_UTILS_H
# define PS_UTILS_H

void	ps_check_stack(t_stack *stka, t_stack *stkb);
void	ps_error(char *message, t_stack **stack, int ret);
void	ps_clear(t_stack **stack);

#endif
