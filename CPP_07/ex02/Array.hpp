#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <string.h>

template <typename T>
class Array
{
	private:
		unsigned int	_size;
		T*				_array;

	public:
		Array(void);
		Array(unsigned int n);
		Array & operator=(const Array &src);
		~Array(void);
		
		Array(const Array &src);
		T & operator[](unsigned int i);
		const T & operator[](unsigned int i) const;
		unsigned int size(void) const;
		class WrongIndexException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};


#endif