#ifndef MY_ITERATOR_TRAITS_HPP
# define MY_ITERATOR_TRAITS_HPP

#include "iterator_tags.hpp"

namespace	ft
{
	template< typename Iterator >
	struct		iterator_traits
	{
		typedef typename Iterator::difference_type		difference_type;
		typedef typename Iterator::value_type			value_type;
		typedef typename Iterator::pointer				pointer;
		typedef typename Iterator::reference			reference;
		typedef typename Iterator::iterator_category	iterator_category;
	};

	template< typename T >
	struct		iterator_traits< T* >
	{
		typedef ptrdiff_t								difference_type;
		typedef T										value_type;
		typedef value_type*								pointer;
		typedef value_type&								reference;
		typedef std::random_access_iterator_tag			iterator_category;
	};

	template< typename T >
	struct		iterator_traits< const T* >
	{
		typedef ptrdiff_t								difference_type;
		typedef T										value_type;
		typedef const value_type*						pointer;
		typedef const value_type&						reference;
		typedef std::random_access_iterator_tag			iterator_category;
	};

}

#endif