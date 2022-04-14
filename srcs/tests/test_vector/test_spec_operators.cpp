#include <iostream>
#include <string>
#include <iomanip>

#include <vector>
#include "vector.hpp"
#include "Array.hpp"

#define PRINT(x) std::cout << x

void		test_spec_operators_equal_int()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< int >					vector1;
	std::vector< int >					vector2;

	ft::vector< int >					my_vector1;
	ft::vector< int >					my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR == (INT)" << "\e[0m");
	PRINT("\n\n");
	PRINT("\e[1;32m" << "EMPTY VECTOR (INT)" << "\e[0m");
	PRINT("\n");

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector1.size(); ++i)
		PRINT(my_vector1.at(i) << " ");
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector2.size(); ++i)
		PRINT(my_vector2.at(i) << " ");
	PRINT("\n\n");


	if (vector1 == vector2)
		PRINT("vector1 == vector2");
	else if (vector1 != vector2)
		PRINT("vector1 != vector2");

	if (my_vector1 == my_vector2)
		PRINT(std::setw(60) << "my_vector1 == my_vector2");
	else if (my_vector1 != my_vector2)
		PRINT(std::setw(60) << "my_vector1 != my_vector2");

	PRINT("\n\n");

	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (INT)" << "\e[0m");
	PRINT("\n");

	for (int i = 0; i < 5; ++i)
	{
		vector1.push_back(i + 1);
		vector2.push_back(i + 1);
		my_vector1.push_back(i + 1);
		my_vector2.push_back(i + 1);
	}

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector1.size(); ++i)
		PRINT(my_vector1.at(i) << " ");
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector2.size(); ++i)
		PRINT(my_vector2.at(i) << " ");
	PRINT("\n\n");


	if (vector1 == vector2)
		PRINT("vector1 == vector2");
	else if (vector1 != vector2)
		PRINT("vector1 != vector2");

	if (my_vector1 == my_vector2)
		PRINT(std::setw(60) << "my_vector1 == my_vector2");
	else if (my_vector1 != my_vector2)
		PRINT(std::setw(60) << "my_vector1 != my_vector2");

	PRINT("\n\n");

}

void		test_spec_operators_equal_string()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< std::string >			vector1;
	std::vector< std::string >			vector2;

	ft::vector< std::string >			my_vector1;
	ft::vector< std::string >			my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR == (STRING)" << "\e[0m");
	PRINT("\n\n");
	PRINT("\e[1;32m" << "EMPTY VECTOR (INT)" << "\e[0m");
	PRINT("\n");

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector1.size(); ++i)
		PRINT(my_vector1.at(i) << " ");
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector2.size(); ++i)
		PRINT(my_vector2.at(i) << " ");
	PRINT("\n\n");


	if (vector1 == vector2)
		PRINT("vector1 == vector2");
	else if (vector1 != vector2)
		PRINT("vector1 != vector2");

	if (my_vector1 == my_vector2)
		PRINT(std::setw(60) << "my_vector1 == my_vector2");
	else if (my_vector1 != my_vector2)
		PRINT(std::setw(60) << "my_vector1 != my_vector2");

	PRINT("\n\n");

	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (STRING)" << "\e[0m");
	PRINT("\n");

	vector1.push_back("AAA");
	vector2.push_back("AAA");
	vector1.push_back("BBB");
	vector2.push_back("BBB");
	vector1.push_back("CCC");
	vector2.push_back("CCC");


	my_vector1.push_back("AAA");
	my_vector2.push_back("AAA");
	my_vector1.push_back("BBB");
	my_vector2.push_back("BBB");
	my_vector1.push_back("CCC");
	my_vector2.push_back("CCC");

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector1.size(); ++i)
		PRINT(my_vector1.at(i) << " ");
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector2.size(); ++i)
		PRINT(my_vector2.at(i) << " ");
	PRINT("\n\n");


	if (vector1 == vector2)
		PRINT("vector1 == vector2");
	else if (vector1 != vector2)
		PRINT("vector1 != vector2");

	if (my_vector1 == my_vector2)
		PRINT(std::setw(60) << "my_vector1 == my_vector2");
	else if (my_vector1 != my_vector2)
		PRINT(std::setw(60) << "my_vector1 != my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_equal_class()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< Array< int > >			vector1;
	std::vector< Array< int > >			vector2;

	ft::vector< Array< int > >			my_vector1;
	ft::vector< Array< int > >			my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR == (CLASS)" << "\e[0m");
	PRINT("\n\n");
	PRINT("\e[1;32m" << "EMPTY VECTOR (CLASS)" << "\e[0m");
	PRINT("\n");

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
	{
		Array<int>	arr = vector1.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_vector1.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
	{
		Array<int>	arr = vector2.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_vector2.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (vector1 == vector2)
		PRINT("vector1 == vector2");
	else if (vector1 != vector2)
		PRINT("vector1 != vector2");

	if (my_vector1 == my_vector2)
		PRINT(std::setw(60) << "my_vector1 == my_vector2");
	else if (my_vector1 != my_vector2)
		PRINT(std::setw(60) << "my_vector1 != my_vector2");

	PRINT("\n\n");

	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (CLASS)" << "\e[0m");
	PRINT("\n");

	vector1.push_back(Array<int>(1));
	vector1.push_back(Array<int>(2));
	vector1.push_back(Array<int>(3));
	vector1.push_back(Array<int>(4));
	vector1.push_back(Array<int>(5));

	vector2.push_back(Array<int>(1));
	vector2.push_back(Array<int>(2));
	vector2.push_back(Array<int>(3));
	vector2.push_back(Array<int>(4));
	vector2.push_back(Array<int>(5));


	my_vector1.push_back(Array<int>(1));
	my_vector1.push_back(Array<int>(2));
	my_vector1.push_back(Array<int>(3));
	my_vector1.push_back(Array<int>(4));
	my_vector1.push_back(Array<int>(5));

	my_vector2.push_back(Array<int>(1));
	my_vector2.push_back(Array<int>(2));
	my_vector2.push_back(Array<int>(3));
	my_vector2.push_back(Array<int>(4));
	my_vector2.push_back(Array<int>(5));

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
	{
		Array<int>	arr = vector1.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_vector1.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
	{
		Array<int>	arr = vector2.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_vector2.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (vector1 == vector2)
		PRINT("vector1 == vector2");
	else if (vector1 != vector2)
		PRINT("vector1 != vector2");

	if (my_vector1 == my_vector2)
		PRINT(std::setw(60) << "my_vector1 == my_vector2");
	else if (my_vector1 != my_vector2)
		PRINT(std::setw(60) << "my_vector1 != my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_equal_vector()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< std::vector< int > >	vector1;
	std::vector< std::vector< int > >	vector2;

	ft::vector< ft::vector< int > >		my_vector1;
	ft::vector< ft::vector< int > >		my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR == (VECTOR)" << "\e[0m");
	PRINT("\n\n");
	PRINT("\e[1;32m" << "EMPTY VECTOR (VECTOR)" << "\e[0m");
	PRINT("\n");

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
	{
		std::vector<int>	arr = vector1.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		ft::vector<int>		arr = my_vector1.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
	{
		std::vector<int>	arr = vector2.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		ft::vector<int>		arr = my_vector2.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (vector1 == vector2)
		PRINT("vector1 == vector2");
	else if (vector1 != vector2)
		PRINT("vector1 != vector2");

	if (my_vector1 == my_vector2)
		PRINT(std::setw(60) << "my_vector1 == my_vector2");
	else if (my_vector1 != my_vector2)
		PRINT(std::setw(60) << "my_vector1 != my_vector2");

	PRINT("\n\n");

	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (VECTOR)" << "\e[0m");
	PRINT("\n");

	vector1.push_back(std::vector<int>(3, 100));
	vector2.push_back(std::vector<int>(3, 100));

	vector1.push_back(std::vector<int>(3, 200));
	vector2.push_back(std::vector<int>(3, 200));

	vector1.push_back(std::vector<int>(3, 300));
	vector2.push_back(std::vector<int>(3, 300));


	my_vector1.push_back(ft::vector<int>(3, 100));
	my_vector2.push_back(ft::vector<int>(3, 100));

	my_vector1.push_back(ft::vector<int>(3, 200));
	my_vector2.push_back(ft::vector<int>(3, 200));

	my_vector1.push_back(ft::vector<int>(3, 300));
	my_vector2.push_back(ft::vector<int>(3, 300));

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
	{
		std::vector<int>	arr = vector1.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		ft::vector<int>		arr = my_vector1.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
	{
		std::vector<int>	arr = vector2.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		ft::vector<int>		arr = my_vector2.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (vector1 == vector2)
		PRINT("vector1 == vector2");
	else if (vector1 != vector2)
		PRINT("vector1 != vector2");

	if (my_vector1 == my_vector2)
		PRINT(std::setw(60) << "my_vector1 == my_vector2");
	else if (my_vector1 != my_vector2)
		PRINT(std::setw(60) << "my_vector1 != my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_not_equal_int()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< int >					vector1;
	std::vector< int >					vector2;

	ft::vector< int >					my_vector1;
	ft::vector< int >					my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR != (INT)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (INT)" << "\e[0m");
	PRINT("\n");

	for (int i = 0; i < 5; ++i)
	{
		vector1.push_back(i + 1);
		vector2.push_back(i + 1);
		my_vector1.push_back(i + 1);
		my_vector2.push_back(i + 1);
	}

	vector1.push_back(1);
	vector2.push_back(2);
	my_vector1.push_back(1);
	my_vector2.push_back(2);


	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(43));

	for (size_t i = 0; i < my_vector1.size(); ++i)
		PRINT(my_vector1.at(i) << " ");
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(43));

	for (size_t i = 0; i < my_vector2.size(); ++i)
		PRINT(my_vector2.at(i) << " ");
	PRINT("\n\n");


	if (vector1 == vector2)
		PRINT("vector1 == vector2");
	else if (vector1 != vector2)
		PRINT("vector1 != vector2");

	if (my_vector1 == my_vector2)
		PRINT(std::setw(60) << "my_vector1 == my_vector2");
	else if (my_vector1 != my_vector2)
		PRINT(std::setw(60) << "my_vector1 != my_vector2");

	PRINT("\n\n");

}

void		test_spec_operators_not_equal_string()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< std::string >			vector1;
	std::vector< std::string >			vector2;

	ft::vector< std::string >			my_vector1;
	ft::vector< std::string >			my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR != (STRING)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (STRING)" << "\e[0m");
	PRINT("\n");

	vector1.push_back("AAA");
	vector2.push_back("AAA");
	vector1.push_back("BBB");
	vector2.push_back("BBB");
	vector1.push_back("CCC");
	vector2.push_back("CCD");


	my_vector1.push_back("AAA");
	my_vector2.push_back("AAA");
	my_vector1.push_back("BBB");
	my_vector2.push_back("BBB");
	my_vector1.push_back("CCC");
	my_vector2.push_back("CCK");

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector1.size(); ++i)
		PRINT(my_vector1.at(i) << " ");
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector2.size(); ++i)
		PRINT(my_vector2.at(i) << " ");
	PRINT("\n\n");


	if (vector1 == vector2)
		PRINT("vector1 == vector2");
	else if (vector1 != vector2)
		PRINT("vector1 != vector2");

	if (my_vector1 == my_vector2)
		PRINT(std::setw(60) << "my_vector1 == my_vector2");
	else if (my_vector1 != my_vector2)
		PRINT(std::setw(60) << "my_vector1 != my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_not_equal_class()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< Array< int > >			vector1;
	std::vector< Array< int > >			vector2;

	ft::vector< Array< int > >			my_vector1;
	ft::vector< Array< int > >			my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR != (CLASS)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (CLASS)" << "\e[0m");
	PRINT("\n");

	vector1.push_back(Array<int>(1));
	vector1.push_back(Array<int>(2));
	vector1.push_back(Array<int>(3));
	vector1.push_back(Array<int>(4));
	vector1.push_back(Array<int>(5));

	vector2.push_back(Array<int>(1));
	vector2.push_back(Array<int>(2));
	vector2.push_back(Array<int>(3));
	vector2.push_back(Array<int>(4));
	vector2.push_back(Array<int>(6));


	my_vector1.push_back(Array<int>(1));
	my_vector1.push_back(Array<int>(2));
	my_vector1.push_back(Array<int>(3));
	my_vector1.push_back(Array<int>(4));
	my_vector1.push_back(Array<int>(5));

	my_vector2.push_back(Array<int>(1));
	my_vector2.push_back(Array<int>(2));
	my_vector2.push_back(Array<int>(3));
	my_vector2.push_back(Array<int>(4));
	my_vector2.push_back(Array<int>(6));

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
	{
		Array<int>	arr = vector1.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_vector1.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
	{
		Array<int>	arr = vector2.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_vector2.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (vector1 == vector2)
		PRINT("vector1 == vector2");
	else if (vector1 != vector2)
		PRINT("vector1 != vector2");

	if (my_vector1 == my_vector2)
		PRINT(std::setw(60) << "my_vector1 == my_vector2");
	else if (my_vector1 != my_vector2)
		PRINT(std::setw(60) << "my_vector1 != my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_not_equal_vector()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< std::vector< int > >	vector1;
	std::vector< std::vector< int > >	vector2;

	ft::vector< ft::vector< int > >		my_vector1;
	ft::vector< ft::vector< int > >		my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR != (VECTOR)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (VECTOR)" << "\e[0m");
	PRINT("\n");

	vector1.push_back(std::vector<int>(3, 100));
	vector2.push_back(std::vector<int>(3, 100));

	vector1.push_back(std::vector<int>(3, 200));
	vector2.push_back(std::vector<int>(3, 200));

	vector1.push_back(std::vector<int>(3, 300));
	vector2.push_back(std::vector<int>(3, 400));


	my_vector1.push_back(ft::vector<int>(3, 100));
	my_vector2.push_back(ft::vector<int>(3, 100));

	my_vector1.push_back(ft::vector<int>(3, 200));
	my_vector2.push_back(ft::vector<int>(3, 200));

	my_vector1.push_back(ft::vector<int>(3, 300));
	my_vector2.push_back(ft::vector<int>(3, 400));

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
	{
		std::vector<int>	arr = vector1.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		ft::vector<int>		arr = my_vector1.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
	{
		std::vector<int>	arr = vector2.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		ft::vector<int>		arr = my_vector2.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (vector1 == vector2)
		PRINT("vector1 == vector2");
	else if (vector1 != vector2)
		PRINT("vector1 != vector2");

	if (my_vector1 == my_vector2)
		PRINT(std::setw(60) << "my_vector1 == my_vector2");
	else if (my_vector1 != my_vector2)
		PRINT(std::setw(60) << "my_vector1 != my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_more_int()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< int >					vector1;
	std::vector< int >					vector2;

	ft::vector< int >					my_vector1;
	ft::vector< int >					my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR > (INT)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (INT)" << "\e[0m");
	PRINT("\n");

	for (int i = 0; i < 5; ++i)
	{
		vector1.push_back(i + 1);
		vector2.push_back(i + 1);
		my_vector1.push_back(i + 1);
		my_vector2.push_back(i + 1);
	}

	vector1.push_back(2);
	vector2.push_back(1);
	my_vector1.push_back(2);
	my_vector2.push_back(1);


	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(43));

	for (size_t i = 0; i < my_vector1.size(); ++i)
		PRINT(my_vector1.at(i) << " ");
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(43));

	for (size_t i = 0; i < my_vector2.size(); ++i)
		PRINT(my_vector2.at(i) << " ");
	PRINT("\n\n");


	if (vector1 > vector2)
		PRINT("vector1 > vector2");
	else
		PRINT("vector1 <= vector2");

	if (my_vector1 > my_vector2)
		PRINT(std::setw(60) << "my_vector1 > my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 <= my_vector2");

	PRINT("\n\n");

}

void		test_spec_operators_more_string()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< std::string >			vector1;
	std::vector< std::string >			vector2;

	ft::vector< std::string >			my_vector1;
	ft::vector< std::string >			my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR > (STRING)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (STRING)" << "\e[0m");
	PRINT("\n");

	vector1.push_back("AAA");
	vector2.push_back("AAA");

	vector1.push_back("BBB");
	vector2.push_back("BBB");

	vector1.push_back("CCK");
	vector2.push_back("CCC");


	my_vector1.push_back("AAA");
	my_vector2.push_back("AAA");

	my_vector1.push_back("BBB");
	my_vector2.push_back("BBB");

	my_vector1.push_back("CCK");
	my_vector2.push_back("CCC");

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector1.size(); ++i)
		PRINT(my_vector1.at(i) << " ");
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector2.size(); ++i)
		PRINT(my_vector2.at(i) << " ");
	PRINT("\n\n");


	if (vector1 > vector2)
		PRINT("vector1 > vector2");
	else
		PRINT("vector1 <= vector2");

	if (my_vector1 > my_vector2)
		PRINT(std::setw(60) << "my_vector1 > my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 <= my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_more_class()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< Array< int > >			vector1;
	std::vector< Array< int > >			vector2;

	ft::vector< Array< int > >			my_vector1;
	ft::vector< Array< int > >			my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR > (CLASS)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (CLASS)" << "\e[0m");
	PRINT("\n");

	vector1.push_back(Array<int>(1));
	vector1.push_back(Array<int>(2));
	vector1.push_back(Array<int>(3));
	vector1.push_back(Array<int>(4));
	vector1.push_back(Array<int>(6));

	vector2.push_back(Array<int>(1));
	vector2.push_back(Array<int>(2));
	vector2.push_back(Array<int>(3));
	vector2.push_back(Array<int>(4));
	vector2.push_back(Array<int>(5));


	my_vector1.push_back(Array<int>(1));
	my_vector1.push_back(Array<int>(2));
	my_vector1.push_back(Array<int>(3));
	my_vector1.push_back(Array<int>(4));
	my_vector1.push_back(Array<int>(6));

	my_vector2.push_back(Array<int>(1));
	my_vector2.push_back(Array<int>(2));
	my_vector2.push_back(Array<int>(3));
	my_vector2.push_back(Array<int>(4));
	my_vector2.push_back(Array<int>(5));

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
	{
		Array<int>	arr = vector1.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_vector1.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
	{
		Array<int>	arr = vector2.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_vector2.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (vector1 > vector2)
		PRINT("vector1 > vector2");
	else
		PRINT("vector1 <= vector2");

	if (my_vector1 > my_vector2)
		PRINT(std::setw(60) << "my_vector1 > my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 <= my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_more_vector()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< std::vector< int > >	vector1;
	std::vector< std::vector< int > >	vector2;

	ft::vector< ft::vector< int > >		my_vector1;
	ft::vector< ft::vector< int > >		my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR > (VECTOR)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (VECTOR)" << "\e[0m");
	PRINT("\n");

	vector1.push_back(std::vector<int>(3, 100));
	vector2.push_back(std::vector<int>(3, 100));

	vector1.push_back(std::vector<int>(3, 200));
	vector2.push_back(std::vector<int>(3, 200));

	vector1.push_back(std::vector<int>(3, 400));
	vector2.push_back(std::vector<int>(3, 300));


	my_vector1.push_back(ft::vector<int>(3, 100));
	my_vector2.push_back(ft::vector<int>(3, 100));

	my_vector1.push_back(ft::vector<int>(3, 200));
	my_vector2.push_back(ft::vector<int>(3, 200));

	my_vector1.push_back(ft::vector<int>(3, 400));
	my_vector2.push_back(ft::vector<int>(3, 300));

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
	{
		std::vector<int>	arr = vector1.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		ft::vector<int>		arr = my_vector1.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
	{
		std::vector<int>	arr = vector2.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		ft::vector<int>		arr = my_vector2.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (vector1 > vector2)
		PRINT("vector1 > vector2");
	else
		PRINT("vector1 <= vector2");

	if (my_vector1 > my_vector2)
		PRINT(std::setw(60) << "my_vector1 > my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 <= my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_more_or_equal_int()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< int >					vector1;
	std::vector< int >					vector2;

	ft::vector< int >					my_vector1;
	ft::vector< int >					my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR >= (INT)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (INT)" << "\e[0m");
	PRINT("\n");

	for (int i = 0; i < 5; ++i)
	{
		vector1.push_back(i + 1);
		vector2.push_back(i + 1);
		my_vector1.push_back(i + 1);
		my_vector2.push_back(i + 1);
	}

	vector1.push_back(2);
	vector2.push_back(1);
	my_vector1.push_back(2);
	my_vector2.push_back(1);


	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(43));

	for (size_t i = 0; i < my_vector1.size(); ++i)
		PRINT(my_vector1.at(i) << " ");
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(43));

	for (size_t i = 0; i < my_vector2.size(); ++i)
		PRINT(my_vector2.at(i) << " ");
	PRINT("\n\n");


	if (vector1 >= vector2)
		PRINT("vector1 >= vector2");
	else
		PRINT("vector1 < vector2");

	if (my_vector1 >= my_vector2)
		PRINT(std::setw(60) << "my_vector1 >= my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 < my_vector2");

	PRINT("\n\n");

}

void		test_spec_operators_more_or_equal_string()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< std::string >			vector1;
	std::vector< std::string >			vector2;

	ft::vector< std::string >			my_vector1;
	ft::vector< std::string >			my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR >= (STRING)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (STRING)" << "\e[0m");
	PRINT("\n");

	vector1.push_back("AAA");
	vector2.push_back("AAA");

	vector1.push_back("BBB");
	vector2.push_back("BBB");

	vector1.push_back("CCK");
	vector2.push_back("CCC");


	my_vector1.push_back("AAA");
	my_vector2.push_back("AAA");

	my_vector1.push_back("BBB");
	my_vector2.push_back("BBB");

	my_vector1.push_back("CCK");
	my_vector2.push_back("CCC");

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector1.size(); ++i)
		PRINT(my_vector1.at(i) << " ");
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector2.size(); ++i)
		PRINT(my_vector2.at(i) << " ");
	PRINT("\n\n");


	if (vector1 >= vector2)
		PRINT("vector1 >= vector2");
	else
		PRINT("vector1 < vector2");

	if (my_vector1 >= my_vector2)
		PRINT(std::setw(60) << "my_vector1 >= my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 < my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_more_or_equal_class()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< Array< int > >			vector1;
	std::vector< Array< int > >			vector2;

	ft::vector< Array< int > >			my_vector1;
	ft::vector< Array< int > >			my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR >= (CLASS)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (CLASS)" << "\e[0m");
	PRINT("\n");

	vector1.push_back(Array<int>(1));
	vector1.push_back(Array<int>(2));
	vector1.push_back(Array<int>(3));
	vector1.push_back(Array<int>(4));
	vector1.push_back(Array<int>(6));

	vector2.push_back(Array<int>(1));
	vector2.push_back(Array<int>(2));
	vector2.push_back(Array<int>(3));
	vector2.push_back(Array<int>(4));
	vector2.push_back(Array<int>(5));


	my_vector1.push_back(Array<int>(1));
	my_vector1.push_back(Array<int>(2));
	my_vector1.push_back(Array<int>(3));
	my_vector1.push_back(Array<int>(4));
	my_vector1.push_back(Array<int>(6));

	my_vector2.push_back(Array<int>(1));
	my_vector2.push_back(Array<int>(2));
	my_vector2.push_back(Array<int>(3));
	my_vector2.push_back(Array<int>(4));
	my_vector2.push_back(Array<int>(5));

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
	{
		Array<int>	arr = vector1.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_vector1.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
	{
		Array<int>	arr = vector2.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_vector2.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (vector1 >= vector2)
		PRINT("vector1 >= vector2");
	else
		PRINT("vector1 < vector2");

	if (my_vector1 >= my_vector2)
		PRINT(std::setw(60) << "my_vector1 >= my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 < my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_more_or_equal_vector()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< std::vector< int > >	vector1;
	std::vector< std::vector< int > >	vector2;

	ft::vector< ft::vector< int > >		my_vector1;
	ft::vector< ft::vector< int > >		my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR >= (VECTOR)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (VECTOR)" << "\e[0m");
	PRINT("\n");

	vector1.push_back(std::vector<int>(3, 100));
	vector2.push_back(std::vector<int>(3, 100));

	vector1.push_back(std::vector<int>(3, 200));
	vector2.push_back(std::vector<int>(3, 200));

	vector1.push_back(std::vector<int>(3, 300));
	vector2.push_back(std::vector<int>(3, 300));


	my_vector1.push_back(ft::vector<int>(3, 100));
	my_vector2.push_back(ft::vector<int>(3, 100));

	my_vector1.push_back(ft::vector<int>(3, 200));
	my_vector2.push_back(ft::vector<int>(3, 200));

	my_vector1.push_back(ft::vector<int>(3, 300));
	my_vector2.push_back(ft::vector<int>(3, 300));

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
	{
		std::vector<int>	arr = vector1.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		ft::vector<int>		arr = my_vector1.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
	{
		std::vector<int>	arr = vector2.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		ft::vector<int>		arr = my_vector2.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (vector1 >= vector2)
		PRINT("vector1 >= vector2");
	else
		PRINT("vector1 < vector2");

	if (my_vector1 >= my_vector2)
		PRINT(std::setw(60) << "my_vector1 >= my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 < my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_less_int()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< int >					vector1;
	std::vector< int >					vector2;

	ft::vector< int >					my_vector1;
	ft::vector< int >					my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR < (INT)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (INT)" << "\e[0m");
	PRINT("\n");

	for (int i = 0; i < 5; ++i)
	{
		vector1.push_back(i + 1);
		vector2.push_back(i + 1);
		my_vector1.push_back(i + 1);
		my_vector2.push_back(i + 1);
	}

	vector1.push_back(1);
	vector2.push_back(2);
	my_vector1.push_back(1);
	my_vector2.push_back(2);


	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(43));

	for (size_t i = 0; i < my_vector1.size(); ++i)
		PRINT(my_vector1.at(i) << " ");
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(43));

	for (size_t i = 0; i < my_vector2.size(); ++i)
		PRINT(my_vector2.at(i) << " ");
	PRINT("\n\n");


	if (vector1 < vector2)
		PRINT("vector1 < vector2");
	else
		PRINT("vector1 >= vector2");

	if (my_vector1 < my_vector2)
		PRINT(std::setw(60) << "my_vector1 < my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 >= my_vector2");

	PRINT("\n\n");

}

void		test_spec_operators_less_string()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< std::string >			vector1;
	std::vector< std::string >			vector2;

	ft::vector< std::string >			my_vector1;
	ft::vector< std::string >			my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR < (STRING)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (STRING)" << "\e[0m");
	PRINT("\n");

	vector1.push_back("AAA");
	vector2.push_back("AAA");

	vector1.push_back("BBB");
	vector2.push_back("BBB");

	vector1.push_back("CCC");
	vector2.push_back("CCK");


	my_vector1.push_back("AAA");
	my_vector2.push_back("AAA");

	my_vector1.push_back("BBB");
	my_vector2.push_back("BBB");

	my_vector1.push_back("CCC");
	my_vector2.push_back("CCK");

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector1.size(); ++i)
		PRINT(my_vector1.at(i) << " ");
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector2.size(); ++i)
		PRINT(my_vector2.at(i) << " ");
	PRINT("\n\n");


	if (vector1 < vector2)
		PRINT("vector1 < vector2");
	else
		PRINT("vector1 >= vector2");

	if (my_vector1 < my_vector2)
		PRINT(std::setw(60) << "my_vector1 < my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 >= my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_less_class()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< Array< int > >			vector1;
	std::vector< Array< int > >			vector2;

	ft::vector< Array< int > >			my_vector1;
	ft::vector< Array< int > >			my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR < (CLASS)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (CLASS)" << "\e[0m");
	PRINT("\n");

	vector1.push_back(Array<int>(1));
	vector1.push_back(Array<int>(2));
	vector1.push_back(Array<int>(3));
	vector1.push_back(Array<int>(4));
	vector1.push_back(Array<int>(5));

	vector2.push_back(Array<int>(1));
	vector2.push_back(Array<int>(2));
	vector2.push_back(Array<int>(3));
	vector2.push_back(Array<int>(4));
	vector2.push_back(Array<int>(6));


	my_vector1.push_back(Array<int>(1));
	my_vector1.push_back(Array<int>(2));
	my_vector1.push_back(Array<int>(3));
	my_vector1.push_back(Array<int>(4));
	my_vector1.push_back(Array<int>(5));

	my_vector2.push_back(Array<int>(1));
	my_vector2.push_back(Array<int>(2));
	my_vector2.push_back(Array<int>(3));
	my_vector2.push_back(Array<int>(4));
	my_vector2.push_back(Array<int>(6));

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
	{
		Array<int>	arr = vector1.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_vector1.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
	{
		Array<int>	arr = vector2.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_vector2.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (vector1 < vector2)
		PRINT("vector1 < vector2");
	else
		PRINT("vector1 >= vector2");

	if (my_vector1 < my_vector2)
		PRINT(std::setw(60) << "my_vector1 < my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 >= my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_less_vector()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< std::vector< int > >	vector1;
	std::vector< std::vector< int > >	vector2;

	ft::vector< ft::vector< int > >		my_vector1;
	ft::vector< ft::vector< int > >		my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR < (VECTOR)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (VECTOR)" << "\e[0m");
	PRINT("\n");

	vector1.push_back(std::vector<int>(3, 100));
	vector2.push_back(std::vector<int>(3, 100));

	vector1.push_back(std::vector<int>(3, 200));
	vector2.push_back(std::vector<int>(3, 200));

	vector1.push_back(std::vector<int>(3, 300));
	vector2.push_back(std::vector<int>(3, 400));


	my_vector1.push_back(ft::vector<int>(3, 100));
	my_vector2.push_back(ft::vector<int>(3, 100));

	my_vector1.push_back(ft::vector<int>(3, 200));
	my_vector2.push_back(ft::vector<int>(3, 200));

	my_vector1.push_back(ft::vector<int>(3, 300));
	my_vector2.push_back(ft::vector<int>(3, 400));

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
	{
		std::vector<int>	arr = vector1.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		ft::vector<int>		arr = my_vector1.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
	{
		std::vector<int>	arr = vector2.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		ft::vector<int>		arr = my_vector2.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (vector1 < vector2)
		PRINT("vector1 < vector2");
	else
		PRINT("vector1 >= vector2");

	if (my_vector1 < my_vector2)
		PRINT(std::setw(60) << "my_vector1 < my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 >= my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_less_or_equal_int()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< int >					vector1;
	std::vector< int >					vector2;

	ft::vector< int >					my_vector1;
	ft::vector< int >					my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR <= (INT)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (INT)" << "\e[0m");
	PRINT("\n");

	for (int i = 0; i < 5; ++i)
	{
		vector1.push_back(i + 1);
		vector2.push_back(i + 1);
		my_vector1.push_back(i + 1);
		my_vector2.push_back(i + 1);
	}

	vector1.push_back(1);
	vector2.push_back(2);
	my_vector1.push_back(1);
	my_vector2.push_back(2);


	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(43));

	for (size_t i = 0; i < my_vector1.size(); ++i)
		PRINT(my_vector1.at(i) << " ");
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(43));

	for (size_t i = 0; i < my_vector2.size(); ++i)
		PRINT(my_vector2.at(i) << " ");
	PRINT("\n\n");


	if (vector1 <= vector2)
		PRINT("vector1 <= vector2");
	else
		PRINT("vector1 > vector2");

	if (my_vector1 <= my_vector2)
		PRINT(std::setw(60) << "my_vector1 <= my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 > my_vector2");

	PRINT("\n\n");

}

void		test_spec_operators_less_or_equal_string()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< std::string >			vector1;
	std::vector< std::string >			vector2;

	ft::vector< std::string >			my_vector1;
	ft::vector< std::string >			my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR <= (STRING)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (STRING)" << "\e[0m");
	PRINT("\n");

	vector1.push_back("AAA");
	vector2.push_back("AAA");

	vector1.push_back("BBB");
	vector2.push_back("BBB");

	vector1.push_back("CCC");
	vector2.push_back("CCK");


	my_vector1.push_back("AAA");
	my_vector2.push_back("AAA");

	my_vector1.push_back("BBB");
	my_vector2.push_back("BBB");

	my_vector1.push_back("CCC");
	my_vector2.push_back("CCK");

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector1.size(); ++i)
		PRINT(my_vector1.at(i) << " ");
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector2.size(); ++i)
		PRINT(my_vector2.at(i) << " ");
	PRINT("\n\n");


	if (vector1 <= vector2)
		PRINT("vector1 <= vector2");
	else
		PRINT("vector1 > vector2");

	if (my_vector1 <= my_vector2)
		PRINT(std::setw(60) << "my_vector1 <= my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 > my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_less_or_equal_class()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< Array< int > >			vector1;
	std::vector< Array< int > >			vector2;

	ft::vector< Array< int > >			my_vector1;
	ft::vector< Array< int > >			my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR <= (CLASS)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (CLASS)" << "\e[0m");
	PRINT("\n");

	vector1.push_back(Array<int>(1));
	vector1.push_back(Array<int>(2));
	vector1.push_back(Array<int>(3));
	vector1.push_back(Array<int>(4));
	vector1.push_back(Array<int>(5));

	vector2.push_back(Array<int>(1));
	vector2.push_back(Array<int>(2));
	vector2.push_back(Array<int>(3));
	vector2.push_back(Array<int>(4));
	vector2.push_back(Array<int>(6));


	my_vector1.push_back(Array<int>(1));
	my_vector1.push_back(Array<int>(2));
	my_vector1.push_back(Array<int>(3));
	my_vector1.push_back(Array<int>(4));
	my_vector1.push_back(Array<int>(5));

	my_vector2.push_back(Array<int>(1));
	my_vector2.push_back(Array<int>(2));
	my_vector2.push_back(Array<int>(3));
	my_vector2.push_back(Array<int>(4));
	my_vector2.push_back(Array<int>(6));

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
	{
		Array<int>	arr = vector1.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_vector1.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
	{
		Array<int>	arr = vector2.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		PRINT(std::setw(55));
		Array<int>	arr = my_vector2.at(i);
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr[j] << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (vector1 <= vector2)
		PRINT("vector1 <= vector2");
	else
		PRINT("vector1 > vector2");

	if (my_vector1 <= my_vector2)
		PRINT(std::setw(60) << "my_vector1 <= my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 > my_vector2");

	PRINT("\n\n");
}

void		test_spec_operators_less_or_equal_vector()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	std::vector< std::vector< int > >	vector1;
	std::vector< std::vector< int > >	vector2;

	ft::vector< ft::vector< int > >		my_vector1;
	ft::vector< ft::vector< int > >		my_vector2;

	PRINT(std::setw(41) << "\e[1;36m" << "OPERATOR <= (VECTOR)" << "\e[0m");
	PRINT("\n\n");


	PRINT("\e[1;32m" << "NOT EMPTY VECTOR (VECTOR)" << "\e[0m");
	PRINT("\n");

	vector1.push_back(std::vector<int>(3, 100));
	vector2.push_back(std::vector<int>(3, 100));

	vector1.push_back(std::vector<int>(3, 200));
	vector2.push_back(std::vector<int>(3, 200));

	vector1.push_back(std::vector<int>(3, 300));
	vector2.push_back(std::vector<int>(3, 300));


	my_vector1.push_back(ft::vector<int>(3, 100));
	my_vector2.push_back(ft::vector<int>(3, 100));

	my_vector1.push_back(ft::vector<int>(3, 200));
	my_vector2.push_back(ft::vector<int>(3, 200));

	my_vector1.push_back(ft::vector<int>(3, 300));
	my_vector2.push_back(ft::vector<int>(3, 300));

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
	{
		std::vector<int>	arr = vector1.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		ft::vector<int>		arr = my_vector1.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");

	PRINT("vector2.capacity() = " << vector2.capacity());
	PRINT(std::setw(56) << "my_vector2.capacity() = " << my_vector2.capacity());
	PRINT("\n");
	PRINT("vector2.size() = " << vector2.size());
	PRINT(std::setw(56) << "my_vector2.size() = " << my_vector2.size());
	PRINT("\n");


	PRINT("vector2");
	PRINT(std::setw(57) << "my_vector2");
	PRINT("\n");

	for (size_t i = 0; i < vector2.size(); ++i)
	{
		std::vector<int>	arr = vector2.at(i);

		for(size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		ft::vector<int>		arr = my_vector2.at(i);
		PRINT(std::setw(57));
		for (size_t j = 0; j < arr.size(); ++j)
			PRINT(arr.at(j) << " ");
		PRINT("\n");
	}
	PRINT("\n\n");


	if (vector1 <= vector2)
		PRINT("vector1 <= vector2");
	else
		PRINT("vector1 > vector2");

	if (my_vector1 <= my_vector2)
		PRINT(std::setw(60) << "my_vector1 <= my_vector2");
	else
		PRINT(std::setw(60) << "my_vector1 > my_vector2");

	PRINT("\n\n");
}

void 		test_spec_operators_equal()
{
	test_spec_operators_equal_int();
	test_spec_operators_equal_string();
	test_spec_operators_equal_class();
	test_spec_operators_equal_vector();
}

void 		test_spec_operators_not_equal()
{
	test_spec_operators_not_equal_int();
	test_spec_operators_not_equal_string();
	test_spec_operators_not_equal_class();
	test_spec_operators_not_equal_vector();
}

void 		test_spec_operators_more()
{
	test_spec_operators_more_int();
	test_spec_operators_more_string();
	test_spec_operators_more_class();
	test_spec_operators_more_vector();
}

void 		test_spec_operators_more_or_equal()
{
//	test_spec_operators_more_or_equal_int();
//	test_spec_operators_more_or_equal_string();
//	test_spec_operators_more_or_equal_class();
//	test_spec_operators_more_or_equal_vector();
}

void 		test_spec_operators_less()
{
//	test_spec_operators_less_int();
//	test_spec_operators_less_string();
//	test_spec_operators_less_class();
//	test_spec_operators_less_vector();
}

void 		test_spec_operators_less_or_equal()
{
//	test_spec_operators_less_or_equal_int();
//	test_spec_operators_less_or_equal_string();
//	test_spec_operators_less_or_equal_class();
//	test_spec_operators_less_or_equal_vector();
}

void 		test_spec_operators()
{
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mOPERATOR ==\e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mOPERATOR !=\e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mOPERATOR > \e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mOPERATOR >=\e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mOPERATOR < \e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mOPERATOR <=\e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n\n");

	test_spec_operators_equal();
	test_spec_operators_not_equal();
	test_spec_operators_more();
	test_spec_operators_more_or_equal();
	test_spec_operators_less();
	test_spec_operators_less_or_equal();
}