##
## File description:
## Makefile
##

NAME    =	test

SRC    =	src/main.cpp\
			src/read_file.cpp\
			src/check.cpp\
			src/main_program.cpp \

OBJ    =    $(SRC:.cpp=.o)

CFLAGS    =   -std=c++20 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	g++ -o test $(OBJ) --coverage -lcriterion

clean:
	@rm -f *~
	@rm -f #*#
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all
