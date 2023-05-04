#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <stdint.h>

typedef struct Data
{
	std::string s1;
	int n;
} Data;

class Serializer
{
	public:
		// Constructors
		Serializer();
		Serializer(const Serializer &copy);
		
		// Destructor
		~Serializer();
		
		// Operators
		Serializer & operator=(const Serializer &assign);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		
	private:
};

#endif