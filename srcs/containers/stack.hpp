#ifndef MY_CONTAINER_STACK_HPP
# define MY_CONTAINER_STACK_HPP

# include <iostream>
# include <string>

# include "vector.hpp"

namespace	ft
{
	template< typename T, typename Container = ft::vector< T > >
class		stack
	{
	public:
		typedef typename Container::value_type			value_type;
		typedef typename Container::size_type			size_type;
		typedef	Container								container_type;
	protected:
		Container		c;
	public:
		explicit stack(Container const& = Container())
		: c()
		{
		}

		bool				empty() const
		{
			return c.empty();
		}

		size_type			size() const
		{
			return c.size();
		}

		value_type&			top()
		{
			return c.back();
		}

		value_type const&	top() const
		{
			return c.back();
		}

		void				push(value_type const &x)
		{
			c.push_back(x);
		}

		void				pop()
		{
			c.pop_back();
		}
	};

	template< typename T, typename Container >
	bool				operator==(stack< T, Container > const& x, stack< T, Container > const& y)
	{
		if (x.size() != y.size())
			return false;
		if (x.size() == y.size())
		{
			for (size_t i = 0; i < x.size(); ++i)
			{
				if (x.c != y.c)
					return false;
			}
		}
		return true;
	}

	template< typename T, typename Container >
	bool				operator<(stack< T, Container > const& x, stack< T, Container > const& y)
	{
		if (x != y)
		{
			for (size_t i = 0; i < x.size(); ++i)
			{
				if (x.c < y.c)
					return true;
			}
		}
		return false;
	}

	template< typename T, typename Container >
	bool				operator!=(stack< T, Container > const& x, stack< T, Container > const& y)
	{
		return !(x == y);
	}

	template< typename T, typename Container >
	bool				operator>(stack< T, Container > const& x, stack< T, Container > const& y)
	{
		return y < x;
	}

	template< typename T, typename Container >
	bool				operator>=(stack< T, Container > const& x, stack< T, Container > const& y)
	{
		return !(x < y);
	}

	template< typename T, typename Container >
	bool				operator<=(stack< T, Container > const& x, stack< T, Container > const& y)
	{
		return !(y < x);
	}
}

#endif
