#include <iostream>
#include <string>
#include <iomanip>

#include <vector>
#include "../../containers/vector.hpp"
#include "../Array.hpp"
#include "../MyClass.hpp"

# define PRINT(x) std::cout << x

void 		test_empty_constructor()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");
	PRINT(std::setw(40) << "\e[1;36m" << "DEFAULT CONSTRUCTOR" << "\e[0m");
	PRINT("\n\n");

	{
		std::vector<int>		vector;
		ft::vector<int>			my_vector;

		PRINT("\e[1;33m" << "DEFAULT CONSTRUCTOR FOR INT" << "\e[0m" << "\n");
		PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n\n");
	}


	{
		std::vector<std::string>	vector;
		ft::vector<std::string>		my_vector;

		PRINT("\e[1;33m" << "DEFAULT CONSTRUCTOR FOR STD::STRING" << "\e[0m" << "\n");
		PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n\n");
	}

	{
		std::vector< Array<int> >	vector;
		ft::vector< Array<int> >	my_vector;

		PRINT("\e[1;33m" << "DEFAULT CONSTRUCTOR FOR CLASS" << "\e[0m" << "\n");
		PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n\n");
	}

	{
		std::vector< std::vector<int> >	vector;
		ft::vector< ft::vector<int> >	my_vector;

		PRINT("\e[1;33m" << "DEFAULT CONSTRUCTOR FOR CONTAINER VECTOR" << "\e[0m" << "\n");
		PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n\n");
	}

	{
		std::vector< std::vector<int>* >	vector;
		ft::vector< ft::vector<int>* >		my_vector;

		PRINT("\e[1;33m" << "DEFAULT CONSTRUCTOR FOR ARRAY OF CONTAINER VECTOR" << "\e[0m" << "\n");
		PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n\n");
	}
}

void 		test_size_constructor()
{
	PRINT("\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");
	PRINT(std::setw(39) << "\e[1;36m" << "SIZE_TYPE CONSTRUCTOR" << "\e[0m");
	PRINT("\n\n");

	{
		std::vector<int> vector(3, 100);
		ft::vector<int> my_vector(3, 100);

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR INT" << "\e[0m" << "\n");
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

		PRINT(std::setw(45));

		for (size_t i = 0; i < my_vector.size(); ++i) {
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");
	}


	{
		std::vector<std::string> vector(3, "Hello");
		ft::vector<std::string> my_vector(3, "Hello");

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR STD::STRING" << "\e[0m" << "\n");
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

		PRINT(std::setw(41));

		for (size_t i = 0; i < my_vector.size(); ++i)
			PRINT(my_vector.at(i) << " ");
		PRINT("\n\n");
	}

	{
		std::vector<Array<int> > vector(3, Array<int>(0));
		ft::vector<Array<int> > my_vector(3, Array<int>(0));

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR CLASS" << "\e[0m" << "\n");
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
			Array<int> array = vector.at(i);

			for (size_t j = 0; j < array.size(); ++j)
				PRINT(array[j] << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			Array<int> array = my_vector.at(i);
			PRINT(std::setw(55));
			for (size_t j = 0; j < array.size(); ++j)
				PRINT(array[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");
	}

	{
		std::vector<std::vector<int> > vector(4, std::vector<int>(3, 100));
		ft::vector<ft::vector<int> > my_vector(4, ft::vector<int>(3, 100));

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR CONTAINER VECTOR" << "\e[0m" << "\n");
		PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
		{
			std::vector<int> vector1 = vector.at(i);

			for (size_t j = 0; j < vector1.size(); ++j)
				PRINT(vector1.at(j) << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			ft::vector<int> my_vector1 = my_vector.at(i);
			PRINT(std::setw(57));
			for (size_t j = 0; j < my_vector1.size(); ++j)
				PRINT(my_vector1.at(j) << " ");
			PRINT("\n");
		}
		PRINT("\n\n");
	}

	{
		PRINT("\e[1;33m" << "EXCEPTION" << "\e[0m" << "\n");
		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");
		try
		{
			std::vector<MyClass>			vector(15, MyClass("Valera"));
			PRINT("\e[1;32m" << "vector OK\n" << "\e[0m");
		}
		catch (std::exception &e)
		{
			PRINT("vector: " << "\e[1;31m" <<  e.what() << "\e[0m" <<  "\n");
		}

		try
		{
			ft::vector<MyClass>			my_vector(15, MyClass("MyValera"));
			PRINT("\e[1;32m" << "my_vector OK\n" << "\e[0m");
		}
		catch (std::exception &e)
		{
			PRINT("my_vector: " << "\e[1;31m" << e.what() << "\e[0m" << "\n");
		}
		PRINT("\n\n");
	}
}

void 		test_iterator_constructor()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");
	PRINT(std::setw(39) << "\e[1;36m" << "ITERATOR CONSTRUCTOR" << "\e[0m");
	PRINT("\n\n");

	{
		std::vector<int>		vector_int(3, 100);
		ft::vector<int>			my_vector_int(3, 100);

		std::vector<int>		vector(vector_int.begin(), vector_int.end());
		ft::vector<int>			my_vector(my_vector_int.begin(), my_vector_int.end());

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR INT" << "\e[0m" << "\n");
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

		PRINT(std::setw(45));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");
	}


	{
		std::vector<std::string>		vector_string(3, "Hello");
		ft::vector<std::string>			my_vector_string(3, "Hello");

		std::vector<std::string>	vector(vector_string.begin(), vector_string.end());
		ft::vector<std::string>		my_vector(my_vector_string.begin(), my_vector_string.end());

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR STD::STRING" << "\e[0m" << "\n");
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

		PRINT(std::setw(41));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");
	}

	{

		std::vector< Array<int> >		vector_array(3, Array<int>(0));
		ft::vector< Array<int> >		my_vector_array(3, Array<int>(0));

		std::vector< Array<int> >	vector(vector_array.begin(), vector_array.end());
		ft::vector< Array<int> >	my_vector(my_vector_array.begin(), my_vector_array.end());

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR CLASS" << "\e[0m" << "\n");
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
			Array<int>	array = vector.at(i);

			for(size_t j = 0; j < array.size(); ++j)
				PRINT(array[j] << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			Array<int>	array = my_vector.at(i);
			PRINT(std::setw(55));
			for(size_t j = 0; j < array.size(); ++j)
				PRINT(array[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");
	}

	{

		std::vector< std::vector<int> >	vector_vector(4, std::vector<int>(3, 100));
		ft::vector< ft::vector<int> >	my_vector_vector(4, ft::vector<int>(3, 100));

		std::vector< std::vector<int> >	vector(vector_vector.begin(), vector_vector.end());
		ft::vector< ft::vector<int> >	my_vector(my_vector_vector.begin(), my_vector_vector.end());

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR CONTAINER VECTOR" << "\e[0m" << "\n");
		PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
		{
			std::vector<int>	vector1 = vector.at(i);

			for(size_t j = 0; j < vector1.size(); ++j)
				PRINT(vector1.at(j) << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			ft::vector<int>		my_vector1 = my_vector.at(i);
			PRINT(std::setw(57));
			for (size_t j = 0; j < my_vector1.size(); ++j)
				PRINT(my_vector1.at(j) << " ");
			PRINT("\n");
		}
		PRINT("\n\n");
	}

	{
		PRINT("\e[1;33m" << "EXCEPTION" << "\e[0m" << "\n");
		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		try
		{
			std::vector< MyClass >		vector_vector(8, MyClass("Valera"));
			PRINT("\e[1;32m" << "vector OK!\n" << "\e[0m");

			std::vector<MyClass>		vector(vector_vector.begin(), vector_vector.end());
			PRINT("\e[1;32m" << "vector OK\n" << "\e[0m");
		}
		catch (std::exception &e)
		{
			PRINT("vector: " << "\e[1;31m" << e.what() << "\e[0m" << "\n");
		}

		try
		{
			ft::vector< MyClass >		my_vector_vector(8, MyClass("MyValera"));
			PRINT("\e[1;32m" << "my_vector OK!\n" << "\e[0m");

			ft::vector<MyClass>		my_vector(my_vector_vector.begin(), my_vector_vector.end());
			PRINT("\e[1;32m" << "my_vector OK\n" << "\e[0m");

		}
		catch (std::exception &e)
		{
			PRINT("my_vector: " << "\e[1;31m" << e.what() << "\e[0m" << "\n");
		}
		PRINT("\n\n");
	}
}

void 		test_copy_constructor()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");
	PRINT(std::setw(42) << "\e[1;36m" << "COPY CONSTRUCTOR" << "\e[0m");
	PRINT("\n\n");

	{
		std::vector<int>		vector_int(3, 100);
		ft::vector<int>			my_vector_int(3, 100);

		std::vector<int>		vector(vector_int);
		ft::vector<int>			my_vector(my_vector_int);

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR INT" << "\e[0m" << "\n");
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

		PRINT(std::setw(45));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");
	}


	{
		std::vector<std::string>		vector_string(3, "Hello");
		ft::vector<std::string>			my_vector_string(3, "Hello");

		std::vector<std::string>	vector(vector_string);
		ft::vector<std::string>		my_vector(my_vector_string);

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR STD::STRING" << "\e[0m" << "\n");
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

		PRINT(std::setw(41));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");
	}

	{

		std::vector< Array<int> >		vector_array(3, Array<int>(0));
		ft::vector< Array<int> >		my_vector_array(3, Array<int>(0));

		std::vector< Array<int> >	vector(vector_array);
		ft::vector< Array<int> >	my_vector(my_vector_array);

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR CLASS" << "\e[0m" << "\n");
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
			Array<int>	array = vector.at(i);

			for(size_t j = 0; j < array.size(); ++j)
				PRINT(array[j] << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			Array<int>	array = my_vector.at(i);
			PRINT(std::setw(55));
			for(size_t j = 0; j < array.size(); ++j)
				PRINT(array[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");
	}

	{

		std::vector< std::vector<int> >	vector_vector(4, std::vector<int>(3, 100));
		ft::vector< ft::vector<int> >	my_vector_vector(4, ft::vector<int>(3, 100));

		std::vector< std::vector<int> >	vector(vector_vector);
		ft::vector< ft::vector<int> >	my_vector(my_vector_vector);

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR CONTAINER VECTOR" << "\e[0m" << "\n");
		PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
		{
			std::vector<int>	vector1 = vector.at(i);

			for(size_t j = 0; j < vector1.size(); ++j)
				PRINT(vector1.at(j) << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			ft::vector<int>		my_vector1 = my_vector.at(i);
			PRINT(std::setw(57));
			for (size_t j = 0; j < my_vector1.size(); ++j)
				PRINT(my_vector1.at(j) << " ");
			PRINT("\n");
		}
		PRINT("\n\n");
	}


	{
		PRINT("\e[1;33m" << "EXCEPTION" << "\e[0m" << "\n");
		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		try
		{
			std::vector< MyClass >			vector_vector(8, MyClass("Valera"));
			PRINT("\e[1;32m" << "vector OK!\n" << "\e[0m");

			std::vector< MyClass >			vector(vector_vector);
			PRINT("\e[1;32m" << "vector OK\n" << "\e[0m");
		}
		catch (std::exception &e)
		{
			PRINT("vector: "<< "\e[1;31m" << e.what() << "\e[0m" << "\n");
		}

		try
		{
			ft::vector< MyClass >			my_vector_vector(8, MyClass("MyValera"));
			PRINT("\e[1;32m" << "my_vector OK!\n" << "\e[0m");

			ft::vector<MyClass>				my_vector(my_vector_vector);
			PRINT("\e[1;32m" << "my_vector OK\n" << "\e[0m");
		}
		catch (std::exception &e)
		{
			PRINT("my_vector: " << "\e[1;31m" << e.what() << "\e[0m" << "\n");
		}
		PRINT("\n\n");
	}
}

void 		test_assignation_operator()
{
	PRINT( "\e[1;33m" << "* * * * * VECTOR_TEST * * * * *" << "\e[0m");
	PRINT(std::setw(30) << "\e[1;33m" << "* * * * * MY_VECTOR_TEST * * * * *" << "\e[0m");
	PRINT("\n\n");
	PRINT(std::setw(39) << "\e[1;36m" << "ASSIGNATION  OPERATOR" << "\e[0m");
	PRINT("\n\n");

	{
		std::vector<int>		vector_int(3, 100);
		ft::vector<int>			my_vector_int(3, 100);

		std::vector<int>		vector(vector_int);
		ft::vector<int>			my_vector(my_vector_int);

		vector = std::vector<int>(5, 500);
		my_vector = ft::vector<int>(5, 500);

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR INT" << "\e[0m" << "\n");
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

		PRINT(std::setw(37));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");
	}


	{
		std::vector<std::string>		vector_string(3, "Hello");
		ft::vector<std::string>			my_vector_string(3, "Hello");

		std::vector<std::string>		vector(vector_string);
		ft::vector<std::string>			my_vector(my_vector_string);

		vector = std::vector< std::string >(7, "World");
		my_vector = ft::vector< std::string >(7, "World");

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR STD::STRING" << "\e[0m" << "\n");
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

		PRINT(std::setw(17));

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			PRINT(my_vector.at(i) << " ");
		}
		PRINT("\n\n");
	}

	{

		std::vector< Array<int> >		vector_array(3, Array<int>(0));
		ft::vector< Array<int> >		my_vector_array(3, Array<int>(0));

		std::vector< Array<int> >		vector(vector_array);
		ft::vector< Array<int> >		my_vector(my_vector_array);

		vector = std::vector< Array<int> >(7, Array<int>(1) );
		my_vector = ft::vector< Array<int> >(7, Array<int>(1) );

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR CLASS" << "\e[0m" << "\n");
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
			Array<int>	array = vector.at(i);

			for(size_t j = 0; j < array.size(); ++j)
				PRINT(array[j] << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			Array<int>	array = my_vector.at(i);
			PRINT(std::setw(55));
			for(size_t j = 0; j < array.size(); ++j)
				PRINT(array[j] << " ");
			PRINT("\n");
		}
		PRINT("\n\n");
	}

	{

		std::vector< std::vector<int> >	vector_vector(4, std::vector<int>(3, 100));
		ft::vector< ft::vector<int> >	my_vector_vector(4, ft::vector<int>(3, 100));

		std::vector< std::vector<int> >	vector(vector_vector);
		ft::vector< ft::vector<int> >	my_vector(my_vector_vector);

		vector = std::vector< std::vector<int> >(7, std::vector<int>(5, 500));
		my_vector = ft::vector< ft::vector<int> >(7, ft::vector<int>(5, 500));

		PRINT("\e[1;33m" << "CONSTRUCTOR FOR CONTAINER VECTOR" << "\e[0m" << "\n");
		PRINT("\e[1;32m" << "CAPACITY AND SIZE VECTOR:\n" << "\e[0m");
		PRINT("vector.capacity() = " << vector.capacity());
		PRINT(std::setw(56) << "my_vector.capacity() = " << my_vector.capacity());
		PRINT("\n");
		PRINT("vector.size() = " << vector.size());
		PRINT(std::setw(56) << "my_vector.size() = " << my_vector.size());
		PRINT("\n");

		for (size_t i = 0; i < vector.size(); ++i)
		{
			std::vector<int>	vector1 = vector.at(i);

			for(size_t j = 0; j < vector1.size(); ++j)
				PRINT(vector1.at(j) << " ");
			PRINT("\n");
		}

		for (size_t i = 0; i < my_vector.size(); ++i)
		{
			ft::vector<int>		my_vector1 = my_vector.at(i);
			PRINT(std::setw(57));
			for (size_t j = 0; j < my_vector1.size(); ++j)
				PRINT(my_vector1.at(j) << " ");
			PRINT("\n");
		}
		PRINT("\n\n");
	}

	{
		PRINT("\e[1;33m" << "EXCEPTION" << "\e[0m" << "\n");
		PRINT("vector");
		PRINT(std::setw(57) << "my_vector");
		PRINT("\n");

		try
		{
			std::vector< MyClass >			vector_vector(8, MyClass("Valera"));
			PRINT("\e[1;32m" << "vector OK!\n" << "\e[0m");

			std::vector< MyClass >			vector;

			vector = vector_vector;
			PRINT("\e[1;32m" << "vector OK\n" << "\e[0m");
		}
		catch (std::exception &e)
		{
			PRINT("vector: " << "\e[1;31m" << e.what() << "\e[0m" << "\n");
		}

		try
		{
			ft::vector< MyClass >			my_vector_vector(8, MyClass("MyValera"));
			PRINT("\e[1;32m" << "my_vector OK!\n" << "\e[0m");

			ft::vector<MyClass>				my_vector;

			my_vector = my_vector_vector;
			PRINT("\e[1;32m" << "my_vector OK\n" << "\e[0m");
		}
		catch (std::exception &e)
		{
			PRINT("my_vector: " << "\e[1;31m" << e.what() << "\e[0m" << "\n");
		}
		PRINT("\n\n");
	}
}

void		test_constr_assign_operator()
{
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m             \e[1;35mCONSTRUCTORS\e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m           \e[1;35mCOPY CONSTRUCTOR\e[0m            \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m         \e[1;35mASSIGNATION OPERATOR\e[0m          \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n\n");

//	std::string		*a = new std::string;
//
//	(void)a;

	test_empty_constructor();
	test_size_constructor();
	test_iterator_constructor();
	test_copy_constructor();
	test_assignation_operator();
}