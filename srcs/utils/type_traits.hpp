#ifndef MY_TYPE_TRAITS_HPP
# define MY_TYPE_TRAITS_HPP

namespace ft
{
	// integral_constant
	template< typename T, T value_ >
	struct		integral_constant
	{
		static const T		value = value_;
	};


	// false_type
	struct		false_type : public integral_constant< bool, false >
	{
	};

	// true_type
	struct		true_type : public integral_constant< bool, true >
	{
	};

	// enable_if
	template< bool Cond, typename T = void >
	struct		enable_if
	{
	};

	template< typename T >
	struct		enable_if< true, T >
	{
		typedef T	type;
	};

	// enable_if_t
	template< bool Cond, typename T = void >
	struct		enable_if_t
	{
		typedef typename enable_if< Cond, T >::type		type;
	};

	// is_same
	template< typename T, typename U >
	struct		is_same
	{
	};

	template< typename T >
	struct		is_same< T, T >
	{
		typedef T	type;
	};

	// is_same_t
	template< typename T, typename U >
	struct 		is_same_t
	{
		typedef typename is_same< T, U >::type			type;
	};

	// is_integral
	template< typename T >
	struct		is_integral : public false_type
	{
	};

	template<>
	struct		is_integral< bool > : public true_type
	{
	};

	template<>
	struct		is_integral< char > : public true_type
	{
	};

	template<>
	struct		is_integral< char16_t > : public true_type
	{
	};

	template<>
	struct		is_integral< char32_t > : public true_type
	{
	};

	template<>
	struct		is_integral< wchar_t > : public true_type
	{
	};

	template<>
	struct		is_integral< short > : public true_type
	{
	};

	template<>
	struct		is_integral< int > : public true_type
	{
	};

	template<>
	struct		is_integral< long > : public true_type
	{
	};

	template<>
	struct		is_integral< unsigned long > : public true_type
	{
	};

	template<>
	struct		is_integral< long long > : public true_type
	{
	};



	// conditional
	template< bool B, typename T, typename F >
	struct		conditional
	{
	public:
		typedef F	type;
	};

	template< typename T, typename F >
	struct		conditional< true, T, F >
	{
	public:
		typedef T	type;
	};

	// conditional_t
	template< bool B, typename T, typename F >
	struct		conditional_t
	{
	public:
		typedef typename conditional< B, T, F >::type	type;
	};
}

#endif