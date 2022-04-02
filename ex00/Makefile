NAME := a.out

SRC != find . -type f -name '*.cpp'

CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98 -g
CPPFLAGS := -MMD -I.

all: $(NAME)

$(NAME): $(SRC)
	$(LINK.cpp) $(SRC) $(LDLIBS) -o $@

clean:
	$(RM) $(NAME).d

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE)

.PHONY: all clean fclean re

-include $(basename $(NAME)).d
