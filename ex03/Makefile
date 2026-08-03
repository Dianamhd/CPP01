NAME	= Weapon

CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
IFLAGS	= -I includes

SRCS	= 	main.cpp HumanA.cpp HumanA.hpp HumanB.cpp HumanB.hpp Weapon.hpp Weapon.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(IFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
