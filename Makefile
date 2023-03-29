# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/11 16:58:40 by tvo               #+#    #+#              #
#    Updated: 2023/03/29 16:22:22 by tvo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	pile.c push_swap.c src/swap.c src/push.c src/shift_up.c src/shift_down.c utils.c

OBJS			= $(SRCS:.c=.o)

DEPS			+= ${SRCS:.c=.d}

CC				= gcc

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror -g3

NAME			= push_swap

all:			$(NAME)

$(NAME):		$(OBJS)
				${CC} $(OBJS) ${CFLAGS} libft/libft.a -o $(NAME)

%.o : 			%.c
				${CC} ${CFLAGS} -c $< -o $@

clean:
				$(RM) $(OBJS) ${DEPS}

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)



-include ${DEPS}
