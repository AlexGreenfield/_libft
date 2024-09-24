NAME = libft.a

SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strlen.c ft_strncmp.c ft_memset.c ft_memchr.c ft_bzero.c ft_memchr.c \
	ft_memcpy.c ft_memcmp.c ft_memmove.c ft_strlcpy.c ft_strnstr.c ft_strlcat.c ft_atoi.c\
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \

OBJS = $(SRCS:.c=.o)

CFLAGS = -Werror -Wextra -Wall

CC = gcc

all: $(NAME)
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ar -rcs $(NAME)  $(OBJS)

clean:
	@rm -rf $(OBJS) $(B_OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
