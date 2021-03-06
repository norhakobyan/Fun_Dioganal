#include <iostream>

int Sum_Of_Diagonals(int ** &);
bool square(int ** &, int ** &);
void deleteArray(int ** &);

int main() {

	int ** arr;
	int ** arr1;
	int result = square(arr, arr1);
	if (result == 0) {
		std::cout << "false" << std::endl;
	}
	else {
		std::cout << "true" << std::endl;
	}

	deleteArray(arr);
	deleteArray(arr1);

}

int Sum_Of_Diagonals(int ** & arr) {
	std::cout << "enter array size" << std::endl;
	int size;
	std::cin >> size;
	arr = new int *[size];
	for (int i = 0; i < size; ++i) {
		arr[i] = new int[size];
	}
	for (int i = 0; i < size; ++i) {
		std::cout << "enter " << i + 1 << " - rd arrays element" << std::endl;
		for (int j = 0; j < size; ++j) {
			std::cin >> arr[i][j];
		}
	}

	std::cout << "your square array" << std::endl;
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			std::cout << arr[j][i] << " ";
		}
		std::cout << std::endl;
	}
	int res = 0;
	for (int i = 0; i < size; ++i) {
		res = res + arr[i][i];
	}

	int res1 = 0;
	for (int i = 0, j = size - 1; i < size, j >= 0; ++i, --j) {
		res1 = res1 + arr[j][i];
	}

	int sum = res + res1;
	return sum;
}

bool square(int ** & arr, int ** & arr1) {
	int firstArr = Sum_Of_Diagonals(arr);
	int firstArr1 = Sum_Of_Diagonals(arr1);
	std::cout << "is the sum of the diagonal" << std::endl;
	std::cout << firstArr << std::endl;
	std::cout << firstArr1 << std::endl;
	if (firstArr >= firstArr1) {
		std::cout << firstArr << " >= " << firstArr1 << std::endl;
		return true;
	}
	else {
		std::cout << firstArr << " < " << firstArr1 << std::endl;
		return false;
	}
}

void deleteArray(int ** & arr) {
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; ++i) {
		delete[] arr[i];
		delete[] arr;
	}
}

