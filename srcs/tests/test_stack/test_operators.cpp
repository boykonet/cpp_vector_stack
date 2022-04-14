#include <iostream>
#include <string>
#include <iomanip>

#include <stack>
#include "stack.hpp"
#include "Array.hpp"

#define PRINT(x) std::cout << x

void		test_operators_equal_int()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< int >					stack1;
	std::stack< int >					stack2;

	ft::stack< int >					my_stack1;
	ft::stack< int >					my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR == (INT)" << "\e[0m");
	PRINT("\n\n");
	PRINT("\e[1;32m" << "EMPTY STACK (INT)" << "\e[0m");
	PRINT("\n");

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");
	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	if (stack1 == stack2)
		PRINT("stack1 == stack2");
	else if (stack1 != stack2)
		PRINT("stack1 != stack2");

	if (my_stack1 == my_stack2)
		PRINT(std::setw(60) << "my_stack1 == my_stack2");
	else if (my_stack1 != my_stack2)
		PRINT(std::setw(60) << "my_stack1 != my_stack2");

	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	int 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack1.top() << " ");
		stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack2.top() << " ");
		stack2.pop();
	}
	PRINT("\n\n");

	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(my_stack1.top() << " ");
		my_stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(my_stack2.top() << " ");
		my_stack2.pop();
	}
	PRINT("\n\n");




	PRINT("\e[1;32m" << "NOT EMPTY STACK (INT)" << "\e[0m");
	PRINT("\n");

	for (int i = 0; i < 5; ++i)
	{
		stack1.push(i + 1);
		stack2.push(i + 1);
		my_stack1.push(i + 1);
		my_stack2.push(i + 1);
	}

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack1.top() << " ");
		stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack2.top() << " ");
		stack2.pop();
	}
	PRINT("\n\n");

	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(my_stack1.top() << " ");
		my_stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(my_stack2.top() << " ");
		my_stack2.pop();
	}
	PRINT("\n\n");


	if (stack1 == stack2)
		PRINT("stack1 == stack2");
	else if (stack1 != stack2)
		PRINT("stack1 != stack2");

	if (my_stack1 == my_stack2)
		PRINT(std::setw(60) << "my_stack1 == my_stack2");
	else if (my_stack1 != my_stack2)
		PRINT(std::setw(60) << "my_stack1 != my_stack2");

	PRINT("\n\n");

}

void		test_operators_equal_string()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< std::string >			stack1;
	std::stack< std::string >			stack2;

	ft::stack< std::string >			my_stack1;
	ft::stack< std::string >			my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR == (STRING)" << "\e[0m");
	PRINT("\n\n");
	PRINT("\e[1;32m" << "EMPTY STACK (INT)" << "\e[0m");
	PRINT("\n");

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");
	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack1.top() << " ");
		stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(my_stack1.top() << " ");
		my_stack1.pop();
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack2.top() << " ");
		stack2.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(my_stack2.top() << " ");
		my_stack2.pop();
	}
	PRINT("\n\n");


	if (stack1 == stack2)
		PRINT("stack1 == stack2");
	else if (stack1 != stack2)
		PRINT("stack1 != stack2");

	if (my_stack1 == my_stack2)
		PRINT(std::setw(60) << "my_stack1 == my_stack2");
	else if (my_stack1 != my_stack2)
		PRINT(std::setw(60) << "my_stack1 != my_stack2");

	PRINT("\n\n");

	PRINT("\e[1;32m" << "NOT EMPTY STACK (STRING)" << "\e[0m");
	PRINT("\n");

	stack1.push("AAA");
	stack2.push("AAA");
	stack1.push("BBB");
	stack2.push("BBB");
	stack1.push("CCC");
	stack2.push("CCC");


	my_stack1.push("AAA");
	my_stack2.push("AAA");
	my_stack1.push("BBB");
	my_stack2.push("BBB");
	my_stack1.push("CCC");
	my_stack2.push("CCC");

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");
	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack1.top() << " ");
		stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(my_stack1.top() << " ");
		my_stack1.pop();
	}
	PRINT("\n\n");

	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack2.top() << " ");
		stack2.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(my_stack2.top() << " ");
		my_stack2.pop();
	}
	PRINT("\n\n");


	if (stack1 == stack2)
		PRINT("stack1 == stack2");
	else if (stack1 != stack2)
		PRINT("stack1 != stack2");

	if (my_stack1 == my_stack2)
		PRINT(std::setw(60) << "my_stack1 == my_stack2");
	else if (my_stack1 != my_stack2)
		PRINT(std::setw(60) << "my_stack1 != my_stack2");

	PRINT("\n\n");
}

void		test_operators_equal_class()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< Array< int > >			stack1;
	std::stack< Array< int > >			stack2;

	ft::stack< Array< int > >			my_stack1;
	ft::stack< Array< int > >			my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR == (CLASS)" << "\e[0m");
	PRINT("\n\n");
	PRINT("\e[1;32m" << "EMPTY STACK (CLASS)" << "\e[0m");
	PRINT("\n");

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");
	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		Array<int>	arr = stack1.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		stack1.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_stack1.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		my_stack1.pop();
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < size; ++i)
	{
		Array<int>	arr = stack2.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		stack2.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_stack2.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		my_stack2.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	if (stack1 == stack2)
		PRINT("stack1 == stack2");
	else if (stack1 != stack2)
		PRINT("stack1 != stack2");

	if (my_stack1 == my_stack2)
		PRINT(std::setw(60) << "my_stack1 == my_stack2");
	else if (my_stack1 != my_stack2)
		PRINT(std::setw(60) << "my_stack1 != my_stack2");

	PRINT("\n\n");

	PRINT("\e[1;32m" << "NOT EMPTY STACK (CLASS)" << "\e[0m");
	PRINT("\n");

	stack1.push(Array<int>(1));
	stack1.push(Array<int>(2));
	stack1.push(Array<int>(3));
	stack1.push(Array<int>(4));
	stack1.push(Array<int>(5));

	stack2.push(Array<int>(1));
	stack2.push(Array<int>(2));
	stack2.push(Array<int>(3));
	stack2.push(Array<int>(4));
	stack2.push(Array<int>(5));


	my_stack1.push(Array<int>(1));
	my_stack1.push(Array<int>(2));
	my_stack1.push(Array<int>(3));
	my_stack1.push(Array<int>(4));
	my_stack1.push(Array<int>(5));

	my_stack2.push(Array<int>(1));
	my_stack2.push(Array<int>(2));
	my_stack2.push(Array<int>(3));
	my_stack2.push(Array<int>(4));
	my_stack2.push(Array<int>(5));

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");
	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	for (size_t i = 0; i < size; ++i)
	{
		Array<int>	arr = stack1.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		stack1.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_stack1.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		my_stack1.pop();
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < size; ++i)
	{
		Array<int>	arr = stack2.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		stack2.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_stack2.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		my_stack2.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	if (stack1 == stack2)
		PRINT("stack1 == stack2");
	else if (stack1 != stack2)
		PRINT("stack1 != stack2");

	if (my_stack1 == my_stack2)
		PRINT(std::setw(60) << "my_stack1 == my_stack2");
	else if (my_stack1 != my_stack2)
		PRINT(std::setw(60) << "my_stack1 != my_stack2");

	PRINT("\n\n");
}

void		test_operators_equal_vector()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< std::vector< int > >	stack1;
	std::stack< std::vector< int > >	stack2;

	ft::stack< ft::vector< int > >		my_stack1;
	ft::stack< ft::vector< int > >		my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR == (STACK)" << "\e[0m");
	PRINT("\n\n");
	PRINT("\e[1;32m" << "EMPTY STACK (STACK)" << "\e[0m");
	PRINT("\n");

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");
	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		std::vector<int>	arr = stack1.top();

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		stack1.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		ft::vector<int>		arr = my_stack1.top();
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		my_stack1.pop();
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

//	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		std::vector<int>	arr = stack2.top();

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		stack2.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		ft::vector<int>		arr = my_stack2.top();
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		my_stack2.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	if (stack1 == stack2)
		PRINT("stack1 == stack2");
	else if (stack1 != stack2)
		PRINT("stack1 != stack2");

	if (my_stack1 == my_stack2)
		PRINT(std::setw(60) << "my_stack1 == my_stack2");
	else if (my_stack1 != my_stack2)
		PRINT(std::setw(60) << "my_stack1 != my_stack2");

	PRINT("\n\n");

	PRINT("\e[1;32m" << "NOT EMPTY STACK (STACK)" << "\e[0m");
	PRINT("\n");

	stack1.push(std::vector<int>(3, 100));
	stack2.push(std::vector<int>(3, 100));

	stack1.push(std::vector<int>(3, 200));
	stack2.push(std::vector<int>(3, 200));

	stack1.push(std::vector<int>(3, 300));
	stack2.push(std::vector<int>(3, 300));


	my_stack1.push(ft::vector<int>(3, 100));
	my_stack2.push(ft::vector<int>(3, 100));

	my_stack1.push(ft::vector<int>(3, 200));
	my_stack2.push(ft::vector<int>(3, 200));

	my_stack1.push(ft::vector<int>(3, 300));
	my_stack2.push(ft::vector<int>(3, 300));

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

//	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		std::vector<int>	arr = stack1.top();

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		stack1.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		ft::vector<int>		arr = my_stack1.top();
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		my_stack1.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

//	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		std::vector<int>	arr = stack2.top();

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		stack2.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		ft::vector<int>		arr = my_stack2.top();
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		my_stack2.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	if (stack1 == stack2)
		PRINT("stack1 == stack2");
	else if (stack1 != stack2)
		PRINT("stack1 != stack2");

	if (my_stack1 == my_stack2)
		PRINT(std::setw(60) << "my_stack1 == my_stack2");
	else if (my_stack1 != my_stack2)
		PRINT(std::setw(60) << "my_stack1 != my_stack2");

	PRINT("\n\n");
}
/*
void		test_operators_not_equal_int()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< int >					stack1;
	std::stack< int >					stack2;

	ft::stack< int >					my_stack1;
	ft::stack< int >					my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR != (INT)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (INT)" << "\e[0m");
	PRINT("\n");

	for (int i = 0; i < 5; ++i)
	{
		stack1.push(i + 1);
		stack2.push(i + 1);
		my_stack1.push(i + 1);
		my_stack2.push(i + 1);
	}

	stack1.push(1);
	stack2.push(2);
	my_stack1.push(1);
	my_stack2.push(2);


	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	int 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack1.top() << " ");
		stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack2.top() << " ");
		stack2.pop();
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");


	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack1.top() << " ");
		stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack2.top() << " ");
		stack2.pop();
	}
	PRINT("\n\n");


	if (stack1 == stack2)
		PRINT("stack1 == stack2");
	else if (stack1 != stack2)
		PRINT("stack1 != stack2");

	if (my_stack1 == my_stack2)
		PRINT(std::setw(60) << "my_stack1 == my_stack2");
	else if (my_stack1 != my_stack2)
		PRINT(std::setw(60) << "my_stack1 != my_stack2");

	PRINT("\n\n");

}

void		test_operators_not_equal_string()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< std::string >			stack1;
	std::stack< std::string >			stack2;

	ft::stack< std::string >			my_stack1;
	ft::stack< std::string >			my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR != (STRING)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (STRING)" << "\e[0m");
	PRINT("\n");

	stack1.push("AAA");
	stack2.push("AAA");
	stack1.push("BBB");
	stack2.push("BBB");
	stack1.push("CCC");
	stack2.push("CCD");


	my_stack1.push("AAA");
	my_stack2.push("AAA");
	my_stack1.push("BBB");
	my_stack2.push("BBB");
	my_stack1.push("CCC");
	my_stack2.push("CCK");

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	for (size_t i = 0; i < stack1.size(); ++i)
		PRINT(stack1.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_stack1.size(); ++i)
		PRINT(my_stack1.at(i) << " ");
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < stack2.size(); ++i)
		PRINT(stack2.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_stack2.size(); ++i)
		PRINT(my_stack2.at(i) << " ");
	PRINT("\n\n");


	if (stack1 == stack2)
		PRINT("stack1 == stack2");
	else if (stack1 != stack2)
		PRINT("stack1 != stack2");

	if (my_stack1 == my_stack2)
		PRINT(std::setw(60) << "my_stack1 == my_stack2");
	else if (my_stack1 != my_stack2)
		PRINT(std::setw(60) << "my_stack1 != my_stack2");

	PRINT("\n\n");
}

void		test_operators_not_equal_class()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< Array< int > >			stack1;
	std::stack< Array< int > >			stack2;

	ft::stack< Array< int > >			my_stack1;
	ft::stack< Array< int > >			my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR != (CLASS)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (CLASS)" << "\e[0m");
	PRINT("\n");

	stack1.push(Array<int>(1));
	stack1.push(Array<int>(2));
	stack1.push(Array<int>(3));
	stack1.push(Array<int>(4));
	stack1.push(Array<int>(5));

	stack2.push(Array<int>(1));
	stack2.push(Array<int>(2));
	stack2.push(Array<int>(3));
	stack2.push(Array<int>(4));
	stack2.push(Array<int>(6));


	my_stack1.push(Array<int>(1));
	my_stack1.push(Array<int>(2));
	my_stack1.push(Array<int>(3));
	my_stack1.push(Array<int>(4));
	my_stack1.push(Array<int>(5));

	my_stack2.push(Array<int>(1));
	my_stack2.push(Array<int>(2));
	my_stack2.push(Array<int>(3));
	my_stack2.push(Array<int>(4));
	my_stack2.push(Array<int>(6));

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		Array<int>	arr = stack1.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		stack1.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_stack1.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		my_stack1.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < size; ++i)
	{
		Array<int>	arr = stack2.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		stack2.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_stack2.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		my_stack2.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	if (stack1 == stack2)
		PRINT("stack1 == stack2");
	else if (stack1 != stack2)
		PRINT("stack1 != stack2");

	if (my_stack1 == my_stack2)
		PRINT(std::setw(60) << "my_stack1 == my_stack2");
	else if (my_stack1 != my_stack2)
		PRINT(std::setw(60) << "my_stack1 != my_stack2");

	PRINT("\n\n");
}

void		test_operators_not_equal_vector()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< std::vector< int > >	stack1;
	std::stack< std::vector< int > >	stack2;

	ft::stack< ft::vector< int > >		my_stack1;
	ft::stack< ft::vector< int > >		my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR != (VECTOR)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (STACK)" << "\e[0m");
	PRINT("\n");

	stack1.push(std::vector<int>(3, 100));
	stack2.push(std::vector<int>(3, 100));

	stack1.push(std::vector<int>(3, 200));
	stack2.push(std::vector<int>(3, 200));

	stack1.push(std::vector<int>(3, 300));
	stack2.push(std::vector<int>(3, 400));


	my_stack1.push(ft::vector<int>(3, 100));
	my_stack2.push(ft::vector<int>(3, 100));

	my_stack1.push(ft::vector<int>(3, 200));
	my_stack2.push(ft::vector<int>(3, 200));

	my_stack1.push(ft::vector<int>(3, 300));
	my_stack2.push(ft::vector<int>(3, 400));

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		std::vector<int>	arr = stack1.top();

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		stack1.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		ft::vector<int>		arr = my_stack1.top();
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		my_stack1.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

//	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		std::vector<int>	arr = stack2.top();

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		stack2.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		ft::vector<int>		arr = my_stack2.top();
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		my_stack2.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	if (stack1 == stack2)
		PRINT("stack1 == stack2");
	else if (stack1 != stack2)
		PRINT("stack1 != stack2");

	if (my_stack1 == my_stack2)
		PRINT(std::setw(60) << "my_stack1 == my_stack2");
	else if (my_stack1 != my_stack2)
		PRINT(std::setw(60) << "my_stack1 != my_stack2");

	PRINT("\n\n");
}

void		test_operators_more_int()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< int >					stack1;
	std::stack< int >					stack2;

	ft::stack< int >					my_stack1;
	ft::stack< int >					my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR > (INT)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (INT)" << "\e[0m");
	PRINT("\n");

	for (int i = 0; i < 5; ++i)
	{
		stack1.push(i + 1);
		stack2.push(i + 1);
		my_stack1.push(i + 1);
		my_stack2.push(i + 1);
	}

	stack1.push(2);
	stack2.push(1);
	my_stack1.push(2);
	my_stack2.push(1);


	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	int 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack1.top() << " ");
		stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack2.top() << " ");
		stack2.pop();
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");


	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack1.top() << " ");
		stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack2.top() << " ");
		stack2.pop();
	}
	PRINT("\n\n");


	if (stack1 > stack2)
		PRINT("stack1 > stack2");
	else
		PRINT("stack1 <= stack2");

	if (my_stack1 > my_stack2)
		PRINT(std::setw(60) << "my_stack1 > my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 <= my_stack2");

	PRINT("\n\n");

}

void		test_operators_more_string()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< std::string >			stack1;
	std::stack< std::string >			stack2;

	ft::stack< std::string >			my_stack1;
	ft::stack< std::string >			my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR > (STRING)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (STRING)" << "\e[0m");
	PRINT("\n");

	stack1.push("AAA");
	stack2.push("AAA");

	stack1.push("BBB");
	stack2.push("BBB");

	stack1.push("CCK");
	stack2.push("CCC");


	my_stack1.push("AAA");
	my_stack2.push("AAA");

	my_stack1.push("BBB");
	my_stack2.push("BBB");

	my_stack1.push("CCK");
	my_stack2.push("CCC");

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	for (size_t i = 0; i < stack1.size(); ++i)
		PRINT(stack1.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_stack1.size(); ++i)
		PRINT(my_stack1.at(i) << " ");
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < stack2.size(); ++i)
		PRINT(stack2.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_stack2.size(); ++i)
		PRINT(my_stack2.at(i) << " ");
	PRINT("\n\n");


	if (stack1 > stack2)
		PRINT("stack1 > stack2");
	else
		PRINT("stack1 <= stack2");

	if (my_stack1 > my_stack2)
		PRINT(std::setw(60) << "my_stack1 > my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 <= my_stack2");

	PRINT("\n\n");
}

void		test_operators_more_class()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< Array< int > >			stack1;
	std::stack< Array< int > >			stack2;

	ft::stack< Array< int > >			my_stack1;
	ft::stack< Array< int > >			my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR > (CLASS)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (CLASS)" << "\e[0m");
	PRINT("\n");

	stack1.push(Array<int>(1));
	stack1.push(Array<int>(2));
	stack1.push(Array<int>(3));
	stack1.push(Array<int>(4));
	stack1.push(Array<int>(6));

	stack2.push(Array<int>(1));
	stack2.push(Array<int>(2));
	stack2.push(Array<int>(3));
	stack2.push(Array<int>(4));
	stack2.push(Array<int>(5));


	my_stack1.push(Array<int>(1));
	my_stack1.push(Array<int>(2));
	my_stack1.push(Array<int>(3));
	my_stack1.push(Array<int>(4));
	my_stack1.push(Array<int>(6));

	my_stack2.push(Array<int>(1));
	my_stack2.push(Array<int>(2));
	my_stack2.push(Array<int>(3));
	my_stack2.push(Array<int>(4));
	my_stack2.push(Array<int>(5));

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		Array<int>	arr = stack1.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		stack1.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_stack1.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		my_stack1.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < size; ++i)
	{
		Array<int>	arr = stack2.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		stack2.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_stack2.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		my_stack2.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	if (stack1 > stack2)
		PRINT("stack1 > stack2");
	else
		PRINT("stack1 <= stack2");

	if (my_stack1 > my_stack2)
		PRINT(std::setw(60) << "my_stack1 > my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 <= my_stack2");

	PRINT("\n\n");
}

void		test_operators_more_vector()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< std::vector< int > >	stack1;
	std::stack< std::vector< int > >	stack2;

	ft::stack< ft::vector< int > >		my_stack1;
	ft::stack< ft::vector< int > >		my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR > (VECTOR)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (STACK)" << "\e[0m");
	PRINT("\n");

	stack1.push(std::vector<int>(3, 100));
	stack2.push(std::vector<int>(3, 100));

	stack1.push(std::vector<int>(3, 200));
	stack2.push(std::vector<int>(3, 200));

	stack1.push(std::vector<int>(3, 400));
	stack2.push(std::vector<int>(3, 300));


	my_stack1.push(ft::vector<int>(3, 100));
	my_stack2.push(ft::vector<int>(3, 100));

	my_stack1.push(ft::vector<int>(3, 200));
	my_stack2.push(ft::vector<int>(3, 200));

	my_stack1.push(ft::vector<int>(3, 400));
	my_stack2.push(ft::vector<int>(3, 300));

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		std::vector<int>	arr = stack1.top();

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		stack1.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		ft::vector<int>		arr = my_stack1.top();
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		my_stack1.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

//	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		std::vector<int>	arr = stack2.top();

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		stack2.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		ft::vector<int>		arr = my_stack2.top();
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		my_stack2.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	if (stack1 > stack2)
		PRINT("stack1 > stack2");
	else
		PRINT("stack1 <= stack2");

	if (my_stack1 > my_stack2)
		PRINT(std::setw(60) << "my_stack1 > my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 <= my_stack2");

	PRINT("\n\n");
}

void		test_operators_more_or_equal_int()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< int >					stack1;
	std::stack< int >					stack2;

	ft::stack< int >					my_stack1;
	ft::stack< int >					my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR >= (INT)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (INT)" << "\e[0m");
	PRINT("\n");

	for (int i = 0; i < 5; ++i)
	{
		stack1.push(i + 1);
		stack2.push(i + 1);
		my_stack1.push(i + 1);
		my_stack2.push(i + 1);
	}

	stack1.push(2);
	stack2.push(1);
	my_stack1.push(2);
	my_stack2.push(1);


	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	int 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack1.top() << " ");
		stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack2.top() << " ");
		stack2.pop();
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");


	for (size_t i = 0; i < size; ++i)
	{
		PRINT(my_stack1.top() << " ");
		my_stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(my_stack2.top() << " ");
		my_stack2.pop();
	}
	PRINT("\n\n");


	if (stack1 >= stack2)
		PRINT("stack1 >= stack2");
	else
		PRINT("stack1 < stack2");

	if (my_stack1 >= my_stack2)
		PRINT(std::setw(60) << "my_stack1 >= my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 < my_stack2");

	PRINT("\n\n");

}

void		test_operators_more_or_equal_string()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< std::string >			stack1;
	std::stack< std::string >			stack2;

	ft::stack< std::string >			my_stack1;
	ft::stack< std::string >			my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR >= (STRING)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (STRING)" << "\e[0m");
	PRINT("\n");

	stack1.push("AAA");
	stack2.push("AAA");

	stack1.push("BBB");
	stack2.push("BBB");

	stack1.push("CCK");
	stack2.push("CCC");


	my_stack1.push("AAA");
	my_stack2.push("AAA");

	my_stack1.push("BBB");
	my_stack2.push("BBB");

	my_stack1.push("CCK");
	my_stack2.push("CCC");

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	for (size_t i = 0; i < stack1.size(); ++i)
		PRINT(stack1.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_stack1.size(); ++i)
		PRINT(my_stack1.at(i) << " ");
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < stack2.size(); ++i)
		PRINT(stack2.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_stack2.size(); ++i)
		PRINT(my_stack2.at(i) << " ");
	PRINT("\n\n");


	if (stack1 >= stack2)
		PRINT("stack1 >= stack2");
	else
		PRINT("stack1 < stack2");

	if (my_stack1 >= my_stack2)
		PRINT(std::setw(60) << "my_stack1 >= my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 < my_stack2");

	PRINT("\n\n");
}

void		test_operators_more_or_equal_class()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< Array< int > >			stack1;
	std::stack< Array< int > >			stack2;

	ft::stack< Array< int > >			my_stack1;
	ft::stack< Array< int > >			my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR >= (CLASS)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (CLASS)" << "\e[0m");
	PRINT("\n");

	stack1.push(Array<int>(1));
	stack1.push(Array<int>(2));
	stack1.push(Array<int>(3));
	stack1.push(Array<int>(4));
	stack1.push(Array<int>(6));

	stack2.push(Array<int>(1));
	stack2.push(Array<int>(2));
	stack2.push(Array<int>(3));
	stack2.push(Array<int>(4));
	stack2.push(Array<int>(5));


	my_stack1.push(Array<int>(1));
	my_stack1.push(Array<int>(2));
	my_stack1.push(Array<int>(3));
	my_stack1.push(Array<int>(4));
	my_stack1.push(Array<int>(6));

	my_stack2.push(Array<int>(1));
	my_stack2.push(Array<int>(2));
	my_stack2.push(Array<int>(3));
	my_stack2.push(Array<int>(4));
	my_stack2.push(Array<int>(5));

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		Array<int>	arr = stack1.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		stack1.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_stack1.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		my_stack1.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < size; ++i)
	{
		Array<int>	arr = stack2.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		stack2.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_stack2.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		my_stack2.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	if (stack1 >= stack2)
		PRINT("stack1 >= stack2");
	else
		PRINT("stack1 < stack2");

	if (my_stack1 >= my_stack2)
		PRINT(std::setw(60) << "my_stack1 >= my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 < my_stack2");

	PRINT("\n\n");
}

void		test_operators_more_or_equal_vector()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< std::vector< int > >	stack1;
	std::stack< std::vector< int > >	stack2;

	ft::stack< ft::vector< int > >		my_stack1;
	ft::stack< ft::vector< int > >		my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR >= (VECTOR)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (STACK)" << "\e[0m");
	PRINT("\n");

	stack1.push(std::vector<int>(3, 100));
	stack2.push(std::vector<int>(3, 100));

	stack1.push(std::vector<int>(3, 200));
	stack2.push(std::vector<int>(3, 200));

	stack1.push(std::vector<int>(3, 300));
	stack2.push(std::vector<int>(3, 300));


	my_stack1.push(ft::vector<int>(3, 100));
	my_stack2.push(ft::vector<int>(3, 100));

	my_stack1.push(ft::vector<int>(3, 200));
	my_stack2.push(ft::vector<int>(3, 200));

	my_stack1.push(ft::vector<int>(3, 300));
	my_stack2.push(ft::vector<int>(3, 300));

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		std::vector<int>	arr = stack1.top();

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		stack1.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		ft::vector<int>		arr = my_stack1.top();
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		my_stack1.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

//	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		std::vector<int>	arr = stack2.top();

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		stack2.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		ft::vector<int>		arr = my_stack2.top();
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		my_stack1.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	if (stack1 >= stack2)
		PRINT("stack1 >= stack2");
	else
		PRINT("stack1 < stack2");

	if (my_stack1 >= my_stack2)
		PRINT(std::setw(60) << "my_stack1 >= my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 < my_stack2");

	PRINT("\n\n");
}

void		test_operators_less_int()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< int >					stack1;
	std::stack< int >					stack2;

	ft::stack< int >					my_stack1;
	ft::stack< int >					my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR < (INT)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (INT)" << "\e[0m");
	PRINT("\n");

	for (int i = 0; i < 5; ++i)
	{
		stack1.push(i + 1);
		stack2.push(i + 1);
		my_stack1.push(i + 1);
		my_stack2.push(i + 1);
	}

	stack1.push(1);
	stack2.push(2);
	my_stack1.push(1);
	my_stack2.push(2);


	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	int 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack1.top() << " ");
		stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack2.top() << " ");
		stack2.pop();
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");


	for (size_t i = 0; i < size; ++i)
	{
		PRINT(my_stack1.top() << " ");
		my_stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(my_stack2.top() << " ");
		my_stack2.pop();
	}
	PRINT("\n\n");


	if (stack1 < stack2)
		PRINT("stack1 < stack2");
	else
		PRINT("stack1 >= stack2");

	if (my_stack1 < my_stack2)
		PRINT(std::setw(60) << "my_stack1 < my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 >= my_stack2");

	PRINT("\n\n");

}

void		test_operators_less_string()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< std::string >			stack1;
	std::stack< std::string >			stack2;

	ft::stack< std::string >			my_stack1;
	ft::stack< std::string >			my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR < (STRING)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (STRING)" << "\e[0m");
	PRINT("\n");

	stack1.push("AAA");
	stack2.push("AAA");

	stack1.push("BBB");
	stack2.push("BBB");

	stack1.push("CCC");
	stack2.push("CCK");


	my_stack1.push("AAA");
	my_stack2.push("AAA");

	my_stack1.push("BBB");
	my_stack2.push("BBB");

	my_stack1.push("CCC");
	my_stack2.push("CCK");

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	for (size_t i = 0; i < stack1.size(); ++i)
		PRINT(stack1.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_stack1.size(); ++i)
		PRINT(my_stack1.at(i) << " ");
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < stack2.size(); ++i)
		PRINT(stack2.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_stack2.size(); ++i)
		PRINT(my_stack2.at(i) << " ");
	PRINT("\n\n");


	if (stack1 < stack2)
		PRINT("stack1 < stack2");
	else
		PRINT("stack1 >= stack2");

	if (my_stack1 < my_stack2)
		PRINT(std::setw(60) << "my_stack1 < my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 >= my_stack2");

	PRINT("\n\n");
}

void		test_operators_less_class()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< Array< int > >			stack1;
	std::stack< Array< int > >			stack2;

	ft::stack< Array< int > >			my_stack1;
	ft::stack< Array< int > >			my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR < (CLASS)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (CLASS)" << "\e[0m");
	PRINT("\n");

	stack1.push(Array<int>(1));
	stack1.push(Array<int>(2));
	stack1.push(Array<int>(3));
	stack1.push(Array<int>(4));
	stack1.push(Array<int>(5));

	stack2.push(Array<int>(1));
	stack2.push(Array<int>(2));
	stack2.push(Array<int>(3));
	stack2.push(Array<int>(4));
	stack2.push(Array<int>(6));


	my_stack1.push(Array<int>(1));
	my_stack1.push(Array<int>(2));
	my_stack1.push(Array<int>(3));
	my_stack1.push(Array<int>(4));
	my_stack1.push(Array<int>(5));

	my_stack2.push(Array<int>(1));
	my_stack2.push(Array<int>(2));
	my_stack2.push(Array<int>(3));
	my_stack2.push(Array<int>(4));
	my_stack2.push(Array<int>(6));

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		Array<int>	arr = stack1.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		stack1.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_stack1.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		my_stack1.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < size; ++i)
	{
		Array<int>	arr = stack2.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		stack2.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_stack2.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		my_stack2.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	if (stack1 < stack2)
		PRINT("stack1 < stack2");
	else
		PRINT("stack1 >= stack2");

	if (my_stack1 < my_stack2)
		PRINT(std::setw(60) << "my_stack1 < my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 >= my_stack2");

	PRINT("\n\n");
}

void		test_operators_less_vector()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< std::vector< int > >	stack1;
	std::stack< std::vector< int > >	stack2;

	ft::stack< ft::vector< int > >		my_stack1;
	ft::stack< ft::vector< int > >		my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR < (VECTOR)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (VECTOR)" << "\e[0m");
	PRINT("\n");

	stack1.push(std::vector<int>(3, 100));
	stack2.push(std::vector<int>(3, 100));

	stack1.push(std::vector<int>(3, 200));
	stack2.push(std::vector<int>(3, 200));

	stack1.push(std::vector<int>(3, 300));
	stack2.push(std::vector<int>(3, 400));


	my_stack1.push(ft::vector<int>(3, 100));
	my_stack2.push(ft::vector<int>(3, 100));

	my_stack1.push(ft::vector<int>(3, 200));
	my_stack2.push(ft::vector<int>(3, 200));

	my_stack1.push(ft::vector<int>(3, 300));
	my_stack2.push(ft::vector<int>(3, 400));

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	for (size_t i = 0; i < stack1.size(); ++i)
	{
		std::stack<int>	arr = stack1.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_stack1.size(); ++i)
	{
		ft::stack<int>		arr = my_stack1.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < stack2.size(); ++i)
	{
		std::stack<int>	arr = stack2.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_stack2.size(); ++i)
	{
		ft::stack<int>		arr = my_stack2.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (stack1 < stack2)
		PRINT("stack1 < stack2");
	else
		PRINT("stack1 >= stack2");

	if (my_stack1 < my_stack2)
		PRINT(std::setw(60) << "my_stack1 < my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 >= my_stack2");

	PRINT("\n\n");
}

void		test_operators_less_or_equal_int()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< int >					stack1;
	std::stack< int >					stack2;

	ft::stack< int >					my_stack1;
	ft::stack< int >					my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR <= (INT)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (INT)" << "\e[0m");
	PRINT("\n");

	for (int i = 0; i < 5; ++i)
	{
		stack1.push(i + 1);
		stack2.push(i + 1);
		my_stack1.push(i + 1);
		my_stack2.push(i + 1);
	}

	stack1.push(1);
	stack2.push(2);
	my_stack1.push(1);
	my_stack2.push(2);


	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	int 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack1.top() << " ");
		stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(stack2.top() << " ");
		stack2.pop();
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");


	for (size_t i = 0; i < size; ++i)
	{
		PRINT(my_stack1.top() << " ");
		my_stack1.pop();
	}

	PRINT(std::setw(45));

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(my_stack2.top() << " ");
		my_stack2.pop();
	}
	PRINT("\n\n");


	if (stack1 <= stack2)
		PRINT("stack1 <= stack2");
	else
		PRINT("stack1 > stack2");

	if (my_stack1 <= my_stack2)
		PRINT(std::setw(60) << "my_stack1 <= my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 > my_stack2");

	PRINT("\n\n");

}

void		test_operators_less_or_equal_string()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< std::string >			stack1;
	std::stack< std::string >			stack2;

	ft::stack< std::string >			my_stack1;
	ft::stack< std::string >			my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR <= (STRING)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (STRING)" << "\e[0m");
	PRINT("\n");

	stack1.push("AAA");
	stack2.push("AAA");

	stack1.push("BBB");
	stack2.push("BBB");

	stack1.push("CCC");
	stack2.push("CCK");


	my_stack1.push("AAA");
	my_stack2.push("AAA");

	my_stack1.push("BBB");
	my_stack2.push("BBB");

	my_stack1.push("CCC");
	my_stack2.push("CCK");

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	for (size_t i = 0; i < stack1.size(); ++i)
		PRINT(stack1.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_stack1.size(); ++i)
		PRINT(my_stack1.at(i) << " ");
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < stack2.size(); ++i)
		PRINT(stack2.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_stack2.size(); ++i)
		PRINT(my_stack2.at(i) << " ");
	PRINT("\n\n");


	if (stack1 <= stack2)
		PRINT("stack1 <= stack2");
	else
		PRINT("stack1 > stack2");

	if (my_stack1 <= my_stack2)
		PRINT(std::setw(60) << "my_stack1 <= my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 > my_stack2");

	PRINT("\n\n");
}

void		test_operators_less_or_equal_class()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< Array< int > >			stack1;
	std::stack< Array< int > >			stack2;

	ft::stack< Array< int > >			my_stack1;
	ft::stack< Array< int > >			my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR <= (CLASS)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (CLASS)" << "\e[0m");
	PRINT("\n");

	stack1.push(Array<int>(1));
	stack1.push(Array<int>(2));
	stack1.push(Array<int>(3));
	stack1.push(Array<int>(4));
	stack1.push(Array<int>(5));

	stack2.push(Array<int>(1));
	stack2.push(Array<int>(2));
	stack2.push(Array<int>(3));
	stack2.push(Array<int>(4));
	stack2.push(Array<int>(6));


	my_stack1.push(Array<int>(1));
	my_stack1.push(Array<int>(2));
	my_stack1.push(Array<int>(3));
	my_stack1.push(Array<int>(4));
	my_stack1.push(Array<int>(5));

	my_stack2.push(Array<int>(1));
	my_stack2.push(Array<int>(2));
	my_stack2.push(Array<int>(3));
	my_stack2.push(Array<int>(4));
	my_stack2.push(Array<int>(6));

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	size_t 	size = stack1.size();
	for (size_t i = 0; i < size; ++i)
	{
		Array<int>	arr = stack1.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		stack1.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_stack1.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		my_stack1.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < size; ++i)
	{
		Array<int>	arr = stack2.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		stack2.pop();
		PRINT("\n");
	}

	for (size_t i = 0; i < size; ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_stack2.top();
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		my_stack2.pop();
		PRINT("\n");
	}
	PRINT("\n\n");


	if (stack1 <= stack2)
		PRINT("stack1 <= stack2");
	else
		PRINT("stack1 > stack2");

	if (my_stack1 <= my_stack2)
		PRINT(std::setw(60) << "my_stack1 <= my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 > my_stack2");

	PRINT("\n\n");
}

void		test_operators_less_or_equal_vector()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::stack< std::vector< int > >	stack1;
	std::stack< std::vector< int > >	stack2;

	ft::stack< ft::vector< int > >		my_stack1;
	ft::stack< ft::vector< int > >		my_stack2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR <= (VECTOR)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY STACK (VECTOR)" << "\e[0m");
	PRINT("\n");

	stack1.push(std::vector<int>(3, 100));
	stack2.push(std::vector<int>(3, 100));

	stack1.push(std::vector<int>(3, 200));
	stack2.push(std::vector<int>(3, 200));

	stack1.push(std::vector<int>(3, 300));
	stack2.push(std::vector<int>(3, 300));


	my_stack1.push(ft::vector<int>(3, 100));
	my_stack2.push(ft::vector<int>(3, 100));

	my_stack1.push(ft::vector<int>(3, 200));
	my_stack2.push(ft::vector<int>(3, 200));

	my_stack1.push(ft::vector<int>(3, 300));
	my_stack2.push(ft::vector<int>(3, 300));

	PRINT("\e[1;32m" << "SIZE STACK:\n" << "\e[0m");

	PRINT("stack1.size() = " << stack1.size());
	PRINT(std::setw(56) << "my_stack1.size() = " << my_stack1.size());
	PRINT("\n\n");

	PRINT("stack1");
	PRINT(std::setw(57) << "my_stack1");
	PRINT("\n");

	for (size_t i = 0; i < stack1.size(); ++i)
	{
		std::stack<int>	arr = stack1.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_stack1.size(); ++i)
	{
		ft::stack<int>		arr = my_stack1.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	PRINT("stack2.size() = " << stack2.size());
	PRINT(std::setw(56) << "my_stack2.size() = " << my_stack2.size());
	PRINT("\n");


	PRINT("stack2");
	PRINT(std::setw(57) << "my_stack2");
	PRINT("\n");

	for (size_t i = 0; i < stack2.size(); ++i)
	{
		std::stack<int>	arr = stack2.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_stack2.size(); ++i)
	{
		ft::stack<int>		arr = my_stack2.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (stack1 <= stack2)
		PRINT("stack1 <= stack2");
	else
		PRINT("stack1 > stack2");

	if (my_stack1 <= my_stack2)
		PRINT(std::setw(60) << "my_stack1 <= my_stack2");
	else
		PRINT(std::setw(60) << "my_stack1 > my_stack2");

	PRINT("\n\n");
}
 */

void 		test_operators_equal()
{
	test_operators_equal_int();
	test_operators_equal_string();
	test_operators_equal_class();
	test_operators_equal_vector();
}

void 		test_operators_not_equal()
{
//	test_operators_not_equal_int();
//	test_operators_not_equal_string();
//	test_operators_not_equal_class();
//	test_operators_not_equal_vector();
}

void 		test_operators_more()
{
//	test_operators_more_int();
//	test_operators_more_string();
//	test_operators_more_class();
//	test_operators_more_vector();
}

void 		test_operators_more_or_equal()
{
//	test_operators_more_or_equal_int();
//	test_operators_more_or_equal_string();
//	test_operators_more_or_equal_class();
//	test_operators_more_or_equal_vector();
}

void 		test_operators_less()
{
//	test_operators_less_int();
//	test_operators_less_string();
//	test_operators_less_class();
//	test_operators_less_vector();
}

void 		test_operators_less_or_equal()
{
//	test_operators_less_or_equal_int();
//	test_operators_less_or_equal_string();
//	test_operators_less_or_equal_class();
//	test_operators_less_or_equal_vector();
}

void 		test_operators()
{
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mOPERATOR ==\e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mOPERATOR !=\e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mOPERATOR > \e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mOPERATOR >=\e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mOPERATOR < \e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mOPERATOR <=\e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n\n");

	test_operators_equal();
	test_operators_not_equal();
	test_operators_more();
	test_operators_more_or_equal();
	test_operators_less();
	test_operators_less_or_equal();
}