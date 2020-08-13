# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmilan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/10 10:34:44 by dmilan            #+#    #+#              #
#    Updated: 2020/08/12 17:12:54 by dmilan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY = all clean fclean test re validation_test

NAME = bsq

SRCS = *.c srcs/*.c

FLAGS = -Wall -Wextra -Werror #-g -fsanitize=address

INCLUDES = includes/

all: $(NAME)

$(NAME): *.c */*.c
	gcc $(FLAGS) -o $(NAME) $(SRCS) -I $(INCLUDES)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

test: test_args test_stdin test_validation test_tricky

test_args:
	############################################################ 
	#                                                          #
	#  Testing a few random files fed to program as arguments  #
	#                                                          #
	############################################################
	@perl map_generator.pl 15 10 4 > tests/test_args1
	@perl map_generator.pl 30 20 2 > tests/test_args2
	@perl map_generator.pl 11 8 1 > tests/test_args3
	
	@./$(NAME) tests/test_args*


test_stdin:
	################################################
	#                                              #
	#  Testing random map fed to program as stdin  #
	#                                              #
	################################################
	
	@perl map_generator.pl 15 10 4 | ./$(NAME)


test_tricky:
	######################### 
	#                       #
	#  Testing tricky maps  #
	#                       #
	#########################
	
	@./$(NAME) tests/test_tricky* 


test_validation:
	########################## 
	#                        #
	#  Testing invalid maps  #
	#                        #
	##########################
	
	@./$(NAME) tests/test_validation*


test_big_100:
	#############################
	#                           #
	#  Testing big map 100x100  #
	#                           #
	#############################
	
	perl map_generator.pl 100 100 2 | ./$(NAME)	


test_big_1000:
	###############################
	#                             #
	#  Testing big map 1000x1000  #
	#                             #
	###############################
	
	perl map_generator.pl 1000 1000 2 | ./$(NAME)


test_big_5000:
	###############################
	#                             #
	#  Testing big map 5000x5000  #
	#                             #
	###############################
	# Too much for pipe	
	perl map_generator.pl 5000 5000 2 > tests/test_big_5000
	./$(NAME) tests/test_big_5000
