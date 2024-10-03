# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 17:54:28 by acastrov          #+#    #+#              #
#    Updated: 2024/10/03 16:50:02 by acastrov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memchr.c \
	ft_memcpy.c \
	ft_memcmp.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strnstr.c \
	ft_strlcat.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \

OBJS = $(SRCS:.c=.o)

<<<<<<< Updated upstream
=======
B_SRCS = ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \

B_OBJS = $(B_SRCS:.c=.o)

>>>>>>> Stashed changes
CFLAGS = -Werror -Wextra -Wall

CC = cc

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
<<<<<<< Updated upstream
	@ar -rcs $(NAME)  $(OBJS)
=======
	@ar -rcs $(NAME) $(OBJS)

bonus: all $(B_OBJS)
	@ar -rcs $(NAME) $(B_OBJS)
>>>>>>> Stashed changes

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
