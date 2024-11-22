#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> digitVector = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::vector<int>::iterator secondStart = std::stable_partition(digitVector.begin(), digitVector.end(), [](int number)
	{
		return number%2 == 0;
	});

	for(auto it = digitVector.begin(); it != secondStart; it++)
	{
		std::cout << *it << " ";
	}
	std::cout << "\n";
	for(auto it = secondStart; it != digitVector.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << "\n";

	return 0;
}