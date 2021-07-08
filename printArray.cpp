#include <iostream>

void fill(int*, int);
void print(int*, int);
int main()
{
  const int size = 5;
	int array[size] = {};
	fill(array, size);
	std::cout << "Print array's elements : " << std::endl;
	print(array, size);
	return 0;
}

void fill(int* arr, int s) 
{
    std::cout << "Please, fill array : " << std::endl;
    for(int i = 0; i < s; ++i) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
    }
} 

void print(int* arr, int s)
{
    if(s) {
        std::cout << "arr[" << s - 1 << "] = " << arr[s - 1] << std::endl;
        return print(arr, s-1);
    }
}
