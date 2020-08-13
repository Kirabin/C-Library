# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmilan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/16 10:31:54 by dmilan            #+#    #+#              #
#    Updated: 2020/08/05 17:35:13 by dmilan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SOURCE = *.c \
		 */*.c 

OBJECTS = *.o

HEADER = includes

all: $(NAME) clean

$(NAME):
	gcc -c $(SOURCE)
	ar -rc $(NAME).a $(OBJECTS)
	ranlib $(NAME).a

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME).a

re: fclean all
