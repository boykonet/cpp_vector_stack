#ifndef MY_CONTAINER_VECTOR_HPP
# define MY_CONTAINER_VECTOR_HPP

# include <iostream>
# include <string>

# include "random_access_iterator.hpp"
# include "reverse_iterator.hpp"
# include "type_traits.hpp"

namespace ft
{
	template< typename T, typename Alloc = std::allocator<T> >
	class	vector
	{
	public:
		// Types
		typedef T														value_type;
		typedef Alloc													allocator_type;
		typedef typename allocator_type::reference						reference;
		typedef typename allocator_type::const_reference				const_reference;
		typedef typename allocator_type::pointer						pointer;
		typedef typename allocator_type::const_pointer					const_pointer;
		typedef ft::random_access_iterator< pointer, pointer >			iterator;
		typedef ft::random_access_iterator< const_pointer, pointer >	const_iterator;
		typedef ft::reverse_iterator< iterator >						reverse_iterator;
		typedef ft::reverse_iterator< const_iterator >					const_reverse_iterator;
		typedef std::size_t												size_type;
		typedef std::ptrdiff_t											difference_type;

	private:
		allocator_type			_alloc;
		pointer					_arr;
		size_type				_sz;
		size_type				_capacity;

		// Private functions
		void 		_resize_capacity(size_t n)
		{
			if (_capacity == 0)
				reserve(n);
			else if (n <= _capacity * 2)
				reserve(_capacity * 2);
			else if (n > _capacity * 2)
				reserve(n);
		}

		iterator			_find(iterator it)
		{
			iterator		curr;

			for (curr = begin(); curr != end(); ++curr)
			{
				if (curr == it)
					break ;
			}
			return curr;
		}

	public:

		// Constructors
		explicit vector(allocator_type const &alloc = allocator_type())
		: _alloc(alloc),
		_arr(NULL),
		_sz(0),
		_capacity(0)
		{
		}

		explicit vector(size_type n, value_type const &val = value_type(), allocator_type const &alloc = allocator_type(),
						typename ft::enable_if< ft::is_integral< size_type >::value, int >::type* = 0)
						: _alloc(alloc),
						_arr(NULL),
						_sz(0),
						_capacity(0)
		{
			size_type	cnstr;

			cnstr = 0;
			_arr = _alloc.allocate(n);
			try
			{
				for (; cnstr != n; ++cnstr, ++_sz)
					_alloc.construct(_arr + cnstr, val);
			}
			catch(...)
			{
				for (size_t dstr = 0; dstr < cnstr; ++dstr, --_sz)
					_alloc.destroy(_arr + dstr);
				_alloc.deallocate(_arr, n);
				throw ;
			}
			_capacity = n;
		}

		template< typename InputIterator >
		vector(InputIterator first, InputIterator last, allocator_type const &alloc = allocator_type(),
			   typename ft::enable_if< !ft::is_integral< InputIterator >::value, int >::type* = 0)
			   : _alloc(alloc),
			   _arr(NULL),
			   _sz(0),
			   _capacity(0)
		{
			difference_type		cap;
			ssize_t				cnstr;
			InputIterator		a = begin();

			cnstr = 0;
			cap = last - first;
			_arr = _alloc.allocate(cap);
			try
			{
				for (; cnstr < cap; ++cnstr)
					_alloc.construct(_arr + cnstr, *(first + cnstr));
				_sz += cap;
			}
			catch(...)
			{
				for (difference_type dstr = 0; dstr < cnstr; ++dstr)
					_alloc.destroy(_arr + dstr);
				_alloc.deallocate(_arr, cap);
				throw ;
			}
			_capacity = cap;
		}

		// Copy constructor
		vector(vector< value_type, allocator_type > const &v)
		: _alloc(v._alloc),
		_arr(NULL),
		_sz(0),
		_capacity(0)
		{
			*this = v;
		}

		// Destructor
		virtual ~vector()
		{
			for (size_t i = 0; i < _sz; ++i)
				_alloc.destroy(_arr + i);
			_alloc.deallocate(_arr, _capacity);
			_arr = NULL;
			_sz = 0;
			_capacity = 0;
		}

		// Assignation operator
		vector< value_type, allocator_type >&			operator=(vector< value_type, allocator_type > const &v)
		{
			pointer 	newarr;
			size_t 		i_cnstr;

			i_cnstr = 0;
			if (this != &v)
			{
				try
				{
					newarr = _alloc.allocate(v._capacity);
					for (; i_cnstr < v._sz; ++i_cnstr)
						_alloc.construct(newarr + i_cnstr, *(v._arr + i_cnstr));
				}
				catch(...)
				{
					for (size_t i_dstr = 0; i_dstr < i_cnstr; ++i_dstr)
						_alloc.destroy(newarr + i_dstr);
					_alloc.deallocate(newarr, v._capacity);
					throw ;
				}
				if (_arr)
				{
					clear();
					_alloc.deallocate(_arr, _capacity);
				}
				_arr = newarr;
				_sz = v._sz;
				_capacity = v._capacity;
			}
			return *this;
		}


		// Allocator
		allocator_type									get_allocator() const
		{
			return _alloc;
		}


		// Iterators
		iterator										begin()
		{
			return iterator(_arr);
		}

		const_iterator									begin() const
		{
			return const_iterator(_arr);
		}

		iterator										end()
		{
			return iterator(_arr + _sz);
		}

		const_iterator									end() const
		{
			return const_iterator(_arr + _sz);
		}

		reverse_iterator 								rbegin()
		{
			return reverse_iterator(_arr + _sz);
		}

		const_reverse_iterator 							rbegin() const
		{
			return const_reverse_iterator(_arr + _sz);
		}

		reverse_iterator 								rend()
		{
			return reverse_iterator(_arr);
		}

		const_reverse_iterator 							rend() const
		{
			return const_reverse_iterator(_arr);
		}


		// Capacity
		size_type 										size() const
		{
			return _sz;
		}

		size_type 										max_size() const
		{
			return _alloc.max_size();
		}

		void 											resize(size_type n, value_type const &val = value_type())
		{
			if (n > size())
				insert(end(), n - size(), val);
			else if (n < size())
				erase(begin() + n, end());
			else
				;
		}

		size_type 										capacity() const
		{
			return _capacity;
		}

		bool											empty() const
		{
			return begin() == end();
		}

		void											reserve(size_type n)
		{
			pointer 	newarr = nullptr;

			if (n > _capacity)
			{
				newarr = _alloc.allocate(n);
				memcpy(static_cast<void*>(newarr), static_cast<void*>(_arr), sizeof(T)*_sz);
				_alloc.deallocate(_arr, _capacity);
				_arr = newarr;
				_capacity = n;
			}
		}


		// Element access
		reference										operator[](size_type n)
		{
			return _arr[n];
		}

		const_reference									operator[](size_type n) const
		{
			return _arr[n];
		}

		reference										at(size_type n)
		{
			if (n >= _sz)
				throw std::out_of_range("vector");
			return _arr[n];
		}

		const_reference									at(size_type n) const
		{
			if (n >= _sz)
				throw std::out_of_range("vector");
			return _arr[n];
		}

		reference										front()
		{
			return *begin();
		}

		const_reference									front() const
		{
			return *begin();
		}

		reference										back()
		{
			return *(end() - 1);
		}

		const_reference									back() const
		{
			return *(end() - 1);
		}


		// Modifiers
		template< typename InputIterator >
		void											assign(InputIterator first, InputIterator last,
															   typename ft::enable_if< !ft::is_integral< InputIterator >::value, int >::type = 0)
		{
			erase(begin(), end());
			insert(begin(), first, last);
		}

		void											assign(size_type n, const_reference val,
															   typename ft::enable_if< ft::is_integral< size_type >::value, int >::type = 0)
		{
			erase(begin(), end());
			insert(begin(), n, val);
		}

		void											push_back(value_type const &val)
		{
			if (_capacity == 0)
				reserve(1);
			else if (_sz + 1 > _capacity)
				reserve(2 * _capacity);
			_alloc.construct(_arr + _sz, val);
			++_sz;
		}

		void											pop_back()
		{
			_alloc.destroy(_arr + _sz - 1);
			--_sz;
		}

		iterator										insert(iterator position, const_reference val)
		{
			difference_type 	diff;
			ssize_t 			cnstr;

			diff = position - begin();
			if (_sz + 1 > _capacity)
				_resize_capacity(_sz + 1);
			++_sz;
			for (cnstr = end() - begin() - 1; cnstr > diff; --cnstr)
			{
				_alloc.construct(_arr + cnstr, *(_arr + cnstr - 1));
				_alloc.destroy(_arr + cnstr - 1);
			}
			_alloc.construct(_arr + diff, val);
			return begin() + diff;
		}

		iterator										insert(	iterator position, size_type n, const_reference val,
															   	typename ft::enable_if< ft::is_integral< size_type >::value, int >::type* = 0)
		{
			difference_type 	diff;
			ssize_t				cnstr;

			if (!n)
				return position;
			diff = position - begin();
			if (_sz + n > _capacity)
				_resize_capacity(_sz + n);
			_sz += n;
			for (cnstr = (end() - begin() - 1); cnstr > static_cast<ssize_t>(diff + n - 1); --cnstr)
			{
				_alloc.construct(_arr + cnstr, *(_arr + cnstr - n));
				_alloc.destroy(_arr + cnstr - n);
			}
			for (size_t i = 0; i < n; ++i)
				_alloc.construct(_arr + diff + i, val);
			return begin() + diff;
		}

		template< typename InputIterator >
		iterator 										insert(	iterator position, InputIterator first, InputIterator last,
																typename ft::enable_if< !ft::is_integral< InputIterator >::value, int >::type* = 0)
		{
			iterator		it;
			difference_type diff;
			difference_type n;
			pointer			newarr = NULL;
			bool 			flag = false;

			diff = position - begin();
			n = last - first;
			if (n == 0)
				return position;
			else if (n < 0)
				throw std::out_of_range("vector");
			it = _find(first);
			if (_sz + n > _capacity)
			{
				if (it != end())
				{
					newarr = _alloc.allocate(n);
					for (ssize_t i = 0; i < n; ++i)
						_alloc.construct(newarr + i, *(first + i));
					flag = true;
				}
				_resize_capacity(_sz + n);
			}
			memmove(static_cast<void*>((begin() + diff + n).operator->()),
					static_cast<void*>((begin() + diff).operator->()),
					(_sz - diff) * sizeof(value_type));
			_sz += n;
			if (flag)
				first = newarr;
			for (ssize_t i = 0; i < n; i++, ++first)
				_alloc.construct(_arr + diff + i, *first);
			if (flag)
			{
				for (ssize_t i = 0; i < n; ++i)
					_alloc.destroy(newarr + i);
				_alloc.deallocate(newarr, n);
			}
			return begin() + diff;
		}

		iterator										erase(iterator position)
		{
			difference_type		diff;
			ssize_t 			cnstr;

			diff = position - begin();
			_alloc.destroy(_arr + diff);
			for (cnstr = diff; cnstr < end() - begin() - 1; ++cnstr)
			{
				_alloc.construct(_arr + cnstr, *(_arr + cnstr + 1));
				_alloc.destroy(_arr + cnstr + 1);
			}
			--_sz;
			return begin() + diff;
		}

		iterator										erase(iterator first, iterator last)
		{
			difference_type		diff;
			difference_type		n;
			ssize_t 			cnstr;

			diff = first - begin();
			n = last - first;
			for (difference_type i = 0; i < n; ++i)
				_alloc.destroy(_arr + diff + i);
			for (cnstr = diff; cnstr < end() - begin() - n; ++cnstr)
			{
				_alloc.construct(_arr + cnstr, *(_arr + cnstr + n));
				_alloc.destroy(_arr + cnstr + n);
			}
			_sz -= n;
			return begin() + diff;
		}

		void											swap(vector< value_type, allocator_type > &x)
		{
			vector< value_type, allocator_type >	a = x;

			x = *this;
			*this = a;
		}

		void											clear()
		{
			for (size_t dstr = 0; dstr < _sz; ++dstr)
				_alloc.destroy(_arr + dstr);
			_sz = 0;
		}
	};


	// Non-member function overloads
	template< typename T, typename Alloc >
	bool			operator==(vector< T, Alloc > const &x, vector< T, Alloc > const &y)
	{
		size_t		size;

		if (x.size() == 0 && y.size() == 0)
			return true;
		if (x.size() == y.size())
		{
			size = x.size();
			for (size_t i = 0; i < size; ++i)
			{
				if (x.at(i) == y.at(i))
					continue ;
				return false;
			}
			return true;
		}
		return false;
	}

	template< typename T, typename Alloc >
	bool			operator<(vector< T, Alloc > const &x, vector< T, Alloc > const &y)
	{
		size_t		size;

		if (x != y)
		{
			size = x.size();
			for (size_t i = 0; i < size; ++i)
			{
				if (x.at(i) < y.at(i))
					return true;
			}
		}
		return false;
	}

	template< typename T, typename Alloc >
	bool			operator!=(vector< T, Alloc > const &x, vector< T, Alloc > const &y)
	{
		return !(x == y);
	}

	template< typename T, typename Alloc >
	bool			operator>(vector< T, Alloc > const &x, vector< T, Alloc > const &y)
	{
		return y < x;
	}

	template< typename T, typename Alloc >
	bool			operator>=(vector< T, Alloc > const &x, vector< T, Alloc > const &y)
	{
		return !(x < y);
	}

	template< typename T, typename Alloc >
	bool			operator<=(vector< T, Alloc > const &x, vector< T, Alloc > const &y)
	{
		return !(y < x);
	}

	// SPECIALIZED ALGORITHMS
	template< typename T, typename Alloc >
	void			swap(vector< T, Alloc > &x, vector< T, Alloc > &y)
	{
		vector< T, Alloc >	tmp = x;

		x = y;
		y = tmp;
	}
}

#endif
