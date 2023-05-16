#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class A;
class B;
class C;
class Base
{
	public:
		virtual ~Base();
		
		// Operators
		Base & operator=(const Base &assign);
		
		Base *generate(void);
		void identify(Base* p);
		void identify(Base& p);

	private:
		
};

class A : public Base {};
class B : public Base  {};
class C  : public Base {};

#endif