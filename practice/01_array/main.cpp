#include <iostream>
#include "dynamic_array.h"

int main()
{
	mystl::dynamic_array myArray;

	std::cout << "Size:\t\t" <<  myArray.size() << std::endl;
	std::cout << "Capacity:\t" << myArray.capacity() << std::endl;
	std::cout << "Is empty?:\t" << (bool)myArray.is_empty() << std::endl;


	return 0;
}
