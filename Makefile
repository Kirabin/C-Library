# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/28 11:34:55 by dmilan            #+#    #+#              #
#    Updated: 2020/12/04 17:59:42 by dmilan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME      = libft.a
HEADER    = libft.h
CCFLAGS   = -Wall -Wextra -Werror
SRC       = ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isblank.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_isspace.c \
			ft_itoa.c \
			ft_uitoa.c \
			ft_leni.c \
			ft_lenui.c \
			ft_lenui_hex.c \
			ft_lenul_hex.c \
			ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstfind.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstmerge.c \
			ft_lstnew.c \
			ft_lstrev.c \
			ft_lstsize.c \
			ft_max.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_min.c \
			ft_putc_fd.c \
			ft_putuc_fd.c \
			ft_puti_fd.c \
			ft_putstr_fd.c \
			ft_putstrn_fd.c \
			ft_putui_fd.c \
			ft_putui_hex_fd.c \
			ft_putul_hex_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strcount.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strjoinfree.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_strskip.c \
			ft_strskip_char.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_swapi.c \
			ft_strfill.c \
			get_next_line.c \
			ft_printf/ft_printf.c \
			ft_printf/print_c.c \
			ft_printf/print_s.c \
			ft_printf/print_p.c \
			ft_printf/print_di.c \
			ft_printf/print_u.c \
			ft_printf/print_x.c \
			ft_printf/print_percent.c \
			ft_printf/ft_printf_support.c \
			ft_putcppn_fd.c \
			ft_absi.c \
			ft_point_add.c 
OBJ       = $(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.c $(HEADER)
	gcc -c $(CCFLAGS) $< -o $@ -I .

$(NAME): $(OBJ) 
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

build: $(NAME)
	gcc $(CCFLAGS) main.c -L. -lft
