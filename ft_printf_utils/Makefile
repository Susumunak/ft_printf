NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = printf_utils.c string_utils.c $(wildcard ft*.c) $(wildcard ./libft/*)
OBJ = $(SRC:.c=.o)
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		ar -rcs $(NAME) $(OBJ)
		ranlib $(NAME)

all: $(NAME)

%.o: %.c
		$(CC) -I ./  $(CFLAGS) -o $@ -c $?
clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all