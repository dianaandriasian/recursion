//////////////////////////////////////////////////////////////////
/// 41. iRakanacnel factoriali hashvarkumn iterativ tarberakov ///
//////////////////////////////////////////////////////////////////

#include <iostream>

int factorial(unsigned long);

int main()
{
	while (true) {

		std::cout << "Enter the num : ";
		unsigned long num;
		std::cin >> num;

		std::cout << num << "! = " << factorial(num) << std::endl << std::endl;
	}

	return 0;
}

int factorial(unsigned long num)
{
	int f = 1;

	for (int i = 1; i <= num; ++i)
		f *= i;

	return f;
}