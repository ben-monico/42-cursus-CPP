#include "IMateriaSource.hpp"

// Constructors
IMateriaSource::IMateriaSource()
{
	std::cout << "\e[0;33mDefault Constructor called of IMateriaSource\e[0m" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of IMateriaSource\e[0m" << std::endl;
}


// Destructor
IMateriaSource::~IMateriaSource()
{
	std::cout << "\e[0;31mDestructor called of IMateriaSource\e[0m" << std::endl;
}


// Operators
IMateriaSource & IMateriaSource::operator=(const IMateriaSource &assign)
{
	(void) assign;
	return *this;
}

