#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "vector.hpp"
#include "Array.hpp"
#include "MyClass.hpp"

#define PRINT(x) std::cout << x

void 		test_insert_n_elements_int()
{
	{
		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
		PRINT("\n\n");
		PRINT(std::setw(39) << "\e[1;36m" << "METHOD INSERT (INT)" << "\e[0m");
		PRINT("\n\n");

		std::vector<int>		vector;
		ft::vector<int>			my_vector;

		for (int i = 0; i < 5; ++i)
		{
			vector.push_back(i + 1);
			my_vector.push_back(i + 1);
		}

		PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < 5; ++i)
			PRINT(vector.at(i) << " ");

		PRINT(std::setw(45));

		for (size_t i = 0; i < 5; ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");

		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE BEGINNING:\n" << "\e[0m");

		std::vector<int>::iterator		it = vector.insert(vector.begin(), 3, 0);
		ft::vector<int>::iterator		my_it = my_vector.insert(my_vector.begin(), 3, 0);

		PRINT("return value vector: " << *it);
		PRINT(std::setw(56) << "return value my_vector: " << *my_it << "\n\n");

		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
			PRINT(vector.at(i) << " ");

		PRINT(std::setw(39));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE END:\n" << "\e[0m");

		it = vector.insert(vector.end(), 3, 6);
		my_it = my_vector.insert(my_vector.end(), 3, 6);

		PRINT("return value vector: " << *it);
		PRINT(std::setw(56) << "return value my_vector: " << *my_it << "\n\n");

		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(55) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(55) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
			PRINT(vector.at(i) << " ");

		PRINT(std::setw(33));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE MIDDLE:\n" << "\e[0m");

		it = vector.insert(vector.begin() + 5, 3, 111);
		my_it = my_vector.insert(my_vector.begin() + 5, 3, 111);

		PRINT("return value vector: " << *it);
		PRINT(std::setw(54) << "return value my_vector: " << *my_it << "\n\n");

		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(55) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(55) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
			PRINT(vector.at(i) << " ");

		PRINT(std::setw(21));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");
	}
}

void 		test_insert_n_elements_string()
{
	{
		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
		PRINT("\n\n");
		PRINT(std::setw(39) << "\e[1;36m" << "METHOD INSERT (STRING)" << "\e[0m");
		PRINT("\n\n");

		std::vector<std::string>		vector;
		ft::vector<std::string>			my_vector;

		vector.push_back("BBB");
		vector.push_back("CCC");

		my_vector.push_back("BBB");
		my_vector.push_back("CCC");

		PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
			PRINT(vector.at(i) << " ");

		PRINT(std::setw(49));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");

		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE BEGINNING:\n" << "\e[0m");

		std::vector<std::string>::iterator		it = vector.insert(vector.begin(), 3, "AAA");
		ft::vector<std::string>::iterator		my_it = my_vector.insert(my_vector.begin(), 3, "AAA");

		PRINT("return value vector: " << *it);
		PRINT(std::setw(54) << "return value my_vector: " << *my_it << "\n\n");

		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
			PRINT(vector.at(i) << " ");

		PRINT(std::setw(37));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE END:\n" << "\e[0m");

		it = vector.insert(vector.end(), 3, "DDD");
		my_it = my_vector.insert(my_vector.end(), 3,  "DDD");

		PRINT("return value vector: " << *it);
		PRINT(std::setw(54) << "return value my_vector: " << *my_it << "\n\n");

		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(55) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
			PRINT(vector.at(i) << " ");

		PRINT(std::setw(25));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE MIDDLE:\n" << "\e[0m");

		it = vector.insert(vector.begin() + 3, 3, "hello");
		my_it = my_vector.insert(my_vector.begin() + 3, 3, "hello");

		PRINT("return value vector: " << *it);
		PRINT(std::setw(52) << "return value my_vector: " << *my_it << "\n\n");

		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(55) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(55) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
			PRINT(vector.at(i) << " ");

		PRINT(std::setw(7));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");
	}
}

void 		test_insert_n_elements_class()
{
	{
		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
		PRINT("\n\n");
		PRINT(std::setw(39) << "\e[1;36m" << "METHOD INSERT (CLASS)" << "\e[0m");
		PRINT("\n\n");

		std::vector< Array<int> >		vector(1, Array<int>(1));
		ft::vector< Array<int> >		my_vector(1, Array<int>(1));

		vector.push_back(Array<int>(2));
		my_vector.push_back(Array<int>(2));

		PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
		{
			Array<int>	arr = vector.at(i);
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(std::setw(55));
			Array<int>	arr = my_vector.at(i);
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");

		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE BEGINNING:\n" << "\e[0m");


		std::vector< Array<int> >::iterator		it = vector.insert(vector.begin(), 3, Array<int>(0));
		ft::vector< Array<int> >::iterator		my_it = my_vector.insert(my_vector.begin(), 3,Array<int>(0));

		PRINT("return value vector: ");
		PRINT(std::setw(58) << "return value my_vector: \n");
		Array<int>		array = *it;
		for (size_t i = 0; i < array.size(); ++i)
			PRINT(array[i] << " ");

		Array<int>		my_array = *my_it;
		PRINT(std::setw(45));
		for (size_t i = 0; i < my_array.size(); ++i)
			PRINT(my_array[i] << " ");
		PRINT("\n\n");

		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
		{
			Array<int>	arr = vector.at(i);
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			Array<int>	arr = my_vector.at(i);
			PRINT(std::setw(55));
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE END:\n" << "\e[0m");

		it = vector.insert(vector.end(), 4,Array<int>(3));
		my_it = my_vector.insert(my_vector.end(), 4,Array<int>(3));

		PRINT("return value vector: ");
		PRINT(std::setw(58) << "return value my_vector: \n");
		array = *it;
		for (size_t i = 0; i < array.size(); ++i)
			PRINT(array[i] << " ");

		my_array = *my_it;
		PRINT(std::setw(45));
		for (size_t i = 0; i < my_array.size(); ++i)
			PRINT(my_array[i] << " ");
		PRINT("\n\n");

		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(55) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
		{
			Array<int>	arr = vector.at(i);
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			Array<int>	arr = my_vector.at(i);

			PRINT(std::setw(55));
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE MIDDLE:\n" << "\e[0m");


		it = vector.insert(vector.begin() + 3, 5, Array<int>(9));
		my_it = my_vector.insert(my_vector.begin() + 3, 5, Array<int>(9));

		PRINT("return value vector: ");
		PRINT(std::setw(58) << "return value my_vector: \n");
		array = *it;
		for (size_t i = 0; i < array.size(); ++i)
			PRINT(array[i] << " ");

		my_array = *my_it;
		PRINT(std::setw(45));
		for (size_t i = 0; i < my_array.size(); ++i)
			PRINT(my_array[i] << " ");
		PRINT("\n\n");

		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(55) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(55) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
		{
			Array<int>	arr = vector.at(i);
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			Array<int>	arr = my_vector.at(i);

			PRINT(std::setw(55));
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");
	}
}

void 		test_insert_n_elements_vector()
{
	{
		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
		PRINT("\n\n");
		PRINT(std::setw(39) << "\e[1;36m" << "METHOD INSERT (VECTOR)" << "\e[0m");
		PRINT("\n\n");

		std::vector< std::vector<int> >	vector(1, std::vector<int>(3, 200));
		ft::vector< ft::vector<int> >	my_vector(1, ft::vector<int>(3, 200));

		vector.push_back(std::vector<int>(3, 300));
		my_vector.push_back(ft::vector<int>(3, 300));

		PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
		{
			std::vector<int>	arr = vector.at(i);

			for(size_t j = 0; j < arr.size(); ++j)
				PRINT(arr.at(j) << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			ft::vector<int>		arr = my_vector.at(i);
			PRINT(std::setw(57));
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr.at(j) << " ");
			PRINT("\n");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE BEGINNING:\n" << "\e[0m");

		std::vector< std::vector<int> >::iterator		it = vector.insert(vector.begin(), 3, std::vector<int>(3, 100));
		ft::vector< ft::vector<int> >::iterator			my_it = my_vector.insert(my_vector.begin(), 3, ft::vector<int>(3, 100));

		PRINT("return value vector: ");
		PRINT(std::setw(58) << "return value my_vector: \n");
		std::vector<int>		array = *it;
		for (size_t i = 0; i < array.size(); ++i)
			PRINT(array.at(i) << " ");

		ft::vector<int>			my_array = *my_it;
		PRINT(std::setw(45));
		for (size_t i = 0; i < my_array.size(); ++i)
			PRINT(my_array[i] << " ");
		PRINT("\n\n");

		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
		{
			std::vector<int>	arr = vector.at(i);
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			ft::vector<int>		arr = my_vector.at(i);
			PRINT(std::setw(57));
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD 0 NEW ELEMENTS TO THE BEGINNING:\n" << "\e[0m");

		it = vector.insert(vector.begin(), 0, std::vector<int>(3, 100));
		my_it = my_vector.insert(my_vector.begin(), 0, ft::vector<int>(3, 100));

		PRINT("return value vector: ");
		PRINT(std::setw(58) << "return value my_vector: \n");
		array = *it;
		for (size_t i = 0; i < array.size(); ++i)
			PRINT(array.at(i) << " ");

		my_array = *my_it;
		PRINT(std::setw(45));
		for (size_t i = 0; i < my_array.size(); ++i)
			PRINT(my_array[i] << " ");
		PRINT("\n\n");

		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
		{
			std::vector<int>	arr = vector.at(i);
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			ft::vector<int>		arr = my_vector.at(i);
			PRINT(std::setw(57));
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");



		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE END:\n" << "\e[0m");

		it = vector.insert(vector.end(), 5, std::vector<int>(3, 400));
		my_it = my_vector.insert(my_vector.end(), 5, ft::vector<int>(3, 400));

		PRINT("return value vector: ");
		PRINT(std::setw(58) << "return value my_vector: \n");
		array = *it;
		for (size_t i = 0; i < array.size(); ++i)
			PRINT(array[i] << " ");

		my_array = *my_it;
		PRINT(std::setw(45));
		for (size_t i = 0; i < my_array.size(); ++i)
			PRINT(my_array[i] << " ");
		PRINT("\n\n");

		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(55) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(55) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
		{
			std::vector<int>	arr = vector.at(i);
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			ft::vector<int>	arr = my_vector.at(i);

			PRINT(std::setw(57));
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD 0 NEW ELEMENTS TO THE END:\n" << "\e[0m");

		vector.insert(vector.end(), 0, std::vector<int>(3, 400));
		my_vector.insert(my_vector.end(), 0, ft::vector<int>(3, 400));

		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(55) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(55) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
		{
			std::vector<int>	arr = vector.at(i);
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			ft::vector<int>	arr = my_vector.at(i);

			PRINT(std::setw(57));
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");




		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE MIDDLE:\n" << "\e[0m");


		it = vector.insert(vector.begin() + 2, 3, std::vector<int>(3, 777));
		my_it = my_vector.insert(my_vector.begin() + 2, 3, ft::vector<int>(3, 777));

		PRINT("return value vector: ");
		PRINT(std::setw(58) << "return value my_vector: \n");
		array = *it;
		for (size_t i = 0; i < array.size(); ++i)
			PRINT(array[i] << " ");

		my_array = *my_it;
		PRINT(std::setw(45));
		for (size_t i = 0; i < my_array.size(); ++i)
			PRINT(my_array[i] << " ");
		PRINT("\n\n");

		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(55) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(55) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
		{
			std::vector<int>	arr = vector.at(i);
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			ft::vector<int>	arr = my_vector.at(i);

			PRINT(std::setw(57));
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");



		PRINT("\e[1;32m" << "ADD 0 NEW ELEMENTS TO THE MIDDLE:\n" << "\e[0m");


		it = vector.insert(vector.begin() + 2, 0, std::vector<int>(3, 777));
		my_it = my_vector.insert(my_vector.begin() + 2, 0, ft::vector<int>(3, 777));

		PRINT("return value vector: ");
		PRINT(std::setw(58) << "return value my_vector: \n");
		array = *it;
		for (size_t i = 0; i < array.size(); ++i)
			PRINT(array[i] << " ");

		my_array = *my_it;
		PRINT(std::setw(45));
		for (size_t i = 0; i < my_array.size(); ++i)
			PRINT(my_array[i] << " ");
		PRINT("\n\n");

		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(55) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(55) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
		{
			std::vector<int>	arr = vector.at(i);
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			ft::vector<int>	arr = my_vector.at(i);

			PRINT(std::setw(57));
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");

	}
}

void 		test_insert_n_elements_empty_vector()
{
	{
		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
		PRINT("\n\n");
		PRINT(std::setw(35) << "\e[1;36m" << "METHOD INSERT (EMPTY VECTOR)" << "\e[0m");
		PRINT("\n\n");

		{
			std::vector<std::vector<int> > vector;
			ft::vector<ft::vector<int> > my_vector;

			PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
			PRINT("vector.capacity() = " << vector.capacity());
			PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
			PRINT("\n");
			PRINT("vector.size() = " << vector.size());
			PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
			PRINT("\n");

			PRINT("\e[1;32m" << "ADD N NEW ELEMENT TO THE BEGINNING:\n" << "\e[0m");

			std::vector<std::vector<int> >::iterator it = vector.insert(vector.begin(), 3, std::vector<int>(3, 100));
			ft::vector<ft::vector<int> >::iterator my_it = my_vector.insert(my_vector.begin(), 3, ft::vector<int>(3, 100));

			PRINT("return value vector: ");
			PRINT(std::setw(58) << "return value my_vector: \n");
			std::vector<int> array = *it;
			for (size_t i = 0; i < array.size(); ++i)
				PRINT(array.at(i) << " ");

			ft::vector<int> my_array = *my_it;
			PRINT(std::setw(45));
			for (size_t i = 0; i < my_array.size(); ++i)
				PRINT(my_array[i] << " ");
			PRINT("\n\n");

			PRINT("vector.capacity() = " << vector.capacity());
			PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
			PRINT("\n");
			PRINT("vector.size() = " << vector.size());
			PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
			PRINT("\n");

			PRINT("vector");
			PRINT(std::setw(57) << "my_vector");
			PRINT("\n");

			for (size_t i = 0; i < vector.size(); ++i) {
				std::vector<int> arr = vector.at(i);
				for (size_t j = 0; j < arr.size(); ++j)
					PRINT(arr[j] << " ");
				PRINT("\n");
			}

			for (size_t i = 0; i < my_vector.size(); ++i) {
				ft::vector<int> arr = my_vector.at(i);
				PRINT(std::setw(57));
				for (size_t j = 0; j < arr.size(); ++j)
					PRINT(arr[j] << " ");
				PRINT("\n");
			}
			PRINT("\n\n");

		}


		{
			std::vector<std::vector<int> > vector;
			ft::vector<ft::vector<int> > my_vector;

			PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
			PRINT("vector.capacity() = " << vector.capacity());
			PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
			PRINT("\n");
			PRINT("vector.size() = " << vector.size());
			PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
			PRINT("\n");

			PRINT("\e[1;32m" << "ADD 0 NEW ELEMENT TO THE BEGINNING:\n" << "\e[0m");

			vector.insert(vector.begin(), 0, std::vector<int>(3, 100));
			my_vector.insert(my_vector.begin(), 0, ft::vector<int>(3, 100));

			PRINT("vector.capacity() = " << vector.capacity());
			PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
			PRINT("\n");
			PRINT("vector.size() = " << vector.size());
			PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
			PRINT("\n");

			PRINT("vector");
			PRINT(std::setw(57) << "my_vector");
			PRINT("\n");

			for (size_t i = 0; i < vector.size(); ++i) {
				std::vector<int> arr = vector.at(i);
				for (size_t j = 0; j < arr.size(); ++j)
					PRINT(arr[j] << " ");
				PRINT("\n");
			}

			for (size_t i = 0; i < my_vector.size(); ++i) {
				ft::vector<int> arr = my_vector.at(i);
				PRINT(std::setw(57));
				for (size_t j = 0; j < arr.size(); ++j)
					PRINT(arr[j] << " ");
				PRINT("\n");
			}
			PRINT("\n\n");

		}

		{
			PRINT("\e[1;32m" << "ADD N NEW ELEMENT TO THE END:\n" << "\e[0m");

			std::vector<std::vector<int> > vector;
			ft::vector<ft::vector<int> > my_vector;

			PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
			PRINT("vector.capacity() = " << vector.capacity());
			PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
			PRINT("\n");
			PRINT("vector.size() = " << vector.size());
			PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
			PRINT("\n");

			std::vector<std::vector<int> >::iterator		it = vector.insert(vector.end(), 3,  std::vector<int>(3, 400));
			ft::vector<ft::vector<int> >::iterator			my_it = my_vector.insert(my_vector.end(), 3,ft::vector<int>(3, 400));

			PRINT("return value vector: ");
			PRINT(std::setw(58) << "return value my_vector: \n");
			std::vector<int>	array = *it;
			for (size_t i = 0; i < array.size(); ++i)
				PRINT(array[i] << " ");

			ft::vector<int>		my_array = *my_it;
			PRINT(std::setw(45));
			for (size_t i = 0; i < my_array.size(); ++i)
				PRINT(my_array[i] << " ");
			PRINT("\n\n");

			PRINT("vector.capacity() = " << vector.capacity());
			PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
			PRINT("\n");
			PRINT("vector.size() = " << vector.size());
			PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
			PRINT("\n");

			PRINT("vector");
			PRINT(std::setw(57) << "my_vector");
			PRINT("\n");

			for (size_t i = 0; i < vector.size(); ++i) {
				std::vector<int> arr = vector.at(i);
				for (size_t j = 0; j < arr.size(); ++j)
					PRINT(arr[j] << " ");
				PRINT("\n");
			}

			for (size_t i = 0; i < my_vector.size(); ++i) {
				ft::vector<int> arr = my_vector.at(i);

				PRINT(std::setw(57));
				for (size_t j = 0; j < arr.size(); ++j)
					PRINT(arr[j] << " ");
				PRINT("\n");
			}
			PRINT("\n\n");
		}


		{
			PRINT("\e[1;32m" << "ADD 0 NEW ELEMENT TO THE END:\n" << "\e[0m");

			std::vector<std::vector<int> > vector;
			ft::vector<ft::vector<int> > my_vector;

			PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
			PRINT("vector.capacity() = " << vector.capacity());
			PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
			PRINT("\n");
			PRINT("vector.size() = " << vector.size());
			PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
			PRINT("\n");

			vector.insert(vector.end(), 0,  std::vector<int>(3, 400));
			my_vector.insert(my_vector.end(), 0,ft::vector<int>(3, 400));

			PRINT("vector.capacity() = " << vector.capacity());
			PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
			PRINT("\n");
			PRINT("vector.size() = " << vector.size());
			PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
			PRINT("\n");

			PRINT("vector");
			PRINT(std::setw(57) << "my_vector");
			PRINT("\n");

			for (size_t i = 0; i < vector.size(); ++i) {
				std::vector<int> arr = vector.at(i);
				for (size_t j = 0; j < arr.size(); ++j)
					PRINT(arr[j] << " ");
				PRINT("\n");
			}

			for (size_t i = 0; i < my_vector.size(); ++i) {
				ft::vector<int> arr = my_vector.at(i);

				PRINT(std::setw(57));
				for (size_t j = 0; j < arr.size(); ++j)
					PRINT(arr[j] << " ");
				PRINT("\n");
			}
			PRINT("\n\n");
		}
	}
}


void		test_insert_n_elements()
{
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m           \e[1;35mINSERT N ELEMENTS\e[0m           \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n\n");

	test_insert_n_elements_int();
	test_insert_n_elements_string();
	test_insert_n_elements_class();
	test_insert_n_elements_vector();
	test_insert_n_elements_empty_vector();
}