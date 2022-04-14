#ifndef MY_ALLOCATOR_HPP
# define MY_ALLOCATOR_HPP

namespace ft
{
//	//20.4.1, the default allocator:
//	template< class T > class allocator;
//	template< > class allocator<void>;
//	template< class T, class U >
//	bool			operator==( allocator<T> const&, const allocator<U>&) throw();template <class T, class U>bool operator!=(const allocator<T>&, const allocator<U>&) throw();
	template< typename T >
	class		allocator
	{
	public:
		typedef T								value_type;
		typedef value_type*						pointer;
		typedef const value_type*				const_pointer;
		typedef value_type&						reference;
		typedef const value_type&				const_reference;
		typedef std::size_t						size_type;
		typedef std::ptrdiff_t					difference_type;
		template< typename U >
		struct rebind
		{
			typedef allocator<U> other;
		};
	public:
		// CONSTRUCTORS
		allocator() throw( );
		allocator( allocator<value_type> const &alloc ) throw();
		template< typename U >
		allocator( allocator<U> const &alloc ) throw();


		// DESTRUCTOR
		~allocator() throw();


		// ASSIGNATION OPERATOR
		allocator<value_type>			&operator=( allocator<value_type> const &alloc );


		// ADDRESS
		pointer							address( reference ref ) const;
		const_pointer					address( const_reference ref ) const;


		// ALLOCATE
		pointer							allocate( size_t n, allocator<void>::const_pointer = 0 );


		// DEALLOCATE
		void							deallocate( pointer ptr, size_t );


		// MAX_SIZE
		size_type						max_size() const throw();


		// CONSTRUCT
		void							construct( pointer ptr, const_reference value );


		// DESTROY
		void							destroy( pointer value );
	};
}


// CONSTRUCTORS
template< typename T >
ft::allocator< T >::allocator() throw()
{
}

template< typename T >
ft::allocator<T>::allocator( allocator<T> const &alloc ) throw()
{
	*this = alloc;
}

template< typename T >
template< typename U >
ft::allocator<T>::allocator( allocator<U> const &alloc ) throw()
{
//	*this = alloc;
}


// DESTRUCTOR
template< typename T >
ft::allocator<T>::~allocator() throw()
{
}


// ASSIGNATION OPERATOR
template< typename T >
ft::allocator<T>&									ft::allocator<T>::operator=( allocator<T> const &alloc )
{
	if (this != &alloc)
		;
	return *this;
}


// ADDRESS
template< typename T >
typename ft::allocator<T>::pointer					ft::allocator<T>::address( reference ref ) const
{
	return &ref;
}

template< typename T >
typename ft::allocator<T>::const_pointer			ft::allocator<T>::address( const_reference ref ) const
{
	return &ref;
}


// ALLOCATE
template< typename T >
typename ft::allocator<T>::pointer					ft::allocator<T>::allocate( size_t n, allocator<void>::const_pointer )
{
	if (n > max_size())
		std::out_of_range("allocator<T>::allocate(size_t n)"
							 " 'n' exceeds maximum supported size");
	return static_cast< pointe r>(::operator new(n * sizeof(value_type)));
}


// DEALLOCATE
template< typename T >
void 												ft::allocator<T>::deallocate( pointer ptr, size_t )
{
	::operator delete(ptr);
}


// MAX_SIZE
template< typename T >
typename ft::allocator<T>::size_type				ft::allocator<T>::max_size() const throw()
{
	return std::numeric_limits<size_type>::max() / sizeof(value_type);
}


// CONSTRUCT
template< typename T >
void												ft::allocator<T>::construct( pointer p, const_reference val )
{
	new ((void*)p) value_type(val);
}


// DESTROY
template< typename T >
void 												ft::allocator<T>::destroy( pointer value )
{
	value->~value_type();
}

#endif
