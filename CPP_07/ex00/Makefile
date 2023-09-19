NAME            =       template

PATH_OBJS       =       ./.OBJS/

INCLUDES        =       whatever.hpp

SRC                     =       main.cpp

OBJS            =       $(addprefix $(PATH_OBJS), $(SRC:.cpp=.o))

CPPC            =       c++
CPPFLAGS        =       -Wall -Wextra -Werror -std=c++98
RM                      =       rm -rf

all :           $(NAME)

$(NAME) :       $(OBJS) Makefile
				$(CPPC) $(OBJS) -o $(NAME)

$(PATH_OBJS)%.o :       %.cpp $(INCLUDES)
						mkdir -p $(PATH_OBJS)
						$(CPPC) $(CPPFLAGS) -c $< -o $@

clean :
		$(RM) $(PATH_OBJS)

fclean :
		$(RM) $(PATH_OBJS) $(NAME)

re :            fclean all

.PHONY:         all clean fclean re%