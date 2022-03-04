##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## launch the program
##

SRC	=	$(wildcard sources/*.c) \
		$(wildcard sources/birds/*.c)	\
		$(wildcard sources/setting/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	myhunter

FLAG	=	-Llib/my -lmy -g3

FLAGCSFML	=	-lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window -Llib/mycsfml -lcsfml

all:	$(NAME)

$(NAME):	$(OBJ)
		make -s -C ./lib/mycsfml
		gcc $(SRC) -o $(NAME) $(FLAGCSFML) -g3

clean:
		rm -f $(OBJ)
		make -s clean -C ./lib/mycsfml

fclean:	clean
		rm -f $(NAME)
		make -s fclean -C ./lib/mycsfml

re:	fclean all
