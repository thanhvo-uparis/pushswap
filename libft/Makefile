# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 17:11:15 by tvo               #+#    #+#              #
#    Updated: 2023/03/11 23:26:52 by tvo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
					ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c ft_striteri.c \
					ft_itoa.c ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memcpy.c \
					ft_memmove.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c \
					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_strlcat.c \
					ft_putnbr_fd.c

OBJS			= $(SRCS:.c=.o)

DEPS			+= ${SRCS:.c=.d}

BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c

BONUS_OBJS		= $(BONUS:.c=.o)

DEPS			+= ${BONUS:.c=.d}

CC				= gcc

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS) ${DEPS}
				ar rc $(NAME) $(OBJS)

bonus:			$(OBJS) $(BONUS_OBJS) $(DEPS)
				ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS) ${DEPS}

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

%.o : 			%.c
				${CC} ${CFLAGS} -c $< -o $@

%.d :			%.c
				${CC} ${CFLAGS} -MM -c $< -o $@

.PHONY:			all clean fclean re bonus

-include ${DEPS}
