#include <cassert> // for assert
#include <cstdint> // for std::int64_t
#include <iostream>
#include <bitset>
#include "add.h"
#include <limits>
#include <typeinfo>
#include <vector>

int main()
{
	std::bitset<8> bit_no{ 0b00001101 };
	std::vector<int> v{ 1,2,4 };
	
	std::cout << bit_no << std::endl;
	std::cout << typeid(v).name() << std::endl;
	
	return 0;
}