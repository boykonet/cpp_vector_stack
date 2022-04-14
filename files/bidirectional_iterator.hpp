#ifndef MY_BIDIRECTIONAL_ITERATOR_HPP
# define MY_BIDIRECTIONAL_ITERATOR_HPP

//class		bidirectional_iterator;
//# include "ft.hpp"
# include "conditional.hpp"
# include "Node.hpp"

namespace ft
{
	template< typename T, bool IsConst >
	class		bidirectional_iterator
	{
	public:
		typedef typename ft::conditional_t< IsConst, const Node<T>, Node<T> >::type 	node;
		typedef T																		value_type;
		typedef value_type*																pointer;
		typedef const value_type*														const_pointer;
		typedef value_type&																reference;
		typedef const value_type&														const_reference;
	public:
		// CONSTRUCTORS
		bidirectional_iterator<value_type, IsConst>();
		bidirectional_iterator<value_type, IsConst>( pointer ptr );
		bidirectional_iterator<value_type, IsConst>( bidirectional_iterator<value_type, IsConst> const &it );


		// DESTRUCTOR
		virtual ~bidirectional_iterator( );


		// ASSIGNATION OPERATOR
		bidirectional_iterator<T, IsConst>					&operator=( bidirectional_iterator<T, IsConst> const &it );


		// OPERATOR *
		reference									operator*();

		const_reference								operator*() const;


		// OPERATOR ->
		pointer										operator->();
		const_pointer								operator->() const;


		// OPERATOR ++
		bidirectional_iterator<T, IsConst>&					operator++();


		// OPERATOR ++(int)
		bidirectional_iterator<T, IsConst> const 			operator++( int );


		// OPERATOR --
		bidirectional_iterator<T, IsConst>&					operator--();


		// OPERATOR --(int)
		bidirectional_iterator<T, IsConst> const			operator--( int );
	private:
		node		*_ptr;
	};
}



// CONSTRUCTORS
template< typename T, bool IsConst >
ft::bidirectional_iterator<T, IsConst>::bidirectional_iterator() : _ptr(NULL)
{
}

template< typename T, bool IsConst >
ft::bidirectional_iterator<T, IsConst>::bidirectional_iterator( typename ft::bidirectional_iterator<T, IsConst>::pointer ptr ) : _ptr(ptr)
{
}

template< typename T, bool IsConst >
ft::bidirectional_iterator<T, IsConst>::bidirectional_iterator( ft::bidirectional_iterator<T, IsConst> const &it )
{
	*this = it;
}


// DESTRUCTOR
template< typename T, bool IsConst >
ft::bidirectional_iterator<T, IsConst>::~bidirectional_iterator()
{
	_ptr = NULL;
}


// ASSIGNATION OPERATOR
template< typename T, bool IsConst >
ft::bidirectional_iterator<T, IsConst>&									ft::bidirectional_iterator<T, IsConst>::operator=( ft::bidirectional_iterator<T, IsConst> const &it )
{
	if (this != it)
		_ptr = it._ptr;
	return *this;
}


// OPERATOR *
template< typename T, bool IsConst >
typename ft::bidirectional_iterator<T, IsConst>::reference				ft::bidirectional_iterator<T, IsConst>::operator*()
{
	return _ptr->val;
}

template< typename T, bool IsConst >
typename ft::bidirectional_iterator<T, IsConst>::const_reference		ft::bidirectional_iterator<T, IsConst>::operator*() const
{
	return _ptr->val;
}


// OPERATOR ->
template< typename T, bool IsConst >
typename ft::bidirectional_iterator<T, IsConst>::pointer				ft::bidirectional_iterator<T, IsConst>::operator->()
{
	return &_ptr->val;
}

template< typename T, bool IsConst >
typename ft::bidirectional_iterator<T, IsConst>::const_pointer			ft::bidirectional_iterator<T, IsConst>::operator->() const
{
	return &_ptr->val;
}


// OPERATOR ++
template< typename T, bool IsConst >
ft::bidirectional_iterator<T, IsConst>&									ft::bidirectional_iterator<T, IsConst>::operator++()
{
	_ptr = _ptr->next;
	return *this;
}


// OPERATOR ++(int)
template< typename T, bool IsConst >
ft::bidirectional_iterator<T, IsConst> const		 					ft::bidirectional_iterator<T, IsConst>::operator++( int )
{
	bidirectional_iterator	copy(*this);

	_ptr = _ptr->next;
	return copy;
}


// OPERATOR --
template< typename T, bool IsConst >
ft::bidirectional_iterator<T, IsConst>&									ft::bidirectional_iterator<T, IsConst>::operator--()
{
	_ptr = _ptr->prev;
	return *this;
}


// OPERATOR --(int)
template< typename T, bool IsConst >
ft::bidirectional_iterator<T, IsConst> const							ft::bidirectional_iterator<T, IsConst>::operator--( int )
{
	bidirectional_iterator	copy(*this);

	_ptr = _ptr->prev;
	return copy;
}


// OPERATOR ==
template< typename T, bool IsConst >
bool																	operator==( ft::bidirectional_iterator<T, IsConst> const &it1, ft::bidirectional_iterator<T, IsConst> const &it2 )
{
	if (&it1.operator*() == &it2.operator*())
		return true;
	return false;
}


// OPERATOR !=
template< typename T, bool IsConst >
bool																	operator!=( ft::bidirectional_iterator<T, IsConst> const &it1, ft::bidirectional_iterator<T, IsConst> const &it2 )
{
	return !(it1 == it2);
}

#endif
