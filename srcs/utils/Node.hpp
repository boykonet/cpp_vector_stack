#ifndef MY_MAP_NODE_HPP
# define MY_MAP_NODE_HPP

# include <iostream>
# include <string>

# include "pair.hpp"

typedef enum { BLACK, RED } nodeColor;

template< typename Key, typename Value >
struct		NodeRBT
{
	struct NodeRBT< Key, Value >	*left;
	struct NodeRBT< Key, Value >	*right;
	struct NodeRBT< Key, Value >	*parent;
	nodeColor						color;
	ft::pair< Key, Value >			pair;
};

#endif
