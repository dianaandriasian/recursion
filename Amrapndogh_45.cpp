//////////////////////////////////////////////////////////////////////////
/// 45. Grel fibonaccii n-rd tivy hashvogh funkcia iterativ tarberakov ///
//////////////////////////////////////////////////////////////////////////

#include <iostream>

unsigned int fibonacci(unsigned int);

int main()
{
	while (true) {

		std::cout << "Enter the num > 0 : ";
		int num;
		std::cin >> num;

		std::cout << "Nth fibonacci is : " << fibonacci(num) << std::endl << std::endl;

	}

	return 0;
}

unsigned int fibonacci(unsigned int n)
{
	int a = 0;
	int b = 1;
	int count = 0;

	if (n == 1)
		return a;
	else if (n == 2)
		return b;
	else {

		for (int i = 2; i < n; ++i) {

			count = a + b;
			a = b;
			b = count;
		}

		return count;
	}
}
