#ifndef A_HPP
# define A_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class Base;

class A : public Base
{
	public:
		// Constructors
		A();
		A(const A &copy);
		
		// Destructor
		~A();
		
		// Operators
		A & operator=(const A &assign);
	
	protected:
		A *clone() const { return new A(*this);}
		
	private:
		
};

#endif