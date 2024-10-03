# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acastrov <acastrov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 17:54:28 by acastrov          #+#    #+#              #
#    Updated: 2024/10/03 21:28:38 by acastrov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# The name that's gonna receive our lib
NAME = libft.a
# A variable to enumerate all of our c files, so we don't have to compile them one by one
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

# We tell our program to expect the objects with the same name as the c files, only changing .c for .o
OBJS = $(SRCS:.c=.o)

# A separate variable to threat bonus files
B_SRCS = ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \

# The same as c objects
B_OBJS = $(B_SRCS:.c=.o)

# The flags that our compiler is gonna use
CFLAGS = -Werror -Wextra -Wall

# The compiler we are gonna use
CC = cc

# After declaring the variables, we stablish the jerarchy of our Make file, with the next order

# name of action : condition to acomplish it
#	code to execute if the condition is meeted

# First, Makefile checks if libft.a already exists
all: $(NAME)

# If not, it will try to create the .o files, checking if the .c files already exits. If not, it will create them wit cc
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# If the .o files exists, it will compile everyone of them with the command ar to create the library
$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

# We threat the bonuses different, and make an special command just for them : make bonus
bonus: all $(B_OBJS)
	@ar -rcs $(NAME) $(B_OBJS)

# After we created our lib, we can remove all of our .o files with : make clean
clean:
	@rm -rf $(OBJS)

# We can also remove our libft.a file with : make fclean
fclean: clean
	@rm -rf $(NAME)

# If we want to rebuild our library, first we have to remove libft.a with fclean and start the process again
re: fclean all

# The PHONY tells Makefile that certain words are commands and not files, so it will not try to search for "clean" or "all"
.PHONY: all clean fclean re bonus
