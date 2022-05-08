SRC			= memory_tracker.cpp main.cpp
OBJ			= obj
OBJS		= $(SRC:%=$(OBJ)/%.o)

CXXFLAGS	= -Wall -Wextra -Werror -Wpedantic -Wsign-conversion
CXX			= clang++

NAME		= test

VPATH		= core

all:	$(NAME)

$(OBJ)/%.cpp.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -I. $< -o $@

$(NAME): $(OBJ) $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

$(OBJ):
	mkdir -p $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
