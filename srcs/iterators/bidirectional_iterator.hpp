#ifndef MY_BIDIRECTIONAL_ITERATOR_HPP
# define MY_BIDIRECTIONAL_ITERATOR_HPP

# include <iostream>
# include <string>

# include "type_traits.hpp"
# include "iterator_traits.hpp"
# include "NodeList.hpp"

namespace ft
{
	template< typename T, typename NonConst >
	class		bidirectional_iterator
	{
	public:
		typedef typename ft::iterator_traits< T >::value_type			value_type;
		typedef typename ft::iterator_traits< T >::pointer				pointer;
		typedef typename ft::iterator_traits< T >::reference			reference;
		typedef typename ft::iterator_traits< T >::difference_type		difference_type;
		typedef typename ft::iterator_traits< T >::iterator_category	iterator_category;

	private:
		NodeList< T >		*_ptr;

	public:
		// Constructor
		bidirectional_iterator()
		: _ptr(NULL)
		{
		}

		// Constructor
		bidirectional_iterator(pointer ptr)
		: _ptr(ptr)
		{
		}

		// Copy constructor
		bidirectional_iterator(bidirectional_iterator const &it)
		: _ptr(it.base())
		{
			*this = it;
		}

		// Copy constructor
		template< typename U >
		bidirectional_iterator(	bidirectional_iterator< U, NonConst > const &it,
						 		typename ft::is_same< U, NonConst >::type* = NULL)
		: _ptr(it.base())
		{
			*this = it;
		}


		// Destructor
		virtual ~bidirectional_iterator()
		{
		}


		// Assignation operator
		bidirectional_iterator&				operator=(bidirectional_iterator const &it)
		{
			if (this != &it)
				_ptr = it._ptr;
			return *this;
		}

		pointer								base()
		{
			return _ptr;
		}

		pointer								base() const
		{
			return _ptr;
		}

		// *
		reference							operator*()
		{
			return _ptr->data;
		}

		reference							operator*() const
		{
			return _ptr->data;
		}

		// ->
		pointer								operator->()
		{
			return _ptr;
		}

		pointer								operator->() const
		{
			return _ptr;
		}

		// ++_ptr
		bidirectional_iterator&				operator++()
		{
			_ptr->left;
			return *this;
		}


		// _ptr++
		bidirectional_iterator 				operator++(int)
		{
			bidirectional_iterator			tmp = *this;

			_ptr->left;
			return tmp;
		}


		// --_ptr
		bidirectional_iterator&				operator--()
		{
			_ptr->parent;
			return *this;
		}


		// _ptr--
		bidirectional_iterator const		operator--(int)
		{
			bidirectional_iterator			tmp = *this;

			_ptr->parent;
			return tmp;
		}

		// ==
		friend bool		operator==(	bidirectional_iterator const &x,
									bidirectional_iterator const &y)
		{
			if (x.operator->() == y.operator->())
				return true;
			return false;
		}

		// !=
		friend bool		operator!=( bidirectional_iterator const &x,
									bidirectional_iterator const &y )
		{
			return !(x == y);
		}
	};
}



#endif
