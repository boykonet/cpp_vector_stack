#include <iostream>
#include <string>
#include <iomanip>

#include <vector>
#include "vector.hpp"
#include "Array.hpp"

#define PRINT(x) std::cout << x


void 		test_assign_n_elements_iterator_int()
{
	{
		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
		PRINT("\n\n");
		PRINT(std::setw(39) << "\e[1;36m" << "METHOD ASSIGN (INT)" << "\e[0m");
		PRINT("\n\n");

		std::vector<int>		vector;
		ft::vector<int>			my_vector;


		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
			PRINT(vector.at(i) << " ");

		PRINT(std::setw(34));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");

		std::vector<int>		vector_test;
		ft::vector<int>			my_vector_test;

		for (int i = 0; i < 5; ++i)
		{
			vector_test.push_back(i + 1 + 50);
			my_vector_test.push_back(i + 1 + 50);
		}


		PRINT("\e[1;32m" << "ASSIGN N ELEMENTS EMPTY:\n" << "\e[0m");

		vector.assign(vector_test.begin(), vector_test.end());
		my_vector.assign(my_vector_test.begin(), my_vector_test.end());


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


		PRINT("\e[1;32m" << "ASSIGN N ELEMENTS NOT EMPTY:\n" << "\e[0m");

		for (int i = 0; i < 5; ++i)
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

		for (size_t i = 0; i < vector.size(); ++i)
			PRINT(vector.at(i) << " ");

		PRINT(std::setw(31));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");

		vector.assign(vector_test.begin(), vector_test.begin() + 2);
		my_vector.assign(my_vector_test.begin(), my_vector_test.begin() + 2);


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

		PRINT(std::setw(50));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");
	}
}

void 		test_assign_n_elements_iterator_string()
{
	{
		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
		PRINT("\n\n");
		PRINT(std::setw(39) << "\e[1;36m" << "METHOD ASSIGN (STRING)" << "\e[0m");
		PRINT("\n\n");

		std::vector<std::string>		vector;
		ft::vector<std::string>			my_vector;


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

		PRINT("\e[1;32m" << "ASSIGN N ELEMENTS EMPTY:\n" << "\e[0m");

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

		vector.assign(vector_test.begin() + 3, vector_test.begin() + 5);
		my_vector.assign(my_vector_test.begin() + 3, my_vector_test.begin() + 5);

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



		PRINT("\e[1;32m" << "ASSIGN N ELEMENTS NOT EMPTY:\n" << "\e[0m");

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

		PRINT(std::setw(17));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");

		vector.assign(vector_test.end() - 3, vector_test.end());
		my_vector.assign(my_vector_test.end() - 3, my_vector_test.end());

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

		PRINT(std::setw(45));

		for (size_t i = 0; i < my_vector.size(); ++i)
			PRINT(my_vector.at(i) << " ");
		PRINT("\n\n");
	}
}

void 		test_assign_n_elements_iterator_class()
{
	{
		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
		PRINT("\n\n");
		PRINT(std::setw(39) << "\e[1;36m" << "METHOD ASSIGN (CLASS)" << "\e[0m");
		PRINT("\n\n");

		std::vector< Array<int> >		vector;
		ft::vector< Array<int> >		my_vector;



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

		PRINT("\e[1;32m" << "ASSIGN N ELEMENTS EMPTY:\n" << "\e[0m");

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


		vector.assign(vector_test.begin() + 1, vector_test.begin() + 4);
		my_vector.assign(my_vector_test.begin() + 1, my_vector_test.begin() + 4);


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



		PRINT("\e[1;32m" << "ASSIGN N ELEMENTS NOT EMPTY:\n" << "\e[0m");

		vector.push_back(Array<int>(67));
		vector.push_back(Array<int>(68));
		vector.push_back(Array<int>(69));
		vector.push_back(Array<int>(96));
		vector.push_back(Array<int>(95));
		vector.push_back(Array<int>(94));
		vector.push_back(Array<int>(93));

		my_vector.push_back(Array<int>(67));
		my_vector.push_back(Array<int>(68));
		my_vector.push_back(Array<int>(69));
		my_vector.push_back(Array<int>(96));
		my_vector.push_back(Array<int>(95));
		my_vector.push_back(Array<int>(94));
		my_vector.push_back(Array<int>(93));

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


		vector.assign(vector_test.end() - 1, vector_test.end());
		my_vector.assign(my_vector_test.end() - 1, my_vector_test.end());



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

void 		test_assign_n_elements_iterator_vector()
{
	{
		PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
		PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
		PRINT("\n\n");
		PRINT(std::setw(39) << "\e[1;36m" << "METHOD ASSIGN (VECTOR)" << "\e[0m");
		PRINT("\n\n");

		std::vector< std::vector<int> >	vector;
		ft::vector< ft::vector<int> >	my_vector;



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


		PRINT("\e[1;32m" << "ASSIGN N ELEMENTS EMPTY:\n" << "\e[0m");

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


		vector.assign(vector_test.begin(), vector_test.end());
		my_vector.assign(my_vector_test.begin(), my_vector_test.end());


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


		PRINT("\e[1;32m" << "ASSIGN N ELEMENTS NOT EMPTY:\n" << "\e[0m");


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

		vector.assign(vector_test.end() - 2, vector_test.end());
		my_vector.assign(my_vector_test.end() - 2, my_vector_test.end());



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

void 		test_assign_n_elements_iterator()
{
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m      \e[1;35mASSIGN N ELEMENTS ITERATOR\e[0m       \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n\n");

	test_assign_n_elements_iterator_int();
	test_assign_n_elements_iterator_string();
	test_assign_n_elements_iterator_class();
	test_assign_n_elements_iterator_vector();
}