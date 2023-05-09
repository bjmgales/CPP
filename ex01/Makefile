NAME	:= phonebook


CC := c++
CFLAGS := -Wall -Wextra -Werror -g -fsanitize=address -std=c++98
AR := ar
RM := rm -f
MKDIR := mkdir -m 777 -p
ECHO := echo

# ********************************* F O N T S *********************************

EOC					:=	"\033[0m"
LIGHT				:=	"\033[1m"
DARK				:=	"\033[2m"

ITALIC				:=	"\033[3m"
UNDERLINE			:=	"\033[4m"

BLACK				:=	"\033[30m"
RED					:=	"\033[31m"
GREEN				:=	"\033[32m"
BLUE				:=	"\033[34m"
PURPLE				:=	"\033[35m"
CYAN				:=	"\033[36m"
WHITE				:=	"\033[37m"

# ********************************* N A M E S *********************************

SRCS := $(wildcard *.cpp)
OBJS := $(patsubst %.cpp,bin/%.o,$(SRCS))

all: $(NAME)

bin/%.o: %.cpp | bin
	@echo \
	$(WHITE)$(ITALIC)"Compiling $<"$(EOC)
	@$(CC) $(CFLAGS) -c $< -o $@

bin:
	@$(MKDIR) $@

$(NAME):			$(OBJS)
					@$(CC) $(CFLAGS) $^ -o $@
					@$(ECHO)\
					$(PURPLE)$(LIGHT)"$@"$(EOC)": "$(GREEN)$(ITALIC)"completed"$(EOC)


clean:
	@$(RM) $(OBJS)
	@echo \
	$(RED)$(LIGHT)$(ITALIC)"Binary files deleted"$(EOC)

fclean: clean
	@$(RM) -r bin $(NAME)
	@echo \
	$(RED)$(LIGHT)$(ITALIC)"Executable deleted"$(EOC)

re: fclean all

.PHONY: all clean fclean re
