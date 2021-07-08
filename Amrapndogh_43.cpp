//////////////////////////////////////////////////////////////////////
/// 43. Mutqagrel int tipi num, tpel num-ic 0 iterative tarberakov ///
//////////////////////////////////////////////////////////////////////

#include <iostream>

void outNums(int);

int main()
{
	while (true) {

		std::cout << "Enter the num : ";
		int num;
		std::cin >> num;

		outNums(num);

		std::cout << std::endl << std::endl;;
	}

	return 0;
}

void outNums(int num)
{
	for (int i = num; i > 0; --i) {
		std::cout << num << " ";
		--num;
	}
}