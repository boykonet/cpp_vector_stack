#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T>
class		Array
{
private:
	Array();
	static const unsigned int	_n = 5;
	T							_array[5];

public:
	Array(T elem);
	~Array();
	Array(Array<T> const &o);
	Array<T>&				operator=(Array<T> const &o);
	T&						operator[](unsigned int n);
	T const&				operator[](unsigned int n) const;
	unsigned int			size() const;
};

template< typename T >
bool 	operator==(Array<T> const &x, Array<T> const &y)
{
	if (x.size() == 0 && y.size() == 0)
		return true;
	if (x.size() == y.size())
	{
		for (size_t i = 0; i < x.size(); ++i)
			if (x[i] != y[i])
				return false;
	}
	return true;
}

template< typename T >
bool 	operator!=(Array<T> const &x, Array<T> const &y)
{
	return !(x == y);
}

template< typename T >
bool			operator<(Array<T> const &x, Array<T> const &y)
{
	size_t		size;

	if (x != y)
	{
		size = x.size();
		for (size_t i = 0; i < size; ++i)
		{
			if (x[i] < y[i])
				return true;
		}
	}
	return false;
}

template< typename T >
bool			operator>(Array<T> const &x, Array<T> const &y)
{
	return y < x;
}

template< typename T >
bool			operator>=(Array<T> const &x, Array<T> const &y)
{
	return !(x < y);
}

template< typename T >
bool			operator<=(Array<T> const &x, Array<T> const &y)
{
	return !(y < x);
}

template <typename T>
Array<T>::Array(T elem)
{
	for (unsigned int i = 0; i < this->_n; i++)
		this->_array[i] = elem;
}

template <typename T>
Array<T>::~Array()
{
}

template <typename T>
Array<T>::Array(Array<T> const &o)
{
	*this = o;
}

template <typename T>
Array<T>				&Array<T>::operator=(Array<T> const &o)
{
	if (this != &o)
	{
		for (unsigned int i = 0; i < this->_n; i++)
			this->_array[i] = o._array[i];
	}
	return *this;
}

template <typename T>
T						&Array<T>::operator[](unsigned int n)
{
	if (n < 0 || n >= this->_n)
		throw std::out_of_range("* * * * * O V E R F L O W * * * * *");
	return static_cast<T &>(this->_array[n]);
}

template <typename T>
T const&				Array<T>::operator[](unsigned int n) const
{
	if (n < 0 || n >= this->_n)
		throw std::out_of_range("* * * * * O V E R F L O W * * * * *");
	return static_cast<T const &>(this->_array[n]);
}

template <typename T>
unsigned int			Array<T>::size() const
{
	return this->_n;
}

#endif