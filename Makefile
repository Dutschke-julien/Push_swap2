NAME = push_swap

CXX = c++

CXXFLAGS = -g3

SRC = main.cpp\
	  PushSwap.cpp\
	  PushSwapIterator.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

compile:
	$(CXX) $(CXXFLAGS)  $(SRC) -o $(NAME)




$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
