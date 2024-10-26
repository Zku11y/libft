# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 15:02:03 by mdakni            #+#    #+#              #
#    Updated: 2024/10/26 02:09:41 by mdakni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_strnstr.c\
ft_substr.c\
ft_strjoin.c\
ft_itoa.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_strlen.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_strmapi.c\
ft_striteri.c\
ft_atoi.c\
ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_bzero.c\
ft_toupper.c\
ft_tolower.c\
ft_split.c

NAME = libft.a
CC = cc -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)
	
re:fclean $(NAME)


	
	




