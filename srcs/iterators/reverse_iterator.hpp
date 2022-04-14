#ifndef MY_REVERSE_ITERATOR_HPP
# define MY_REVERSE_ITERATOR_HPP

# include "iterator_traits.hpp"
# include "iterator.hpp"

namespace	ft
{
	template< typename Iterator >
	class		reverse_iterator : public ft::iterator<
						typename iterator_traits< Iterator >::iterator_category,
						typename iterator_traits< Iterator >::value_type,
						typename iterator_traits< Iterator >::difference_type,
						typename iterator_traits< Iterator >::pointer,
						typename iterator_traits< Iterator >::reference
						>
	{
	protected:
		Iterator		current;
	public:
		typedef Iterator														iterator_type;
		typedef typename iterator_traits< iterator_type >::difference_type		difference_type;
		typedef typename iterator_traits< iterator_type >::reference			reference;
		typedef typename iterator_traits< iterator_type >::pointer				pointer;

		reverse_iterator()
		: current()
		{
		}

		explicit reverse_iterator(iterator_type x)
		: current(x)
		{
		}

		template< typename U >
		reverse_iterator(reverse_iterator< U > const &u)
		: current(u.base())
		{
		}

		iterator_type 		base() const
		{
			return current;
		}

		reference			operator*() const
		{
			Iterator		tmp = current;

			return *--tmp;
		}

		pointer				operator->() const
		{
			return &(operator*());
		}

		reverse_iterator&	operator++()
		{
			--current;
			return *this;
		}

		reverse_iterator	operator++(int)
		{
			reverse_iterator	tmp = *this;

			--current;
			return tmp;
		}

		reverse_iterator&	operator--()
		{
			++current;
			return *this;
		}

		reverse_iterator	operator--(int)
		{
			reverse_iterator	tmp = *this;

			++current;
			return tmp;
		}

		reverse_iterator	operator+(difference_type n) const
		{
			return reverse_iterator(current - n);
		}

		reverse_iterator&	operator+=(difference_type n)
		{
			current -= n;
			return *this;
		}

		reverse_iterator	operator-(difference_type n) const
		{
			return reverse_iterator(current + n);
		}

		reverse_iterator&	operator-=(difference_type n)
		{
			current += n;
			return *this;
		}

		reference			operator[](difference_type n) const
		{
			return current(-n - 1);
		}
	};

	template< typename Iterator >
	bool	operator==(	reverse_iterator< Iterator > const &x,
						reverse_iterator< Iterator > const &y)
	{
		return x.current == y.current;
	}

	template< typename Iterator >
	bool	operator<(	reverse_iterator< Iterator > const &x,
						reverse_iterator< Iterator > const &y)
	{
		return x.current > y.current;
	}

	template< typename Iterator >
	bool	operator!=(	reverse_iterator< Iterator1 > const &x,
						reverse_iterator< Iterator2 > const &y)
	{
		return x.current != y.current;
	}

	template< typename Iterator1, typename Iterator2 >
	bool	operator>(	reverse_iterator< Iterator1 > const &x,
						reverse_iterator< Iterator2 > const &y)
	{
		return x.current < y.current;
	}

	template< typename Iterator >
	bool	operator>=(	reverse_iterator< Iterator > const &x,
						reverse_iterator< Iterator > const &y)
	{
		return x.current <= y.current;
	}

	template< typename Iterator >
	bool	operator<=(	reverse_iterator< Iterator > const &x,
						reverse_iterator< Iterator > const &y)
	{
		return x.current >= y.current;
	}

	template< typename Iterator >
	typename reverse_iterator< Iterator >::difference_type
			operator-(	reverse_iterator< Iterator > const &x,
						reverse_iterator< Iterator > const &y)
	{
		return y.current - x.current;
	}

	template< typename Iterator >
	reverse_iterator< Iterator >
	        operator+(	typename reverse_iterator< Iterator >::difference_type n,
	        			reverse_iterator< Iterator > const &x)
	{
		return reverse_iterator< Iterator >(x.current - n);
	}
}

#endif