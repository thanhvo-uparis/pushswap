# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/11 16:58:40 by tvo               #+#    #+#              #
#    Updated: 2023/02/11 16:59:55 by tvo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	pile.c push_swap.c swap.c \

OBJS			= $(SRCS:.c=.o)

DEPS			+= ${SRCS:.c=.d}

CC				= gcc

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror

NAME			= push_swap.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) ${DEPS}

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

%.o : 			%.c
				${CC} ${CFLAGS} -c $< -o $@

-include ${DEPS}
