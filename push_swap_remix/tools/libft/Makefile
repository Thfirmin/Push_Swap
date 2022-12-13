# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thino <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/13 03:44:47 by thino             #+#    #+#              #
#    Updated: 2022/10/21 23:36:46 by thfirmin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# +>                                     NAME

NAME	= libft.a
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                 SOURCE FILES

SRC_ROOT	= srcs

SRCS_DIR	= ft_printf \
			  libft

SRCS_PATH	= $(addprefix $(SRC_ROOT)/, $(SRCS_DIR))
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                 OBJECT FILES

OBJS	= $(foreach objs, $(SRCS_PATH), $(objs)/*.o)

LIBS	= *.a
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                    ALIASES

RM			= rm -rf
AR			= ar rcs
CC			= cc
INCLUDE		= -I $(LIB)
CFLAGS		= -g -Wall -Wextra -Werror
MAKEFLAGS	+= --silent
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                  TEXT CODES

BLANK		= \033[m
RED			= \033[38;5;9m
YELLOW		= \033[38;5;11m
GREEN		= \033[38;5;2m
BLUE		= \033[38;5;6m
PURPLE		= \033[38;5;5m
PINK		= \033[38;5;13m
WHITE		= \033[38;5;15m

BOLD		= \033[1m
SHADOW		= \033[2m
ITALIC		= \033[3m
UNDLINE		= \033[4m
UPPLINE		= \033[53m
DUNDLINE	= \033[21m
CENSORED	= \033[9m
UPALIGN		= \033[73m
DWALIGN		= \033[74m
FULLER		= \033[7m
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     RULES

all:		$(NAME)

$(NAME):	checking $(LIBS)
	printf "[$(PURPLE)$(UNDLINE)Objects of $(NAME)$(BLANK)] $(GREEN)Has Been $(BOLD)Compiled!$(BLANK)\n"
	$(AR) $(NAME) $(OBJS)
	printf "[$(PURPLE)$(UNDLINE)$(NAME)$(BLANK)] $(GREEN)Has Been $(BOLD)Created!$(BLANK)\n"

$(LIBS):
	$(foreach dir, $(SRCS_PATH), $(MAKE) -C $(dir) &&) true
	printf "[$(PURPLE)$(UNDLINE)Libraries of Final $(NAME)$(BLANK)] $(GREEN)Has Been $(BOLD)Compiled!$(BLANK)\n"

clean:
	$(foreach dir, $(SRCS_PATH), $(MAKE) clean -C $(dir) &&) true
	printf "[$(PURPLE)$(UNDLINE)Objects of Final $(NAME)$(BLANK)] $(YELLOW)Has Been $(BOLD)Deleted!$(BLANK)\n"

fclean:
	$(foreach dir, $(SRCS_PATH), $(MAKE) fclean -C $(dir) &&) true
	printf "[$(PURPLE)$(UNDLINE)Libraries of Final $(NAME)$(BLANK)] $(RED)Has Been $(BOLD)Deleted!$(BLANK)\n"
	$(RM) $(NAME)
	printf "[$(PURPLE)$(UNDLINE)Final $(NAME)$(BLANK)] $(RED)Has Been $(BOLD)Deleted!$(BLANK)\n"

re:			recompiling fclean libft.a

checking:
	printf "$(BOLD)Checking [$(PURPLE)$(UNDLINE)Objects of $(NAME)$(BLANK)]...\n"

recompiling:
	printf "[$(PURPLE)$(UNDLINE)Final $(NAME)$(BLANK)] is Being $(BOLD)Recompiled$(BLANK)...\n"

.PHONY:		all clean fclean re recompiling checking
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# vim: fdm=marker fmr=+>,<+ ts=4 sw=4 nofen noet:
