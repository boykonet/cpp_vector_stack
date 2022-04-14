#ifndef MY_MAKE_PAIR_HPP
# define MY_MAKE_PAIR_HPP

namespace	ft
{
	template< typename T1, typename T2 >
	ft::pair< T1, T2 >		make_pair(T1 x, T2 y)
	{
		return ft::pair< T1, T2 >(x, y);
	}
}

#endif