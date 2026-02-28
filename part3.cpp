#include <iostream>

int main() {
	const int rows = 3, columns = 6;
	int arr[rows][columns] = {
		{5, 8, 23, 4, 67, 90},
		{3, 5, 13, 36, 56, 87},
		{1, 9, 14, 29, 46, 78}
	};
	std::cout << "Массив: " << std::endl;
	for (int row = 0; row < rows; row++) {
		for (int column = 0; column < columns; column++) {
			std::cout << arr[row][column] << '\t';
		}
		std::cout << std::endl;
	}

	int min = arr[0][0];
	int max = arr[0][0];
	int minRow = 0, maxRow = 0;
	int minColumn = 0, maxColumn = 0;

	for (int row = 0; row < rows; row++) {
		for (int column = 0; column < columns; column++) {
			if (arr[row][column] < min) {
				min = arr[row][column];
				minRow = row;
				minColumn = column;
				}
			if (arr[row][column] > max) {
				max = arr[row][column];
				maxRow = row;
				maxColumn = column;
		}
	}	
	}
	std::cout << "Индекс минимального элемента: " << minRow << " " << minColumn << std::endl;
	std::cout << "Индекс максимального элемента: " << maxRow << " " << maxColumn << std::endl;
	return 0;

}
