#ifndef MY_PAIR_HPP
# define MY_PAIR_HPP

# include <iostream>
# include <string>

namespace	ft
{
	template< typename F, typename S >
	struct		pair
	{
	public:
		typedef F			first_type;
		typedef S			second_type;

	public:
		first_type			first;
		second_type			second;

	public:
		// Constructor
		pair()
		: first(),
		second()
		{
		}

		// Constructor
		template< typename U, typename V >
		pair(pair< U, V > const &pr)
		: _first(pr.first),
		_second(pr.second)
		{
			*this = pr;
		}

		// Constructor
		pair(first_type const &f, second_type const &s)
		: first(f),
		second(s)
		{
		}

		// Assignation operator
		pair& 			operator=(pair const &pr)
		{
			if (this != &pr)
			{
				first = pr.first;
				second = pr.second;
			}
			return *this;
		}
	};

	// Non-member function overloads
	template< typename T1, typename T2 >
	bool			operator==(pair< T1, T2 > const &lhs, pair< T1, T2 > const &rhs)
	{
		return (lhs.first == rhs.first) && (lhs.second == rhs.second);
	}

	template< typename T1, typename T2 >
	bool			operator!=(pair< T1, T2 > const &lhs, pair< T1, T2 > const &rhs)
	{
		return !(lhs == rhs);
	}

	template< typename T1, typename T2 >
	bool			operator<(pair< T1, T2 > const &lhs, pair< T1, T2 > const &rhs)
	{
		return lhs.first < rhs.first || (!(rhs.first < lhs.first) && lhs.second < rhs.second);
	}

	template< typename T1, typename T2 >
	bool			operator<=(pair< T1, T2 > const &lhs, pair< T1, T2 > const &rhs)
	{
		return !(rhs < lhs);
	}

	template< typename T1, typename T2 >
	bool			operator>(pair< T1, T2 > const &lhs, pair< T1, T2 > const &rhs)
	{
		return rhs < lhs;
	}

	template< typename T1, typename T2 >
	bool			operator>=(pair< T1, T2 > const &lhs, pair< T1, T2 > const &rhs)
	{
		return !(lhs < rhs);
	}
}

#endif