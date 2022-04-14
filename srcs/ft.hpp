#ifndef FT_HPP
# define FT_HPP

# include <iostream>
# include <string>

# include "random_access_iterator.hpp"
# include "bidirectional_iterator.hpp"
# include "reverse_iterator.hpp"
# include "allocator.hpp"
# include "vector.hpp"
//# include "map.hpp"
# include "stack.hpp"
# include "type_traits.hpp"
# include "iterator.hpp"
# include "iterator_tags.hpp"
# include "functional.hpp"


namespace			ft
{
	// integral_constant
	template< typename T, T value_ >
	struct 			integral_constant;

	// true_type
	struct 			true_type;

	// false_type
	struct 			false_type;

	// is_integral
	template< typename >
	struct 			is_integral;

	// conditional
	template< bool B, typename T, typename F >
	struct 			conditional;

	// conditional_t
	template< bool B, typename T, typename F >
	struct			conditional_t;

	// enable_if
	template< bool Cond, typename T = void >
	struct 			enable_if;

	// enable_if_t
	template< bool Cond, typename T = void >
	struct			enable_if_t;

	// iterator_traits
	template< typename T >
	struct			iterator_traits;

	// iterator
	template< typename Category, typename T, typename Distance = ptrdiff_t, typename Pointer = T*, typename Reference = T& >
	struct			iterator;

	struct			input_iterator_tag;

	struct			output_iterator_tag;

	struct			forward_iterator_tag;

	struct			bidirectional_iterator_tag;

	struct			random_access_iterator_tag;

	// random_access_iterator
	template< typename T, bool NonConst >
	class 			random_access_iterator;

	// bidirectional_iterator
	template< typename T, bool NonConst >
	class 			bidirectional_iterator;

	// reverse_iterator
	template< typename T >
	class			reverse_iterator;


	// pair
	template< typename T1, typename T2 >
	struct			pair;

	// make_pair
	template< typename T1, typename T2 >
	pair< T1, T2 >	make_pair(T1 x, T2 y)

	// less
	template< typename T >
	struct			less;

	// vector
	template < typename T, typename Alloc >
	class			vector;

	// stack
	template < typename T, typename Container >
	class			stack;

	template< typename Key, typename T, typename Compare = std::less< Key >, typename Alloc = std::allocator< ft::pair< const Key, T > > >
	class			map;
}

#endif
