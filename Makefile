NAME = ft_printf.a

SRCS = ft_printf.c
#       ft_print_char.c \
#       ft_print_string.c \
#       ft_print_pointer.c \
#       ft_print_decimal.c \
#       ft_print_unsigned.c \
#       ft_print_hex.c \
#       ft_utils.c

OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT = libft.a
LIBFT_DIR = ./libft

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/$(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
