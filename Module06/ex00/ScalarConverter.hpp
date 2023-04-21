#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

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
		static bool isChar;
		static bool isLimit(std::string literal);
		static std::string convertChar(std::string literal);
		static std::string convertInt(std::string literal);
		static std::string convertFloat(std::string literal);
		static std::string convertDouble(std::string literal);
};

#endif