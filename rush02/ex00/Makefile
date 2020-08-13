# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmilan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/08 16:50:39 by dmilan            #+#    #+#              #
#    Updated: 2020/08/09 23:30:44 by dmilan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

all: $(NAME)

$(NAME):  
	gcc -Wall -Wextra -Werror -o $(NAME) \
							  *.c \
							  srcs/*.c \
							  rush0/*.c \
							  -I includes/

clean: 

fclean: clean
	rm -f $(NAME)
re: fclean all

test:
	echo "Ai-je une chance d'avoir plus de 0 ?" | ./$(NAME)
	echo "o--o\n|  |\n|  |\no--o" | ./$(NAME)
	echo "o---o\n| |\no---o" | ./$(NAME)
	echo "o---o" | ./$(NAME)
	echo "o" | ./$(NAME)
	echo "o\n|\n|\n|\no" | ./$(NAME)
	echo "/***\\" | ./$(NAME)
	echo "ABBBA\nB B\nCBBBC" | ./$(NAME)
	echo "ABBA" | ./$(NAME)
	echo "123vcd" | ./$(NAME)
	echo "\r\n\t\0" | ./$(NAME)
	echo "\n" | ./$(NAME)
	echo "\t" | ./$(NAME)
	echo "\0" | ./$(NAME)
	echo "" | ./$(NAME) 
	echo "42\n234234\n\n1451" | ./$(NAME) 
	echo "42\n234234\n\n1451" | ./$(NAME) 
	echo "\n\n\0" | ./$(NAME)
	echo "ABBBC" | ./$(NAME)
	echo "A\nB\nB\nB\nA" | ./$(NAME)
	echo "ABBC\nB  B\nB  B\nABBC" | ./$(NAME)
	echo "ABBBC\nB   B\nCBBBA" | ./$(NAME)
	echo "A" | ./$(NAME)
	echo "ABBC\nB  B\nB  B\nCBBA" | ./$(NAME)
	echo "ABBBC" | ./$(NAME)
