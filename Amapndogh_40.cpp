///////////////////////////////////////////////////////////////
/// 40. Irakanacnel factoriali hashvumy rekursiv tarberakov ///
///////////////////////////////////////////////////////////////

#include <iostream>

int factorial(int);

int main()
{
		std::cout << "Enter the number : ";
		int num;
		std::cin >> num;

		std::cout << num << "! = " << factorial(num);

		return 0;

}

int factorial(int num)
{
	if (num <= 1)
		return 1;
	else
	return num * factorial(num - 1);
}