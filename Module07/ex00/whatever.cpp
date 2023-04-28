#include "whatever.hpp"

// Constructors
whatever::whatever()
{
	std::cout << "\e[0;33mDefault Constructor called of whatever\e[0m" << std::endl;
}

whatever::whatever(const whatever &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of whatever\e[0m" << std::endl;
}


// Destructor
whatever::~whatever()
{
	std::cout << "\e[0;31mDestructor called of whatever\e[0m" << std::endl;
}


// Operators
whatever & whatever::operator=(const whatever &assign)
{
	(void) assign;
	return *this;
}

