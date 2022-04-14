#ifndef MY_CLASS_HPP
# define MY_CLASS_HPP

# include <iostream>
# include <string>

class 				MyClass
{
public:
	MyClass( );
	explicit MyClass( std::string const &name );
	virtual ~MyClass( );
	MyClass( MyClass const &o );

	MyClass					&operator=( MyClass const &o );
	std::string const		&getName() const;
//	int						getIdent() const;

	void 					method( ) const;
	class	MyException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};
private:
	const std::string		_name;
};

std::ostream 				&operator<<( std::ostream &os, MyClass const &o );

#endif