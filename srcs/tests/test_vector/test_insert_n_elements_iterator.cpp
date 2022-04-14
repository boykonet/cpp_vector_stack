#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "vector.hpp"
#include "Array.hpp"
#include "MyClass.hpp"

#define PRINT(x) std::cout << x


void 		test_insert_n_elements_iterator_int()
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

		std::vector<int>		vector_test;
		ft::vector<int>			my_vector_test;

		for (int i = 0; i < 5; ++i)
		{
			vector_test.push_back(i + 1 + 50);
			my_vector_test.push_back(i + 1 + 50);
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

		std::vector<int>::iterator		it = vector.insert(vector.begin(), vector_test.begin(), vector_test.end());
		ft::vector<int>::iterator		my_it = my_vector.insert(my_vector.begin(), my_vector_test.begin(), my_vector_test.end());

		PRINT("return value vector: " << *it);
		PRINT(std::setw(55) << "return value my_vector: " << *my_it << "\n\n");

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

		PRINT(std::setw(31));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE END:\n" << "\e[0m");

		it = vector.insert(vector.end(), vector_test.begin(), vector_test.begin() + 3);
		my_it = my_vector.insert(my_vector.end(), my_vector_test.begin(), my_vector_test.begin() + 3);

		PRINT("return value vector: " << *it);
		PRINT(std::setw(55) << "return value my_vector: " << *my_it << "\n\n");

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

		PRINT(std::setw(22));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE MIDDLE:\n" << "\e[0m");

		it = vector.insert(vector.begin() + 5, vector_test.begin() + 3, vector_test.end());
		my_it = my_vector.insert(my_vector.begin() + 5, my_vector_test.begin() + 3, my_vector_test.end());

		PRINT("return value vector: " << *it);
		PRINT(std::setw(55) << "return value my_vector: " << *my_it << "\n\n");

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

		PRINT(std::setw(16));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");
	}
}

void 		test_insert_n_elements_iterator_string()
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


		std::vector<std::string>		vector_test;
		ft::vector<std::string>			my_vector_test;

		vector_test.push_back("HHH");
		vector_test.push_back("KKK");
		vector_test.push_back("MMM");
		vector_test.push_back("NNN");
		vector_test.push_back("OOO");

		my_vector_test.push_back("HHH");
		my_vector_test.push_back("KKK");
		my_vector_test.push_back("MMM");
		my_vector_test.push_back("NNN");
		my_vector_test.push_back("OOO");


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

		std::vector<std::string>::iterator		it = vector.insert(vector.begin(), vector_test.begin() + 2, vector_test.end());
		ft::vector<std::string>::iterator		my_it = my_vector.insert(my_vector.begin(), my_vector_test.begin() + 2, my_vector_test.end());

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

		it = vector.insert(vector.end(), vector_test.begin(), vector_test.begin() + 1);
		my_it = my_vector.insert(my_vector.end(), my_vector_test.begin(),  my_vector_test.begin() + 1);

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

		PRINT(std::setw(33));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE MIDDLE:\n" << "\e[0m");

		it = vector.insert(vector.begin() + 3, vector_test.begin() + 2, vector_test.begin() + 4);
		my_it = my_vector.insert(my_vector.begin() + 3, my_vector_test.begin() + 2, my_vector_test.begin() + 4);

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
	}
}

void 		test_insert_n_elements_iterator_class()
{
	{
		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
		PRINT("\n\n");
		PRINT(std::setw(39) << "\e[1;36m" << "METHOD INSERT (CLASS)" << "\e[0m");
		PRINT("\n\n");

		std::vector< Array<int> >		vector(1, Array<int>(11));
		ft::vector< Array<int> >		my_vector(1, Array<int>(11));

		vector.push_back(Array<int>(22));
		my_vector.push_back(Array<int>(22));


		std::vector< Array<int> >		vector_test(1, Array<int>(99));
		ft::vector< Array<int> >		my_vector_test(1, Array<int>(99));

		vector_test.push_back(Array<int>(19));
		my_vector_test.push_back(Array<int>(19));

		vector_test.push_back(Array<int>(77));
		my_vector_test.push_back(Array<int>(77));

		vector_test.push_back(Array<int>(88));
		my_vector_test.push_back(Array<int>(88));

		vector_test.push_back(Array<int>(16));
		my_vector_test.push_back(Array<int>(16));


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
			PRINT(std::setw(56));
			Array<int>	arr = my_vector.at(i);
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");

		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE BEGINNING:\n" << "\e[0m");


		std::vector< Array<int> >::iterator		it = vector.insert(vector.begin(), vector_test.begin(), vector_test.begin() + 3);
		ft::vector< Array<int> >::iterator		my_it = my_vector.insert(my_vector.begin(), my_vector_test.begin(),my_vector_test.begin() + 3);

		PRINT("return value vector: ");
		PRINT(std::setw(58) << "return value my_vector: \n");
		Array<int>		array = *it;
		for (size_t i = 0; i < array.size(); ++i)
			PRINT(array[i] << " ");

		Array<int>		my_array = *my_it;
		PRINT(std::setw(41));
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
			PRINT(std::setw(56));
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE END:\n" << "\e[0m");

		it = vector.insert(vector.end(), vector_test.begin() + 4, vector_test.end());
		my_it = my_vector.insert(my_vector.end(), my_vector_test.begin() + 4, my_vector_test.end());

		PRINT("return value vector: ");
		PRINT(std::setw(58) << "return value my_vector: \n");
		array = *it;
		for (size_t i = 0; i < array.size(); ++i)
			PRINT(array[i] << " ");

		my_array = *my_it;
		PRINT(std::setw(41));
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

			PRINT(std::setw(56));
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE MIDDLE:\n" << "\e[0m");


		it = vector.insert(vector.begin() + 1, vector_test.begin() + 1, vector_test.begin() + 3);
		my_it = my_vector.insert(my_vector.begin() + 1, my_vector_test.begin() + 1, my_vector_test.begin() + 3);

		PRINT("return value vector: ");
		PRINT(std::setw(58) << "return value my_vector: \n");
		array = *it;
		for (size_t i = 0; i < array.size(); ++i)
			PRINT(array[i] << " ");

		my_array = *my_it;
		PRINT(std::setw(41));
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

			PRINT(std::setw(56));
			for (size_t j = 0; j < arr.size(); ++j)
				PRINT(arr[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");
	}
}

void 		test_insert_n_elements_iterator_vector()
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



		std::vector< std::vector<int> >	vector_test(1, std::vector<int>(3, 200));
		ft::vector< ft::vector<int> >	my_vector_test(1, ft::vector<int>(3, 200));

		vector_test.push_back(std::vector<int>(3, 300));
		my_vector_test.push_back(ft::vector<int>(3, 300));

		vector_test.push_back(std::vector<int>(3, 777));
		my_vector_test.push_back(ft::vector<int>(3, 777));

		vector_test.push_back(std::vector<int>(3, 999));
		my_vector_test.push_back(ft::vector<int>(3, 999));

		vector_test.push_back(std::vector<int>(3, 123));
		my_vector_test.push_back(ft::vector<int>(3, 123));



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

		std::vector< std::vector<int> >::iterator		it = vector.insert(vector.begin(), vector_test.begin() + 1, vector_test.begin() + 3);
		ft::vector< ft::vector<int> >::iterator			my_it = my_vector.insert(my_vector.begin(), my_vector_test.begin() + 1, my_vector_test.begin() + 3);

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


		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE BEGINNING OF ITSELF:\n" << "\e[0m");

		it = vector.insert(vector.begin(), vector.begin() + 1, vector.begin() + 3);
		my_it = my_vector.insert(my_vector.begin(), my_vector.begin() + 1, my_vector.begin() + 3);

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




		PRINT("\e[1;32m" << "ADD 0 NEW ELEMENTS TO THE BEGINNING:\n" << "\e[0m");

		it = vector.insert(vector.begin(), vector_test.begin(), vector_test.begin());
		my_it = my_vector.insert(my_vector.begin(), my_vector_test.begin(), my_vector_test.begin());

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

		it = vector.insert(vector.end(), vector_test.begin(), vector_test.end());
		my_it = my_vector.insert(my_vector.end(), my_vector_test.begin(), my_vector_test.end());

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


		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE END OF ITSELF:\n" << "\e[0m");

		it = vector.insert(vector.end(), vector.begin(), vector.end() - 2);
		my_it = my_vector.insert(my_vector.end(), my_vector.begin(), my_vector.end() - 2);

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

		vector.insert(vector.end(), vector_test.begin(), vector_test.begin());
		my_vector.insert(my_vector.end(), my_vector_test.begin(), my_vector_test.begin());

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


		it = vector.insert(vector.begin() + 2, vector_test.begin() + 1, vector_test.begin() + 4);
		my_it = my_vector.insert(my_vector.begin() + 2, my_vector_test.begin() + 1, my_vector_test.begin() + 4);

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


		PRINT("\e[1;32m" << "ADD N NEW ELEMENTS TO THE MIDDLE OF ITSELF:\n" << "\e[0m");


		it = vector.insert(vector.begin() + 2, vector.begin() + 1, vector.begin() + 4);
		my_it = my_vector.insert(my_vector.begin() + 2, my_vector.begin() + 1, my_vector.begin() + 4);

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

		it = vector.insert(vector.begin() + 2, vector_test.end(), vector_test.end());
		my_it = my_vector.insert(my_vector.begin() + 2, my_vector_test.end(), my_vector_test.end());

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

void 		test_insert_n_elements_iterator_empty_vector()
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


void		test_insert_n_elements_iterator()
{
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m      \e[1;35mINSERT N ELEMENTS ITERATOR\e[0m       \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n\n");

	test_insert_n_elements_iterator_int();
	test_insert_n_elements_iterator_string();
	test_insert_n_elements_iterator_class();
	test_insert_n_elements_iterator_vector();
	test_insert_n_elements_iterator_empty_vector();
}