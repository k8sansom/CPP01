# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksansom <ksansom@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 10:41:47 by ksansom           #+#    #+#              #
#    Updated: 2024/03/22 15:34:12 by ksansom          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Target executable name
NAME = unnecessaryViolence

# Compiler and compiler flags
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 

# Source files
SRCS =	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp
		
# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target (all)
all: $(NAME)

# Linking the program
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Compilation rule for object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -rf $(OBJS)

# Remove all generated files
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re