#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cmath>
# include <cstdlib>
#include <limits.h>
#include <stdio.h>


class ScalarConverter
{
	public:
		// Constructors
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		
		// Destructor
		~ScalarConverter();
		
		// Operators
		ScalarConverter & operator=(const ScalarConverter &assign);
		static void convert(std::string literal);

	private:
		static char _c;
		static int _i;
		static float _f;
		static double _d;
		
		static std::string getType(std::string literal);
		static void converter(char literal);
		static void converter(int literal);
		static void converter(float literal);
		static void converter(double literal);
		static void convertToType(std::string type, std::string literal);
		static void impossible(void);
};

#endif