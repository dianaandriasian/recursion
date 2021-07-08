///////////////////////////////////////////////////////////////////////////
/// 44. Grel fibonaccii n-rd tivy hashvogh funkcia rekursive tarberakov ///
///////////////////////////////////////////////////////////////////////////

#include <iostream>

unsigned int fibonacci(unsigned int);

int main()
{
	while (true) {

		std::cout << "Enter the n > 0 : ";
		unsigned int n;
		std::cin >> n;

		//std::cout << std::endl;
		std::cout << "Fibonacci : " << fibonacci(n) << std::endl << std::endl;

	}

	return 0;
}

unsigned int fibonacci(unsigned int n)
{ 
	if (n == 1)
		return 0;
	else if (n == 2 || n == 3)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}