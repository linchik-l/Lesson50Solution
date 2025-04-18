#include "logic.h"

int main() {
	int matrix[SIZE][SIZE];
	int size;

	cout << "Input size of square matrix: ";
	cin >> size;

	init(matrix, size, 0, 100);
	cout << "Matrix:\n" << convert(matrix, size);

	cout << "Sum matrix elements up main diagonal: "
		<< sum_elements_up_main_diagonale(matrix, size) << endl;

	cout << "Sum matrix elements down main diagonal: "
		<< sum_elements_down_main_diagonale(matrix, size) << endl;
	system("pause");

	return 0;
}