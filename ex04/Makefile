NAME = sed_is_for_loosers

CC = g++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(MAIN) -o $@ $(LDLIBS) $(LFLAGS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug:
	$(CC) $(CFLAGS) -g $(INCLUDES) $(LDFLAGS) $(OBJS) $(MAIN) -o $@ $(LDLIBS) $(LFLAGS)

.PHONY: debug

.PHONY: all clean fclean re
