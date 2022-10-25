# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 17:35:49 by hel-haia          #+#    #+#              #
#    Updated: 2022/10/24 07:45:55 by hel-haia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

AR = ar
ARFLAGS = crs

CC = gcc
CFLAG = -Wall -Wextra -Werror

RM = rm
RMFLAG = -f

INCLUDES = ./libft.h

SRC_PART1 = \
    ./ft_memset.c \
	./ft_strlen.c \
	./ft_atoi.c \
	./ft_isalpha.c \
	./ft_isdigit.c \
	./ft_isalnum.c \
	./ft_isascii.c \
	./ft_isprint.c \
	./ft_toupper.c \
	./ft_tolower.c \
	./ft_putchar_fd.c \
	./ft_putstr_fd.c \
	./ft_strlcat.c \
	./ft_putchar_fd.c \
	./ft_putnbr_fd.c \
	./ft_putstr_fd.c \
	./ft_memcmp.c \
	./ft_memcpy.c \
	./ft_strchr.c \
	./ft_strrchr.c \
	./ft_bzero.c \
	./ft_strncmp.c \
	./ft_putendl_fd.c \
	./ft_strnstr.c \
	./ft_memcpy.c \
	./ft_strlcpy.c \
	./ft_substr.c \
	./ft_strdup.c \
	./ft_calloc.c \

SRCS = \
	$(SRC_PART1)	\
	$(SRC_PART2)
	
OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRC_BONUS:.c=.o)

all : $(NAME)

clean :
	$(RM) $(RMFLAG) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(RMFLAG) $(NAME)

re : fclean all

.c.o : $(SRCS) $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

bonus : $(OBJS) $(OBJS_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $^

.PHONY: all clean fclean re
