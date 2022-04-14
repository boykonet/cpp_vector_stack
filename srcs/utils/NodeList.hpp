#ifndef MY_NODE_LIST_HPP
# define MY_NODE_LIST_HPP

template< typename T >
struct		NodeList
{
	struct NodeList< T >	*left;
	struct NodeList< T >	*right;
	T						value;
};

#endif