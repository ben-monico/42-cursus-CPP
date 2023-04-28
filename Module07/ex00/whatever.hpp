#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

class whatever
{
	public:
		// Constructors
		whatever();
		whatever(const whatever &copy);
		
		// Destructor
		~whatever();
		
		// Operators
		whatever & operator=(const whatever &assign);
		
	private:
		
};

#endif