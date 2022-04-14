#ifndef MY_RANDOM_ACCESS_ITERATOR_HPP
# define MY_RANDOM_ACCESS_ITERATOR_HPP

# include <iostream>

//class 		bidirectional_iterator;

//# include "bidirectional_iterator.hpp"
# include "type_traits.hpp"
# include "iterator_tags.hpp"
# include "iterator_traits.hpp"

namespace ft
{
	template< typename T, typename NonConst >
	class		random_access_iterator// : public ft::bidirectional_iterator< T, NonConst >
	{
	public:
		typedef typename ft::iterator_traits< T >::value_type			value_type;
		typedef typename ft::iterator_traits< T >::pointer				pointer;
		typedef typename ft::iterator_traits< T >::reference			reference;
		typedef typename ft::iterator_traits< T >::difference_type		difference_type;
		typedef typename ft::iterator_traits< T >::iterator_category	iterator_category;

	private:
		pointer		_ptr;

	public:
		// Default constructor
		random_access_iterator()
		: _ptr(NULL)
		{
		}

		// Constructor for pointer
		random_access_iterator(value_type* p)
		: _ptr(p)
		{
		}

		// Copy constructor
		random_access_iterator(random_access_iterator const &it)
		: _ptr(NULL)
		{
			*this = it;
		}

		// Copy constructor
		template< typename U >
		random_access_iterator(random_access_iterator< U, NonConst > const &it,
							   typename ft::is_same< U, NonConst >::type* = NULL)
		: _ptr(it.base())
		{
		}


		// Destructor
		virtual ~random_access_iterator()
		{
		}


		// Assignation operator
		random_access_iterator&		operator=(random_access_iterator const &it)
		{
			if (this != &it)
				_ptr = it._ptr;
			return *this;
		}


		pointer 					base() const
		{
			return _ptr;
		}

		reference					operator*()
		{
			return *_ptr;
		}

		reference					operator*() const
		{
			return *_ptr;
		}

		pointer						operator->()
		{
			return _ptr;
		}

		pointer						operator->() const
		{
			return _ptr;
		}

		random_access_iterator&		operator++()
		{
			++_ptr;
			return *this;
		}

		random_access_iterator		operator++(int)
		{
			random_access_iterator	tmp(*this);

			++_ptr;
			return tmp;
		}

		random_access_iterator&		operator--()
		{
			--_ptr;
			return *this;
		}

		random_access_iterator		operator--(int)
		{
			random_access_iterator	tmp(*this);

			--_ptr;
			return tmp;
		}

		random_access_iterator		operator+(int num)
		{
			random_access_iterator	tmp = *this;

			return tmp += num;
		}

		random_access_iterator&		operator+=(int num)
		{
			difference_type m = num;

			if (m >= 0)
			{
				while(m--)
					++(*this);
			}
			else
			{
				while(m++)
					--(*this);
			}
			return *this;
		}

		random_access_iterator		operator-(int num)
		{
			random_access_iterator	tmp = *this;

			return tmp -= num;
		}

		random_access_iterator&		operator-=(int num)
		{
			return *this += -num;
		}

		reference 					operator[](size_t num)
		{
			return *(_ptr + num);
		}

		reference 					operator[](size_t num) const
		{
			return *(_ptr + num);
		}
	};

	/********************************************************************************/
	/*								overload operators								*/
	/* for same types used first overload operator,									*/
	/* for example: (Iterator && Iterator) || (const Iterator && const Iterator)	*/
	/* for difference types used second overload operator,							*/
	/* for example: (Iterator && const Iterator) || (const Iterator && Iterator)	*/
	/********************************************************************************/

	template< typename T1, typename NonConst1, typename T2, typename NonConst2 >
	bool		operator==(	ft::random_access_iterator< T1, NonConst1 > const &x,
							ft::random_access_iterator< T2, NonConst2 > const &y)
	{
		if (x.operator->() == y.operator->())
			return true;
		return false;
	}

	template< typename T1, typename NonConst1, typename T2, typename NonConst2 >
	bool		operator!=(	ft::random_access_iterator< T1, NonConst1 > const &x,
							ft::random_access_iterator< T2, NonConst2 > const &y)
	{
		return !(x == y);
	}

	template< typename T1, typename NonConst1, typename T2, typename NonConst2 >
	bool		operator<(	ft::random_access_iterator< T1, NonConst1 > const &x,
							ft::random_access_iterator< T2, NonConst2 > const &y)
	{
		if (*x < *y)
			return true;
		return false;
	}

	template< typename T1, typename NonConst1, typename T2, typename NonConst2 >
	bool		operator<=(	ft::random_access_iterator< T1, NonConst1 > const &x,
							ft::random_access_iterator< T2, NonConst2 > const &y)
	{
		return !(y < x);
	}

	template< typename T1, typename NonConst1, typename T2, typename NonConst2 >
	bool		operator>(	ft::random_access_iterator< T1, NonConst1 > const &x,
							ft::random_access_iterator< T2, NonConst2 > const &y)
	{
		return y < x;
	}

	template< typename T1, typename NonConst1, typename T2, typename NonConst2 >
	bool		operator>=(	ft::random_access_iterator< T1, NonConst1 > const &x,
							ft::random_access_iterator< T2, NonConst2 > const &y)
	{
		return !(x < y);
	}

	template< typename T1, typename NonConst1, typename T2, typename NonConst2 >
	typename random_access_iterator::difference_type
	operator-(	ft::random_access_iterator< T1, NonConst1 > const &x,
				ft::random_access_iterator< T2, NonConst2 > const &y)
	{
		return x.operator->() - y.operator->();
	}
}

#endif
