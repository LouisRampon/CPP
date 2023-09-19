#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string.h>
# include <algorithm>
# include <vector>
# include <limits.h>
# include <stdlib.h> 
# include <time.h>

class Span
{
	public:
		Span(void);
		Span(int N);
		Span(const Span &src);
		~Span(void);

		Span & operator=(const Span &src);
		void addNumber(int nb);
		int	shortestSpan(void);
		int	longestSpan(void);
		class TooManyElements : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class NotEnoughElements : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

        private:
		std::vector<int>	_arrayNb;
		int					_size;
		int					_nbElements;
	
};
std::ostream & operator<<(std::ostream &stream, const Span &src);

#endif