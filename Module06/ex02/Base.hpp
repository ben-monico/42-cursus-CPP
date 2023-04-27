#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include "Base.hpp"


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

#endif