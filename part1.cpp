#include <iostream>

int main() {
	const int size = 10;
	int arr[size] = { 1, 7, 2, 4, 9, 0, 6, 4, 8, 3 };
	for (int i = 0; i < size; i++) {
		std::cout << arr[i];
		if (i < size - 1) {
			std::cout << ", ";
		}
	} return 0;

}

