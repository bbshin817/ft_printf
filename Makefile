SRCS =	ft_printf.c \
		formats/ft_print_char.c \
		formats/ft_print_hex_lower.c \
		formats/ft_print_hex_upper.c \
		formats/ft_print_int.c \
		formats/ft_print_percent.c \
		formats/ft_print_pointer.c \
		formats/ft_print_string.c \
		formats/ft_print_unsigned.c \
		formats/ft_print_utils.c \
		libft/ft_bzero.c \
		libft/ft_calloc.c \
		libft/ft_isalpha.c \
		libft/ft_isdigit.c \
		libft/ft_isprint.c \
		libft/ft_itoa.c \
		libft/ft_putchar_fd.c \
		libft/ft_strchr.c \
		libft/ft_strlcpy.c \
		libft/ft_strlen.c \
		libft/ft_substr.c \
		libft/ft_utoa.c
OBJS	= $(SRCS:.c=.o)
# INCS	= -I includes
NAME	= libftprintf.a
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean	all

.PHONY:	all clean fclean re