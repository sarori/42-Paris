# NAME=libft.a
# CC=clang
# CFLAGS=-Wall -Wextra -Werror

# SRC=ft_atoi.c	ft_memdel.c	ft_strclr.c	ft_strncat.c	ft_bzero.c	ft_memmove.c	ft_strcmp.c	ft_strncmp.c	ft_isalnum.c	ft_memset.c	ft_strcpy.c	ft_strncpy.c	ft_isalpha.c	ft_putchar.c	ft_strdel.c	ft_strnequ.c	ft_isascii.c	ft_putchar_fd.c	ft_strdup.c	ft_strnew.c	ft_isdigit.c	ft_putendl.c	ft_strequ.c	ft_strnstr.c	ft_isprint.c	ft_putendl_fd.c	ft_striter.c	ft_strrchr.c	ft_itoa.c	ft_putnbr.c	ft_striteri.c	ft_strsplit.c	ft_memalloc.c	ft_putnbr_fd.c	ft_strjoin.c	ft_strstr.c	ft_memccpy.c	ft_putstr.c	ft_strlcat.c	ft_strsub.c	ft_memchr.c	ft_putstr_fd.c	ft_strlen.c	ft_strtrim.c	ft_memcmp.c	ft_strcat.c	ft_strmap.c	ft_tolower.c	ft_memcpy.c	ft_strchr.c	ft_strmapi.c	ft_toupper.c	ft_lstnew.c	ft_lstdelone.c	ft_lstdel.c	ft_lstadd.c	ft_lstiter.c ft_lstmap.c	ft_digit.c	ft_swap.c	ft_number_length.c	ft_abs.c	ft_bubble_sort.c	ft_strchr_idx.c	ft_strtrimby.c	ft_pow.c	get_next_line.c

# OBJ=ft_atoi.o	ft_memdel.o	ft_strclr.o	ft_strncat.o	ft_bzero.o	ft_memmove.o	ft_strcmp.o	ft_strncmp.o	ft_isalnum.o	ft_memset.o	ft_strcpy.o	ft_strncpy.o	ft_isalpha.o	ft_putchar.o	ft_strdel.o	ft_strnequ.o	ft_isascii.o	ft_putchar_fd.o	ft_strdup.o	ft_strnew.o	ft_isdigit.o	ft_putendl.o	ft_strequ.o	ft_strnstr.o	ft_isprint.o	ft_putendl_fd.o	ft_striter.o	ft_strrchr.o	ft_itoa.o	ft_putnbr.o	ft_striteri.o	ft_strsplit.o	ft_memalloc.o	ft_putnbr_fd.o	ft_strjoin.o	ft_strstr.o	ft_memccpy.o	ft_putstr.o	ft_strlcat.o	ft_strsub.o	ft_memchr.o	ft_putstr_fd.o	ft_strlen.o	ft_strtrim.o	ft_memcmp.o	ft_strcat.o	ft_strmap.o	ft_tolower.o	ft_memcpy.o	ft_strchr.o	ft_strmapi.o	ft_toupper.o	ft_lstnew.o	ft_lstdelone.o	ft_lstdel.o	ft_lstadd.o	ft_lstiter.o ft_lstmap.o	ft_digit.o	ft_swap.o	ft_number_length.o	ft_abs.o	ft_bubble_sort.o	ft_strchr_idx.o	ft_strtrimby.o	ft_pow.o	get_next_line.o

# all: $(NAME)

# $(NAME): $(OBJ)
# 	ar rs $(NAME) $(OBJ)

# $(OBJ): $(SRC)
# 	$(CC) $(CFLAGS) -c $(SRC)

# clean:
# 	-rm *.o

# fclean:
# 	-rm *.o
# 	-rm libft.a

# re:
# 	-rm *.o
# 	-rm libft.a
# 	make all

NAME	=	libft.a
HEADER	=	../../includes
OPTION	=	-c -I $(HEADER)
CFLAGS	=	-Wall -Wextra -Werror
CFILES	=	$(wildcard src/*.c)
OBJ		=	$(patsubst src/%.c, obj/%.o, $(CFILES))

all: $(NAME)

pre: obj $(OBJ)

$(NAME): obj $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

obj:
	mkdir obj

obj/%.o: src/%.c
	gcc $(CFLAGS) $(OPTION) -c -o $@ $<

clean:
	rm -rf obj

fclean: clean
	rm -rf $(NAME)

re: clean all

.PHONY: all re clean fclean