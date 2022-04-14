#include "MyClass.hpp"

MyClass::MyClass() : _name("MyClass")
{
}

MyClass::MyClass(std::string const &name) : _name(name)
{
}

MyClass::~MyClass()
{
}

MyClass::MyClass(MyClass const &o) : _name(o._name)
{
	*this = o;
}

MyClass					&MyClass::operator=(MyClass const &o)
{
	static int 	i = 1;

	(void)o;
	std::cout << i << std::endl;
	if (i++ % 15 == 0) // 7, 8, 9 - exception for vector, 10, 11, 12 - exception for my_vector
	{
		throw std::out_of_range("* * * * * EXCEPTION * * * * *");
	}
	return *this;
}

std::string const		&MyClass::getName() const
{
	return _name;
}

std::ostream 				&operator<<(std::ostream &os, MyClass const &o)
{
	os << "\e[1;37m" << o.getName() << ", kukusiki!" << "\e[0m" << std::endl;
	return (os);
}