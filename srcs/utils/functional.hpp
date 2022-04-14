#ifndef MY_FUNCTIONAL_HPP
# define MY_FUNCTIONAL_HPP

# include <iostream>
# include <string>

namespace	ft
{
	template< typename T >
	struct		less
	{
	public:
		// Member types
		typedef bool 		result_type;
		typedef T			first_argument_type;
		typedef T			second_argument_type;
	public:
		// Member function
		result_type 	operator()(	first_argument_type const &lhs,
									second_argument_type const &rhs) const
		{
			return lhs < rhs;
		}
	};
}

#endif