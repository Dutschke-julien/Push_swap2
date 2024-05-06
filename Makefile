NAME = push_swap

CXX = c++

CXXFLAGS = -g3

SRC = PushSwap.cpp\
	  utilsA.cpp\
	  utilsB.cpp\
	  instructions.cpp\
	  insertSort.cpp\
	  BubleSort.cpp\
	  FunSort.cpp\
	  QuickSort.cpp\
	  turcMethodSort.cpp\
	  main.cpp



OBJ = $(SRC:.cpp=.o)




all: $(NAME)


$(NAME): $(OBJTEMPLATE) $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME)  $(OBJ)

clean:
	rm -f $(OBJ) $(OBJTEMPLATE)

fclean: clean
	rm -f $(NAME)

re: fclean all
