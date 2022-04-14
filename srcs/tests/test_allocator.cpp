#include <iostream>

#include "allocator.hpp"

# define PRINT(x) std::cout << x << std::endl

int 		main()
{
	int 				*valera;
	int 				*a;
	const int 			*b;
	allocator<int>		alloc;

	PRINT("Test for allocator:");
	PRINT("max_size() = " << alloc.max_size());
	valera = alloc.allocate(50);
	PRINT("Print array:");
	for (int i = 0; i < 50; ++i)
	{
		valera[i] = i;
		std::cout << valera[i] << " ";
	}
	std::cout << std::endl;
	b = alloc.address(static_cast<const int>(valera[0]));
	a = alloc.address(valera[0]);
	PRINT("address - pointer and const pointer:");
	PRINT("a == 0");
	PRINT(a);
	PRINT(b);
	PRINT("a = 5");
	*a = 5;
	PRINT(a);
	PRINT(b);
	PRINT(valera[0]);
	alloc.deallocate(valera, 50);
}