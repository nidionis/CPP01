NAME = harl

CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98
LDFLAGS = $(addprefix -L$(LIB_DIR)/lib,$(LIBRARIES))

SRCS = Harl.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: debug

.PHONY: all clean fclean re
