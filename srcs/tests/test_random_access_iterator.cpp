#include <iostream>
#include <vector>

# include "random_access_iterator.hpp"
# include "vector.hpp"

# define PRINT(x) std::cout << x

int 		main()
{
	std::vector<int>		valera;
	ft::vector<int>			alina;


	valera.push_back(1);
	valera.push_back(2);
	valera.push_back(3);
	valera.push_back(4);
	valera.push_back(4);
	valera.push_back(3);
	valera.push_back(2);
	valera.push_back(1);

	alina.push_back(1);
	alina.push_back(2);
	alina.push_back(3);
	alina.push_back(4);
	alina.push_back(4);
	alina.push_back(3);
	alina.push_back(2);
	alina.push_back(1);

	std::vector<int>::iterator		it1 = valera.;
	std::vector<int>::iterator		it2;
	std::vector<int>::const_iterator c_it1;
	std::vector<int>::const_iterator c_it2;

	ft::vector<int>::iterator		my_it1 = alina.begin();
	ft::vector<int>::iterator		my_it2;
	ft::vector<int>::const_iterator my_c_it1;
	ft::vector<int>::const_iterator my_c_it2;

	it1 = valera.begin();
	it2 = valera.begin();

	my_it2 = alina.begin();

	if (it1 == it2)
		PRINT("==");
	else
		PRINT("!=");
	PRINT("\n");


	if (my_it1 == my_it2)
		PRINT("==");
	else
		PRINT("!=");
	PRINT("\n");

	it1 += 3;
	PRINT(*it1);
	it2 += 4;
	PRINT(*it2);
	PRINT("\n");

	my_it1 += 3;
	PRINT(*my_it1);
	my_it2 += 4;
	PRINT(*my_it2);
	PRINT("\n");

	if (it1 == it2)
		PRINT("==");
	else
		PRINT("!=");
	PRINT("\n");

	if (my_it1 == my_it2)
		PRINT("==");
	else
		PRINT("!=");
	PRINT("\n");


	it1 -= 3;
	PRINT(*it1);
	it2 -= 4;
	PRINT(*it2);
	PRINT("\n");

	my_it1 -= 3;
	PRINT(*my_it1);
	my_it2 -= 4;
	PRINT(*my_it2);
	PRINT("\n");

	if (it1 == it2)
		PRINT("==");
	else
		PRINT("!=");
	PRINT("\n");

	if (my_it1 == my_it2)
		PRINT("==");
	else
		PRINT("!=");
	PRINT("\n");

	++my_it1;
	PRINT("my_it1 = " << *my_it1);
	PRINT("\n");
	my_it1 += 3;
	PRINT("my_it1 = " << *my_it1);
	PRINT("\n");
	PRINT("my_it2 = " << *my_it2);
	PRINT("\n");
	PRINT("differ = " << my_it1 - my_it2);
	PRINT("\n");

	for (int i = 0; i < 8; ++i)
		PRINT(my_it2[i] << " ");
	PRINT("\n");

}