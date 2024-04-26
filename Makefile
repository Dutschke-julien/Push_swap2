NAME = push_swap

CXX = c++

CXXFLAGS = -g3

SRCTEMPLATE = LinkedList/Iterator.cpp

SRC = PushSwap.cpp\
	  main.cpp



OBJ = $(SRC:.cpp=.o)

OBJTEMPLATE  = $(SRCTEMPLATE:.cpp=.o)



all: $(NAME)


$(NAME): $(OBJTEMPLATE) $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJTEMPLATE) $(OBJ)

clean:
	rm -f $(OBJ) $(OBJTEMPLATE)

fclean: clean
	rm -f $(NAME)

re: fclean all
