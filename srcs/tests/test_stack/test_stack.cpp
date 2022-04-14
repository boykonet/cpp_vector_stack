#include <iostream>
#include <string>
#include <iomanip>

#include <stack>
#include "stack.hpp"
#include "vector.hpp"
#include "Array.hpp"

#define PRINT(x) std::cout << x

void 			test_operators();

void 			test_empty()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(31) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	PRINT(std::setw(39) << "\e[1;36m" << "METHOD EMPTY (INT)" << "\e[0m");
	PRINT("\n\n");

	{
		std::stack< int >		stack;
		ft::stack< int >		my_stack;

		if (stack.empty())
			PRINT("stack is empty");
		if (my_stack.empty())
			PRINT(std::setw(58) << "my_stack is empty\n");
	}

	PRINT(std::setw(37) << "\e[1;36m" << "METHOD EMPTY  (STRING)" << "\e[0m");
	PRINT("\n\n");

	{
		std::stack< std::string >		stack;
		ft::stack< std::string >		my_stack;

		if (stack.empty())
			PRINT("stack is empty");
		if (my_stack.empty())
			PRINT(std::setw(58) << "my_stack is empty\n");
	}

	PRINT(std::setw(37) << "\e[1;36m" << "METHOD EMPTY  (CLASS)" << "\e[0m");
	PRINT("\n\n");

	{
		std::stack< Array< int > >		stack;
		ft::stack< Array< int > >		my_stack;

		if (stack.empty())
			PRINT("stack is empty");
		if (my_stack.empty())
			PRINT(std::setw(58) << "my_stack is empty\n");
	}

	PRINT(std::setw(37) << "\e[1;36m" << "METHOD EMPTY (VECTOR)" << "\e[0m");
	PRINT("\n\n");

	{
		std::stack< std::vector< int > >		stack;
		ft::stack< std::vector< int > >			my_stack;

		if (stack.empty())
			PRINT("stack is empty");
		if (my_stack.empty())
			PRINT(std::setw(58) << "my_stack is empty\n");
	}
	PRINT("\n\n");

}

void 			test_size_push_top_pop()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(31) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	PRINT(std::setw(32) << "\e[1;36m" << "METHODS SIZE, PUSH, TOP, POP (INT)" << "\e[0m");
	PRINT("\n\n");

	{
		std::stack< int >		stack;
		ft::stack< int >		my_stack;

		stack.push(1);
		stack.push(2);
		stack.push(3);
		stack.push(4);
		stack.push(5);

		my_stack.push(1);
		my_stack.push(2);
		my_stack.push(3);
		my_stack.push(4);
		my_stack.push(5);

		PRINT("stack");
		PRINT(std::setw(57) << "my_stack");
		PRINT("\n");

		PRINT("stack.size() = " << stack.size());
		PRINT(std::setw(56) << "my_stack.size() = " << my_stack.size());
		PRINT("\n\n");

		size_t 	size = stack.size();
		for (size_t i = 0; i < size; ++i)
		{
			PRINT(stack.top() << " ");
			stack.pop();
		}

		PRINT(std::setw(45));

		for (size_t i = 0; i < size; ++i)
		{
			PRINT(my_stack.top() << " ");
			my_stack.pop();
		}
		PRINT("\n\n");
	}

	PRINT(std::setw(30) << "\e[1;36m" << "METHODS SIZE, PUSH, TOP, POP (STRING)" << "\e[0m");
	PRINT("\n\n");

	{
		std::stack< std::string >		stack;
		ft::stack< std::string >		my_stack;

		stack.push("A");
		stack.push("B");
		stack.push("C");
		stack.push("D");
		stack.push("E");

		my_stack.push("A");
		my_stack.push("B");
		my_stack.push("C");
		my_stack.push("D");
		my_stack.push("E");

		PRINT("stack");
		PRINT(std::setw(57) << "my_stack");
		PRINT("\n");

		PRINT("stack.size() = " << stack.size());
		PRINT(std::setw(56) << "my_stack.size() = " << my_stack.size());
		PRINT("\n\n");

		size_t 	size = stack.size();
		for (size_t i = 0; i < size; ++i)
		{
			PRINT(stack.top() << " ");
			stack.pop();
		}

		PRINT(std::setw(45));

		for (size_t i = 0; i < size; ++i)
		{
			PRINT(my_stack.top() << " ");
			my_stack.pop();
		}
		PRINT("\n\n");
	}

	PRINT(std::setw(30) << "\e[1;36m" << "METHODS SIZE, PUSH, TOP, POP (CLASS)" << "\e[0m");
	PRINT("\n\n");

	{
		std::stack< Array< int > >		stack;
		ft::stack< Array< int > >		my_stack;

		stack.push(Array< int >(1));
		stack.push(Array< int >(2));
		stack.push(Array< int >(3));
		stack.push(Array< int >(4));
		stack.push(Array< int >(5));

		my_stack.push(Array< int >(1));
		my_stack.push(Array< int >(2));
		my_stack.push(Array< int >(3));
		my_stack.push(Array< int >(4));
		my_stack.push(Array< int >(5));

		PRINT("stack");
		PRINT(std::setw(57) << "my_stack");
		PRINT("\n");

		PRINT("stack.size() = " << stack.size());
		PRINT(std::setw(56) << "my_stack.size() = " << my_stack.size());
		PRINT("\n\n");

		size_t 	size = stack.size();
		for (size_t i = 0; i < size; ++i)
		{
			Array<int>		a = stack.top();
			for (size_t c = 0; c < a.size(); ++c)
				PRINT(a[c] << " ");
			stack.pop();
			PRINT("\n");
		}

		for (size_t i = 0; i < size; ++i)
		{
			PRINT(std::setw(55));
			Array<int>		a = my_stack.top();
			for (size_t c = 0; c < a.size(); ++c)
				PRINT(a[c] << " ");
			my_stack.pop();
			PRINT("\n");
		}
		PRINT("\n\n");
	}

	PRINT(std::setw(30) << "\e[1;36m" << "METHODS SIZE, PUSH, TOP, POP (VECTOR)" << "\e[0m");
	PRINT("\n\n");

	{
		std::stack< std::vector< int > >		stack;
		ft::stack< ft::vector< int > >			my_stack;

		stack.push(std::vector< int >(3, 100));
		stack.push(std::vector< int >(3, 200));
		stack.push(std::vector< int >(3, 300));
		stack.push(std::vector< int >(3, 400));
		stack.push(std::vector< int >(3, 500));

		my_stack.push(ft::vector< int >(3, 100));
		my_stack.push(ft::vector< int >(3, 200));
		my_stack.push(ft::vector< int >(3, 300));
		my_stack.push(ft::vector< int >(3, 400));
		my_stack.push(ft::vector< int >(3, 500));

		PRINT("stack");
		PRINT(std::setw(57) << "my_stack");
		PRINT("\n");

		PRINT("stack.size() = " << stack.size());
		PRINT(std::setw(56) << "my_stack.size() = " << my_stack.size());
		PRINT("\n\n");

		size_t 	size = stack.size();
		for (size_t i = 0; i < size; ++i)
		{
			std::vector<int>		a = stack.top();
			for (size_t c = 0; c < a.size(); ++c)
				PRINT(a[c] << " ");
			stack.pop();
			PRINT("\n");
		}

		for (size_t i = 0; i < size; ++i)
		{
			PRINT(std::setw(57));
			ft::vector<int>		a = my_stack.top();
			for (size_t c = 0; c < a.size(); ++c)
				PRINT(a[c] << " ");
			my_stack.pop();
			PRINT("\n");
		}
		PRINT("\n\n");
	}
}

void 			test_top()
{
	PRINT( "\e[1;33m" << "* * * * * STACK_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(31) << "\e[1;33m" << "* * * * * MY_STACK_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	PRINT(std::setw(39) << "\e[1;36m" << "METHOD SIZE (INT)" << "\e[0m");
	PRINT("\n\n");

	{
		std::stack< int >		stack;
		ft::stack< int >		my_stack;

		if (stack.empty())
			PRINT("stack is empty");
		if (my_stack.empty())
			PRINT(std::setw(58) << "my_stack is empty\n");
	}

	PRINT(std::setw(37) << "\e[1;36m" << "METHOD SIZE  (STRING)" << "\e[0m");
	PRINT("\n\n");

	{
		std::stack< std::string >		stack;
		ft::stack< std::string >		my_stack;

		if (stack.empty())
			PRINT("stack is empty");
		if (my_stack.empty())
			PRINT(std::setw(58) << "my_stack is empty\n");
	}

	PRINT(std::setw(37) << "\e[1;36m" << "METHOD SIZE  (CLASS)" << "\e[0m");
	PRINT("\n\n");

	{
		std::stack< Array< int > >		stack;
		ft::stack< Array< int > >		my_stack;

		if (stack.empty())
			PRINT("stack is empty");
		if (my_stack.empty())
			PRINT(std::setw(58) << "my_stack is empty\n");
	}

	PRINT(std::setw(37) << "\e[1;36m" << "METHOD SIZE (VECTOR)" << "\e[0m");
	PRINT("\n\n");

	{
		std::stack< std::vector< int > >		stack;
		ft::stack< std::vector< int > >			my_stack;

		if (stack.empty())
			PRINT("stack is empty");
		if (my_stack.empty())
			PRINT(std::setw(58) << "my_stack is empty\n");
	}
}

void 			test_stack()
{
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m*                                       *\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m               \e[1;35mS T A C K\e[0m               \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m*                                       *\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n\n");

	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mSTACK EMPTY\e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mSTACK  SIZE\e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m               \e[1;35mSTACK TOP\e[0m               \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mSTACK  PUSH\e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m               \e[1;35mSTACK POP\e[0m               \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n\n");

	test_empty();
	test_size_push_top_pop();
	test_operators();
}

