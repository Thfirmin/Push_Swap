# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thino <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/13 03:44:47 by thino             #+#    #+#              #
#    Updated: 2022/10/22 00:50:32 by thfirmin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# +>                                     NAME

NAME		= push_swap

LIBFT		= $(LIBFT_PATH)$(LIBFT_SRC)
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                 SOURCE FILES

LIBFT_SRC	= libft.a

STACK_SRCS	= ps_stknew.c      \
			  ps_stklast.c     \
			  ps_stkclear.c    \
			  ps_stkdelone.c   \
			  ps_stkadd_back.c \

MAIN_SRCS	= push_swap.c \
			  push_swap_utils.c

SRCS		= $(addprefix $(STACK_PATH),$(STACK_SRCS)) \
			  $(MAIN_SRCS)
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                 OBJECT FILES

OBJS		= $(subst .c,.o,$(SRCS))
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                    ALIASES

STACK_PATH	= stack/
LIBFT_PATH	= libft/

RM			= rm -rf
MAKE		= make -C

INCLUDE		= -I includes -I libft
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g

#MAKEFLAGS	+= --silent
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                  TEXT CODES

BLANK		= \e[m
RED			= \e[38;5;9m
YELLOW		= \e[38;5;11m
GREEN		= \e[38;5;2m
BLUE		= \e[38;5;6m
PURPLE		= \e[38;5;5m
PINK		= \e[38;5;13m
WHITE		= \e[38;5;15m

BOLD		= \e[1m
SHADOW		= \e[2m
ITALIC		= \e[3m
UNDLINE		= \e[4m
UPPLINE		= \e[53m
DUNDLINE	= \e[21m
CENSORED	= \e[9m
UPALIGN		= \e[73m
DWALIGN		= \e[74m
FULLER		= \e[7m
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     RULES

all:		$(LIBFT) $(NAME)

$(NAME):	$(OBJS) $(LIBFT)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCLUDE) -c $*.c -o $@

clean:
	$(MAKE) $(LIBFT_PATH) clean
ifneq (,$(shell ls $(OBJS) 2> /dev/null))
	$(RM) $(OBJS)
endif

fclean: clean
	$(MAKE) $(LIBFT_PATH) fclean
ifneq (,$(shell ls $(NAME) 2> /dev/null))
	$(RM) $(NAME)
endif

re:			fclean all

.PHONY:		all clean fclean re
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# vim: fdm=marker fmr=+>,<+ ts=4 sw=4 nofen noet:
