################################################################################
#                                                                              #
#                                VARIABLES                                     #
#                                                                              #
################################################################################
RED			=	\033[31m
GREEN		=	\033[32m
ORANGE		=	\033[93m
NO_COLOR	=	\033[0m

NAME		=	libft.a
HEADER		=	libft.h
FLAGS		=	-Wall -Wextra -Werror -g

SRC_STR		=	_strlen

SRC			=	$(patsubst %, string/%.c, $(SRC_STR))
OBJ			=	$(SRC:.c=.o)

################################################################################
#                                                                              #
#                                RULES                                         #
#                                                                              #
################################################################################
.PHONY: all clean fclean re

all: $(NAME)

shout_assemble:
	@echo "$(GREEN)Assembling$(NO_COLOR)"

shout_clean:
	@echo "$(RED)Cleaning$(NO_COLOR)"

shout_test:
	@echo "$(ORANGE)Testing$(NO_COLOR)"

%.o: %.c $(HEADER)
	gcc -c $(FLAGS) $< -o $@ -I.

$(NAME): shout_assemble $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean: shout_clean
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette
