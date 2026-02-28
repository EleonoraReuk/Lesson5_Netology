#include <iostream>



int main() {
	const int size{ 10 };
	int integers[size] = { 110, 34, 25, 12, 22, 11, 90, 53, 8, 67 };

	std::cout << "Массив до сортировки:   \t";
	for (int element{}; element < size; ++element) 
	{
		std::cout << integers[element] << '\t';
	}

	for (int i = 0; i < size - 1; i++) 
	{
		for (int j = 0; j < size - i - 1; ++j) 
		{
			if (integers[j] > integers[j + 1]) 
			{
				int temporary{ integers[j] };
				integers[j] = integers[j + 1];
				integers[j + 1] = temporary;
			}
		}
	}

	std::cout << "\n\n\nМассив после сортировки:   \t";
	for (int element{}; element < size; ++element) 
	{
		std::cout << integers[element] << '\t';
	}

}
