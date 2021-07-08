///////////////////////////////////////////////////////////////////////
/// 42. Grel funkcia, vory vorpes argument stanum e                 ///   
/// num amboghj tipi popokhakany ev tpum e num-ic                   ///
/// minchev 0 arjeqnery. Funkcian irakanacnel recursive tarberakov  ///
///////////////////////////////////////////////////////////////////////

#include <iostream>

int outNums(int);

int main()
{
	std::cout << "Enter the num : ";
	int num = 0;
	std::cin >> num;

    outNums(num);

	return 0;
}

int outNums(int num)
{
	while (num >= 0) {

		std::cout << num << std::endl;
		return outNums(num - 1);

	}
}