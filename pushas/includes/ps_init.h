/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_init.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 21:30:32 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/10 23:43:55 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_INIT_H
# define PS_INIT_H
#include "ps_stack.h"

t_stack	**ps_init(int argc, char *argv[]);
void	ps_free_split(char **splitted);

#endif
