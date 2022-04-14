#include <iomanip>
#include <vector>
#include "vector.hpp"
#include "Array.hpp"
#include "MyClass.hpp"

# define PRINT(x) std::cout << x

void 		test_insert_one_element_int()
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

		PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE BEGINNING:\n" << "\e[0m");

		std::vector<int>::iterator		it = vector.insert(vector.begin(), 0);
		ft::vector<int>::iterator		my_it = my_vector.insert(my_vector.begin(), 0);

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

		PRINT(std::setw(43));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE END:\n" << "\e[0m");

		it = vector.insert(vector.end(), 6);
		my_it = my_vector.insert(my_vector.end(), 6);

		PRINT("return value vector: " << *it);
		PRINT(std::setw(56) << "return value my_vector: " << *my_it << "\n\n");

		it = vector.insert(vector.end(), 7);
		my_it = my_vector.insert(my_vector.end(), 7);

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


		PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE MIDDLE:\n" << "\e[0m");

		it = vector.insert(vector.begin() + 5, 111);
		my_it = my_vector.insert(my_vector.begin() + 5, 111);

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

		PRINT(std::setw(35));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");
	}
}

void 		test_insert_one_element_string()
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

		PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE BEGINNING:\n" << "\e[0m");

		std::vector<std::string>::iterator		it = vector.insert(vector.begin(), "AAA");
		ft::vector<std::string>::iterator		my_it = my_vector.insert(my_vector.begin(), "AAA");

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

		PRINT(std::setw(45));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE END:\n" << "\e[0m");

		it = vector.insert(vector.end(), "DDD");
		my_it = my_vector.insert(my_vector.end(), "DDD");

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

		PRINT(std::setw(41));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE MIDDLE:\n" << "\e[0m");

		it = vector.insert(vector.begin() + 3, "hello");
		my_it = my_vector.insert(my_vector.begin() + 3, "hello");

		PRINT("return value vector: " << *it);
		PRINT(std::setw(52) << "return value my_vector: " << *my_it << "\n\n");

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

		PRINT(std::setw(35));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");
	}
}

void 		test_insert_one_element_class()
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

		PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE BEGINNING:\n" << "\e[0m");


		std::vector< Array<int> >::iterator		it = vector.insert(vector.begin(), Array<int>(0));
		ft::vector< Array<int> >::iterator		my_it = my_vector.insert(my_vector.begin(), Array<int>(0));

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


		PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE END:\n" << "\e[0m");

		it = vector.insert(vector.end(), Array<int>(3));
		my_it = my_vector.insert(my_vector.end(), Array<int>(3));

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


		PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE MIDDLE:\n" << "\e[0m");


		it = vector.insert(vector.begin() + 3, Array<int>(9));
		my_it = my_vector.insert(my_vector.begin() + 3, Array<int>(9));

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
	}
}

void 		test_insert_one_element_vector()
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


		PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE BEGINNING:\n" << "\e[0m");

		std::vector< std::vector<int> >::iterator		it = vector.insert(vector.begin(), std::vector<int>(3, 100));
		ft::vector< ft::vector<int> >::iterator			my_it = my_vector.insert(my_vector.begin(), ft::vector<int>(3, 100));

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


		PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE END:\n" << "\e[0m");

		it = vector.insert(vector.end(), std::vector<int>(3, 400));
		my_it = my_vector.insert(my_vector.end(), ft::vector<int>(3, 400));

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
			ft::vector<int>	arr = my_vector.at(i);

			PRINT(std::setw(57));
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE MIDDLE:\n" << "\e[0m");


		it = vector.insert(vector.begin() + 2, std::vector<int>(3, 777));
		my_it = my_vector.insert(my_vector.begin() + 2, ft::vector<int>(3, 777));

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
			ft::vector<int>	arr = my_vector.at(i);

			PRINT(std::setw(57));
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");
	}
}

void 		test_insert_one_element_empty_vector()
{
	{
		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
		PRINT("\n\n");
		PRINT(std::setw(39) << "\e[1;36m" << "METHOD INSERT (EMPTY VECTOR)" << "\e[0m");
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

			PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE BEGINNING:\n" << "\e[0m");

			std::vector<std::vector<int> >::iterator it = vector.insert(vector.begin(), std::vector<int>(3, 100));
			ft::vector<ft::vector<int> >::iterator my_it = my_vector.insert(my_vector.begin(), ft::vector<int>(3, 100));

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
			PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE END:\n" << "\e[0m");

			std::vector<std::vector<int> > vector;
			ft::vector<ft::vector<int> > my_vector;

			PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
			PRINT("vector.capacity() = " << vector.capacity());
			PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
			PRINT("\n");
			PRINT("vector.size() = " << vector.size());
			PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
			PRINT("\n");

			std::vector<std::vector<int> >::iterator		it = vector.insert(vector.end(), std::vector<int>(3, 400));
			ft::vector<ft::vector<int> >::iterator			my_it = my_vector.insert(my_vector.end(), ft::vector<int>(3, 400));

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
	}
}

void 		test_insert_one_element_exception()
{
	//	{
//		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
//		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
//		PRINT("\n\n");
//		PRINT(std::setw(39) << "\e[1;36m" << "METHOD INSERT (EXCEPTION)" << "\e[0m");
//		PRINT("\n\n");
//
//
//		PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE BEGINNING:\n" << "\e[0m");
//
//		{
//			PRINT("vector");
//			PRINT(std::setw(57) << "my_vector");
//			PRINT("\n");
//
//			std::vector<MyClass>		vector(7, MyClass("B"));
//
//			PRINT("before exception vector:\n");
//
//			for (size_t i = 0; i < vector.size(); ++i)
//				PRINT(vector.at(i));
//
//			try
//			{
//				vector.insert(vector.begin(), MyClass("A"));
//
//				PRINT("\e[1;32m" << "vector OK\n" << "\e[0m");
//			}
//			catch (std::exception &e)
//			{
//				PRINT("vector: " << "\e[1;31m" << e.what() << "\e[0m" << "\n");
//			}
//
//			PRINT("after exception vector: \n");
//
//			PRINT("vector.capacity() = " << vector.capacity());
//			PRINT("\n");
//
//			PRINT("vector.size() = " << vector.size());
//			PRINT("\n");
//
//			PRINT("elements:\n");
//
//			for (size_t i = 0; i < vector.size(); ++i)
//				PRINT(vector.at(i));
//
//
//			PRINT(std::setw(63) << "my_vector");
//			PRINT("\n");
//
//			ft::vector<MyClass>				my_vector(7, MyClass("B"));
//
//			PRINT(std::setw(81) << "before exception my_vector:");
//			PRINT("\n");
//
//			for (size_t i = 0; i < my_vector.size(); ++i)
//				PRINT(std::setw(61) << my_vector.at(i));
//
//			try
//			{
//				my_vector.insert(my_vector.begin(), MyClass("A"));
//
//				PRINT(std::setw(65) << "\e[1;32m" << "my_vector OK\n" << "\e[0m");
//			}
//			catch (std::exception &e)
//			{
//				PRINT(std::setw(65) << "my_vector: " << "\e[1;31m" << e.what() << "\e[0m" << "\n");
//			}
//
//			PRINT(std::setw(81) << "after exception my_vector:\n");
//
//			PRINT(std::setw(77) << "my_vector.capacity() = " << my_vector.capacity());
//			PRINT("\n");
//
//			PRINT(std::setw(73) << "my_vector.size() = " << my_vector.size());
//			PRINT("\n");
//
//			PRINT(std::setw(64) << "elements:\n");
//
//			for (size_t i = 0; i < my_vector.size(); ++i)
//			{
//				PRINT(std::setw(61) << my_vector.at(i));
//			}
//
//			PRINT("\n\n");
//		}
//
//
//		PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE END:\n" << "\e[0m");
//
//		{
//			PRINT("vector");
//			PRINT(std::setw(57) << "my_vector");
//			PRINT("\n");
//
//			std::vector<MyClass>		vector(7, MyClass("B"));
//
//			PRINT("before exception vector:\n");
//
//			for (size_t i = 0; i < vector.size(); ++i)
//				PRINT(vector.at(i));
//
//			try
//			{
//				vector.insert(vector.end(), MyClass("E"));
//
//				PRINT("\e[1;32m" << "vector OK\n" << "\e[0m");
//			}
//			catch (std::exception &e)
//			{
//				PRINT("vector: " << "\e[1;31m" << e.what() << "\e[0m" << "\n");
//			}
//
//			PRINT("after exception vector: \n");
//
//			PRINT("vector.capacity() = " << vector.capacity());
//			PRINT("\n");
//
//			PRINT("vector.size() = " << vector.size());
//			PRINT("\n");
//
//			PRINT("elements:\n");
//
//			for (size_t i = 0; i < vector.size(); ++i)
//				PRINT(vector.at(i));
//
//
//			PRINT(std::setw(63) << "my_vector");
//			PRINT("\n");
//
//			ft::vector<MyClass>				my_vector(7, MyClass("B"));
//
//			PRINT(std::setw(81) << "before exception my_vector:");
//			PRINT("\n");
//
//			for (size_t i = 0; i < my_vector.size(); ++i)
//				PRINT(std::setw(61) << my_vector.at(i));
//
//			try
//			{
//				my_vector.insert(my_vector.end(), MyClass("E"));
//
//				PRINT("\e[1;32m" << "my_vector OK\n" << "\e[0m");
//			}
//			catch (std::exception &e)
//			{
//				PRINT(std::setw(65) << "my_vector: " << "\e[1;31m" << e.what() << "\e[0m" << "\n");
//			}
//
//			PRINT(std::setw(81) << "after exception my_vector:\n");
//
//			PRINT(std::setw(77) << "my_vector.capacity() = " << my_vector.capacity());
//			PRINT("\n");
//
//			PRINT(std::setw(73) << "my_vector.size() = " << my_vector.size());
//			PRINT("\n");
//
//			PRINT(std::setw(64) << "elements:\n");
//
//			for (size_t i = 0; i < my_vector.size(); ++i)
//				PRINT(std::setw(61) << my_vector.at(i));
//
//			PRINT("\n\n");
//		}
//
//
//		PRINT("\e[1;32m" << "ADD A NEW ELEMENT TO THE MIDDLE:\n" << "\e[0m");
//
//		{
//			PRINT("vector");
//			PRINT(std::setw(57) << "my_vector");
//			PRINT("\n");
//
//			std::vector<MyClass>		vector(7, MyClass("B"));
//
//			PRINT("before exception vector:\n");
//
//			for (size_t i = 0; i < vector.size(); ++i)
//				PRINT(vector.at(i));
//
//			try
//			{
//				vector.insert(vector.begin() + 2, MyClass("M"));
//				PRINT("\e[1;32m" << "vector OK\n" << "\e[0m");
//			}
//			catch (std::exception &e)
//			{
//				PRINT("vector: " << "\e[1;31m" << e.what() << "\e[0m" << "\n");
//			}
//
//			PRINT("after exception vector: \n");
//
//			PRINT("vector.capacity() = " << vector.capacity());
//			PRINT("\n");
//
//			PRINT("vector.size() = " << vector.size());
//			PRINT("\n");
//
//			PRINT("elements: ");
//			PRINT("\n");
//
//			for (size_t i = 0; i < vector.size(); ++i)
//				PRINT(vector.at(i));
//
//
//			PRINT(std::setw(63) << "my_vector");
//			PRINT("\n");
//
//			ft::vector<MyClass>				my_vector(6, MyClass("B"));
//
//			PRINT(std::setw(81) << "before exception my_vector:");
//			PRINT("\n");
//
//			for (size_t i = 0; i < my_vector.size(); ++i)
//				PRINT(std::setw(61) << my_vector.at(i));
//
//			try
//			{
//				my_vector.insert(my_vector.begin() + 2, MyClass("M"));
//
//				PRINT("\e[1;32m" << "my_vector OK\n" << "\e[0m");
//			}
//			catch (std::exception &e)
//			{
//				PRINT(std::setw(65) << "my_vector: " << "\e[1;31m" << e.what() << "\e[0m" << "\n");
//			}
//
//			PRINT(std::setw(81) << "after exception my_vector:\n");
//
//			PRINT(std::setw(77) << "my_vector.capacity() = " << my_vector.capacity());
//			PRINT("\n");
//
//			PRINT(std::setw(73) << "my_vector.size() = " << my_vector.size());
//			PRINT("\n");
//
//			PRINT(std::setw(64) << "elements:\n");
//
//			for (size_t i = 0; i < my_vector.size(); ++i)
//				PRINT(std::setw(61) << my_vector.at(i));
//			PRINT("\n\n");
//		}
//	}
}

void 		test_insert_one_element()
{
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m          \e[1;35mINSERT ONE ELEMENT\e[0m           \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n\n");

	test_insert_one_element_int();
	test_insert_one_element_string();
	test_insert_one_element_class();
	test_insert_one_element_vector();
	test_insert_one_element_empty_vector();

	// doesn't work
//	test_insert_one_element_exception();
}