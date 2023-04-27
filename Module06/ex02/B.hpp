#ifndef B_HPP
# define B_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class Base;

class B : public Base
{
	public:
		// Constructors
		B();
		B(const B &copy);
		
		// Destructor
		~B();
		
		// Operators
		B & operator=(const B &assign);
	
	protected:
		B *clone() const { return new B(*this);}

	private:
		
};

#endif