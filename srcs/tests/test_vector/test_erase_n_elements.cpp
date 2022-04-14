#include <iomanip>
#include <vector>
#include "vector.hpp"
#include "Array.hpp"

# define PRINT(x) std::cout << x

void 		test_erase_n_elements_int()
{
	{
		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
		PRINT("\n\n");
		PRINT(std::setw(39) << "\e[1;36m" << "METHOD ERASE (INT)" << "\e[0m");
		PRINT("\n\n");

		std::vector<int>		vector;
		ft::vector<int>			my_vector;

		for (int i = 0; i < 10; ++i)
		{
			vector.push_back(i + 1);
			my_vector.push_back(i + 1);
		}

		PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(55) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(55) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < 10; ++i)
			PRINT(vector.at(i) << " ");

		PRINT(std::setw(34));

		for (size_t i = 0; i < 10; ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");

		PRINT("\e[1;32m" << "ERASE N ELEMENTS FROM BEGINNING:\n" << "\e[0m");

		std::vector<int>::iterator		it = vector.erase(vector.begin(), vector.begin() + 3);
		ft::vector<int>::iterator		my_it = my_vector.erase(my_vector.begin(), my_vector.begin() + 3);

		PRINT("return value vector: " << *it);
		PRINT(std::setw(56) << "return value my_vector: " << *my_it << "\n\n");

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

		PRINT(std::setw(40));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");


		PRINT("\e[1;32m" << "ERASE N ELEMENTS FROM MIDDLE:\n" << "\e[0m");

		it = vector.erase(vector.begin() + 1, vector.begin() + 4);
		my_it = my_vector.erase(my_vector.begin() + 1, my_vector.begin() + 4);

		PRINT("return value vector: " << *it);
		PRINT(std::setw(56) << "return value my_vector: " << *my_it << "\n\n");

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

		PRINT(std::setw(46));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");
	}
}

void 		test_erase_n_elements_string()
{
	{
		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
		PRINT("\n\n");
		PRINT(std::setw(39) << "\e[1;36m" << "METHOD ERASE (STRING)" << "\e[0m");
		PRINT("\n\n");

		std::vector<std::string>		vector;
		ft::vector<std::string>			my_vector;

		vector.push_back("AAA");
		vector.push_back("BBB");
		vector.push_back("CCC");
		vector.push_back("DDD");
		vector.push_back("EEE");
		vector.push_back("MMM");
		vector.push_back("NNN");
		vector.push_back("OOO");

		my_vector.push_back("AAA");
		my_vector.push_back("BBB");
		my_vector.push_back("CCC");
		my_vector.push_back("DDD");
		my_vector.push_back("EEE");
		my_vector.push_back("MMM");
		my_vector.push_back("NNN");
		my_vector.push_back("OOO");


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

		PRINT(std::setw(25));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");

		PRINT("\e[1;32m" << "ERASE N ELEMENTS FROM BEGINNING:\n" << "\e[0m");

		std::vector<std::string>::iterator		it = vector.erase(vector.begin(), vector.begin() + 3);
		ft::vector<std::string>::iterator		my_it = my_vector.erase(my_vector.begin(), my_vector.begin() + 3);

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



		PRINT("\e[1;32m" << "ERASE N ELEMENTS FROM MIDDLE:\n" << "\e[0m");

		it = vector.erase(vector.begin() + 1, vector.end() - 2);
		my_it = my_vector.erase(my_vector.begin() + 1, my_vector.end() - 2);

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
			PRINT(my_vector.at(i) << " ");
		PRINT("\n\n");
	}
}

void 		test_erase_n_elements_class()
{
	{
		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
		PRINT("\n\n");
		PRINT(std::setw(39) << "\e[1;36m" << "METHOD ERASE (CLASS)" << "\e[0m");
		PRINT("\n\n");

		std::vector< Array<int> >		vector(1, Array<int>(1));
		ft::vector< Array<int> >		my_vector(1, Array<int>(1));

		vector.push_back(Array<int>(2));
		vector.push_back(Array<int>(3));
		vector.push_back(Array<int>(4));
		vector.push_back(Array<int>(5));
		vector.push_back(Array<int>(6));
		vector.push_back(Array<int>(7));
		vector.push_back(Array<int>(8));

		my_vector.push_back(Array<int>(2));
		my_vector.push_back(Array<int>(3));
		my_vector.push_back(Array<int>(4));
		my_vector.push_back(Array<int>(5));
		my_vector.push_back(Array<int>(6));
		my_vector.push_back(Array<int>(7));
		my_vector.push_back(Array<int>(8));

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

		PRINT("\e[1;32m" << "ERASE N ELEMENTS FROM BEGINNING:\n" << "\e[0m");


		std::vector< Array<int> >::iterator		it = vector.erase(vector.begin(), vector.begin() + 2);
		ft::vector< Array<int> >::iterator		my_it = my_vector.erase(my_vector.begin(), my_vector.begin() + 2);

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



		PRINT("\e[1;32m" << "ERASE N ELEMENTS FROM MIDDLE:\n" << "\e[0m");


		it = vector.erase(vector.begin() + 1, vector.end() - 3);
		my_it = my_vector.erase(my_vector.begin() + 1, my_vector.end() - 3);

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

void 		test_erase_n_elements_vector()
{
	{
		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
		PRINT("\n\n");
		PRINT(std::setw(39) << "\e[1;36m" << "METHOD ERASE (VECTOR)" << "\e[0m");
		PRINT("\n\n");

		std::vector< std::vector<int> >	vector(1, std::vector<int>(3, 100));
		ft::vector< ft::vector<int> >	my_vector(1, ft::vector<int>(3, 100));

		vector.push_back(std::vector<int>(3, 200));
		vector.push_back(std::vector<int>(3, 300));
		vector.push_back(std::vector<int>(3, 400));
		vector.push_back(std::vector<int>(3, 500));
		vector.push_back(std::vector<int>(3, 600));
		vector.push_back(std::vector<int>(3, 700));
		vector.push_back(std::vector<int>(3, 800));

		my_vector.push_back(ft::vector<int>(3, 200));
		my_vector.push_back(ft::vector<int>(3, 300));
		my_vector.push_back(ft::vector<int>(3, 400));
		my_vector.push_back(ft::vector<int>(3, 500));
		my_vector.push_back(ft::vector<int>(3, 600));
		my_vector.push_back(ft::vector<int>(3, 700));
		my_vector.push_back(ft::vector<int>(3, 800));

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


		PRINT("\e[1;32m" << "ERASE N ELEMENTS FROM BEGINNING:\n" << "\e[0m");

		std::vector< std::vector<int> >::iterator		it = vector.erase(vector.begin(), vector.begin() + 4);
		ft::vector< ft::vector<int> >::iterator			my_it = my_vector.erase(my_vector.begin(), my_vector.begin() + 4);

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


		PRINT("\e[1;32m" << "ERASE N ELEMENTS FROM MIDDLE:\n" << "\e[0m");


		it = vector.erase(vector.begin() + 1, vector.begin() + 3);
		my_it = my_vector.erase(my_vector.begin() + 1, my_vector.begin() + 3);

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

void 		test_erase_n_elements()
{
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m           \e[1;35mERASE N ELEMENTS\e[0m            \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n\n");

	test_erase_n_elements_int();
	test_erase_n_elements_string();
	test_erase_n_elements_class();
	test_erase_n_elements_vector();
}