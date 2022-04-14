#include <iomanip>
#include <vector>
#include "vector.hpp"
#include "Array.hpp"
#include "MyClass.hpp"

# define PRINT(x) std::cout << x

void 		test_swap_int()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	PRINT(std::setw(42) << "\e[1;32m" << "SWAP METHOD (INT)\n" << "\e[0m");

	std::vector<int>	vector1(3, 300);
	std::vector<int>	vector2(6, 500);

	ft::vector<int>		my_vector1(3, 300);
	ft::vector<int>		my_vector2(6, 500);

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		PRINT(my_vector1.at(i) << " ");
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
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(33));

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		PRINT(my_vector2.at(i) << " ");
	}
	PRINT("\n\n");

	vector1.swap(vector2);
	my_vector1.swap(my_vector2);

	PRINT("\e[1;32m" << "AFTER SWAP:\n" << "\e[0m");


	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(33));

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		PRINT(my_vector1.at(i) << " ");
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
		PRINT(vector2.at(i) << " ");

	PRINT(std::setw(45));

	for (size_t i = 0; i < my_vector2.size(); ++i)
	{
		PRINT(my_vector2.at(i) << " ");
	}
	PRINT("\n\n");
}

void 		test_swap_vector()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	PRINT(std::setw(42) << "\e[1;32m" << "SWAP METHOD (VECTOR)\n" << "\e[0m");

	std::vector< std::vector< int > >	vector1(3, std::vector<int>(3, 300));
	std::vector< std::vector< int > >	vector2(6, std::vector<int>(3, 500));

	ft::vector< ft::vector< int > >		my_vector1(3, ft::vector<int>(3, 300));
	ft::vector< ft::vector< int > >		my_vector2(6, ft::vector<int>(3, 500));

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n");

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

	vector1.swap(vector2);
	my_vector1.swap(my_vector2);

	PRINT("\e[1;32m" << "AFTER SWAP:\n" << "\e[0m");


	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n");

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
}

void 		test_begin_end_int()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	PRINT(std::setw(39) << "\e[1;32m" << "RBEGIN REND METHODS (INT)\n" << "\e[0m");

	std::vector<int>	vector1(1, 100);

	ft::vector<int>		my_vector1(1, 100);

	vector1.push_back(200);
	vector1.push_back(300);
	vector1.push_back(400);
	vector1.push_back(500);

	my_vector1.push_back(200);
	my_vector1.push_back(300);
	my_vector1.push_back(400);
	my_vector1.push_back(500);


	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(37));

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		PRINT(my_vector1.at(i) << " ");
	}
	PRINT("\n\n");


	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	{
		std::vector<int>::iterator		it = vector1.begin();
		ft::vector<int>::iterator		my_it = my_vector1.begin();

		PRINT("\e[1;32m" << "RBEGIN()\n" << "\e[0m");
		PRINT("reverse_iterator_vector = " << *it);
		PRINT(std::setw(54) << "reverse_iterator_my_vector = " << *my_it << "\n\n");
	}

	{
		std::vector<int>::const_iterator		it = vector1.begin();
		ft::vector<int>::const_iterator			my_it = my_vector1.begin();

		PRINT("\e[1;32m" << "CONST RBEGIN()\n" << "\e[0m");
		PRINT("reverse_iterator_vector = " << *it);
		PRINT(std::setw(54) << "reverse_iterator_my_vector = " << *my_it << "\n\n");
	}

	{
		std::vector<int>::iterator		rit = vector1.end();
		ft::vector<int>::iterator		my_rit = my_vector1.end();

		PRINT("\e[1;32m" << "REND()\n" << "\e[0m");
		PRINT("reverse_iterator_vector = " << *--rit);
		PRINT(std::setw(54) << "reverse_iterator_my_vector = " << *--my_rit << "\n\n");
	}

	{
		std::vector<int>::const_iterator		it = vector1.end();
		ft::vector<int>::const_iterator			my_it = my_vector1.end();

		PRINT("\e[1;32m" << "CONST REND()\n" << "\e[0m");
		PRINT("reverse_iterator_vector = " << *--it);
		PRINT(std::setw(54) << "reverse_iterator_my_vector = " << *--my_it << "\n\n");
	}
}

void 		test_rbegin_rend_int()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	PRINT(std::setw(39) << "\e[1;32m" << "RBEGIN REND METHODS (INT)\n" << "\e[0m");

	std::vector<int>	vector1(1, 100);

	ft::vector<int>		my_vector1(1, 100);

	vector1.push_back(200);
	vector1.push_back(300);
	vector1.push_back(400);
	vector1.push_back(500);

	my_vector1.push_back(200);
	my_vector1.push_back(300);
	my_vector1.push_back(400);
	my_vector1.push_back(500);


	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n");

	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	for (size_t i = 0; i < vector1.size(); ++i)
		PRINT(vector1.at(i) << " ");

	PRINT(std::setw(37));

	for (size_t i = 0; i < my_vector1.size(); ++i)
	{
		PRINT(my_vector1.at(i) << " ");
	}
	PRINT("\n\n");


	PRINT("vector1");
	PRINT(std::setw(57) << "my_vector1");
	PRINT("\n");

	{
		std::vector<int>::reverse_iterator		rit = vector1.rbegin();
		ft::vector<int>::reverse_iterator		my_rit = my_vector1.rbegin();

		PRINT("\e[1;32m" << "RBEGIN()\n" << "\e[0m");
		PRINT("reverse_iterator_vector = " << *rit);
		PRINT(std::setw(54) << "reverse_iterator_my_vector = " << *my_rit << "\n\n");
	}

	{
		std::vector<int>::const_reverse_iterator		rit = vector1.rbegin();
		ft::vector<int>::const_reverse_iterator			my_rit = my_vector1.rbegin();

		PRINT("\e[1;32m" << "CONST RBEGIN()\n" << "\e[0m");
		PRINT("reverse_iterator_vector = " << *rit);
		PRINT(std::setw(54) << "reverse_iterator_my_vector = " << *my_rit << "\n\n");
	}

	{
		std::vector<int>::reverse_iterator		rit = vector1.rend();
		ft::vector<int>::reverse_iterator		my_rit = my_vector1.rend();

		PRINT("\e[1;32m" << "REND()\n" << "\e[0m");
		PRINT("reverse_iterator_vector = " << *--rit);
		PRINT(std::setw(54) << "reverse_iterator_my_vector = " << *--my_rit << "\n\n");
	}

	{
		std::vector<int>::const_reverse_iterator		rit = vector1.rend();
		ft::vector<int>::const_reverse_iterator			my_rit = my_vector1.rend();

		PRINT("\e[1;32m" << "CONST REND()\n" << "\e[0m");
		PRINT("reverse_iterator_vector = " << *--rit);
		PRINT(std::setw(54) << "reverse_iterator_my_vector = " << *--my_rit << "\n\n");
	}

}

void 		test_rbegin_rend_vector()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");

	PRINT(std::setw(42) << "\e[1;32m" << "SWAP METHOD (VECTOR)\n" << "\e[0m");

	std::vector< std::vector< int > >	vector1(3, std::vector<int>(3, 300));
	std::vector< std::vector< int > >	vector2(6, std::vector<int>(3, 500));

	ft::vector< ft::vector< int > >		my_vector1(3, ft::vector<int>(3, 300));
	ft::vector< ft::vector< int > >		my_vector2(6, ft::vector<int>(3, 500));

	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n");

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

	vector1.swap(vector2);
	my_vector1.swap(my_vector2);

	PRINT("\e[1;32m" << "AFTER SWAP:\n" << "\e[0m");


	PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
	PRINT("vector1.capacity() = " << vector1.capacity());
	PRINT(std::setw(56) << "my_vector1.capacity() = " << my_vector1.capacity());
	PRINT("\n");
	PRINT("vector1.size() = " << vector1.size());
	PRINT(std::setw(56) << "my_vector1.size() = " << my_vector1.size());
	PRINT("\n");

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
}


void 		test_swap()
{
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m                 \e[1;35mSWAP\e[0m                  \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n\n");

	test_swap_int();
	test_swap_vector();
}

void 		test_reverse_begin_end()
{
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m                \e[1;35mRBEGIN\e[0m                 \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m                 \e[1;35mREND\e[0m                  \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n\n");

	test_begin_end_int();
	test_rbegin_rend_int();
}

void 		test_methods()
{
	test_swap();
	test_reverse_begin_end();
}