NAME = ft_containers

CC = clang++

CONTAINERS_INCLUDE = ./containers

TEST_INCLUDE = ./tests

ITERATORS_INCLUDE = ./iterators

UTILS_INCLUDE = ./utils

CFLAGS = -g -fsanitize=address -fsanitize=leak -Wall -Wextra -Werror -I $(CONTAINERS_INCLUDE) -I $(TEST_INCLUDE) -I $(ITERATORS_INCLUDE) -I $(UTILS_INCLUDE)

HEADERS =	./ft.hpp \
			./containers/map.hpp \
			./containers/stack.hpp \
			./containers/vector.hpp \
			./tests/Array.hpp \
			./tests/MyClass.hpp \
			./utils/Node.hpp \
			./utils/iterator.hpp \
			./utils/iterator_tags.hpp \
			./utils/iterator_traits.hpp \
			./utils/type_traits.hpp \
			./iterators/random_access_iterator.hpp \
			./iterators/reverse_iterator.hpp

SRCS =		./test.cpp \
			./tests/test_vector/test_vector.cpp \
			./tests/test_vector/test_constr_assign_operator.cpp \
			./tests/test_vector/test_insert_one_element.cpp \
			./tests/test_vector/test_insert_n_elements.cpp \
			./tests/test_vector/test_insert_n_elements_iterator.cpp \
			./tests/test_vector/test_erase_one_element.cpp \
			./tests/test_vector/test_erase_n_elements.cpp \
			./tests/test_vector/test_assign_n_elements.cpp \
			./tests/test_vector/test_assign_n_elements_iterator.cpp \
			./tests/test_vector/test_methods.cpp \
			./tests/test_vector/test_spec_operators.cpp \
			./tests/test_stack/test_stack.cpp \
			./tests/MyClass.cpp
#			./tests/test_map/test_map.cpp \

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

run:
	LSAN_OPTIONS=detect_leaks=1 ./$(NAME)

.PHONY: all clean fclean re run
