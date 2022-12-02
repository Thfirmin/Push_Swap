# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thino <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/13 03:44:47 by thino             #+#    #+#              #
#    Updated: 2022/12/02 14:09:57 by thfirmin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# +>                                     NAME

NAME		= push_swap

LIBFT		= $(LIBFT_PATH)$(LIBFT_SRC)
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                 SOURCE FILES

LIBFT_SRC	= libft.a

SORT_SRCS	= ps_sort.c \
			  ps_sort_operations.c \
			  ps_sort_stkstatus.c

RULES_SRCS	= ps_swap.c \
			  ps_push.c \
			  ps_rotate.c \
			  ps_rrotate.c

STACK_SRCS	= ps_stknew.c      \
			  ps_stklast.c     \
			  ps_stkclear.c    \
			  ps_stkdelone.c   \
			  ps_stkadd_back.c \
			  ps_stksize.c     \
			  ps_stkadd_front.c

MAIN_SRCS	= push_swap.c       \
			  push_swap_utils.c \
			  push_swap_valid.c

SRCS		= $(addprefix $(STACK_PATH),$(STACK_SRCS)) \
			  $(addprefix $(SORT_PATH),$(SORT_SRCS)) \
			  $(addprefix $(RULES_PATH),$(RULES_SRCS)) \
			  $(MAIN_SRCS)
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                 OBJECT FILES

OBJS		= $(subst .c,.o,$(SRCS))
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                    ALIASES

SORT_PATH	= sorting/
RULES_PATH	= rules/
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

$(LIBFT):
	$(MAKE) $(LIBFT_PATH)

$(NAME):	$(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(INCLUDE) $(LIBFT) $(OBJS) -o $(NAME) 

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
