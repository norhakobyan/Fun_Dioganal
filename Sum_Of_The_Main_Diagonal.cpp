#include <iostream>

int Sum_Of_The_Main_Diagonal(int ** &, int);
void deleteArray(int ** &, int);

int main() {
	std::cout << "enter array size" << std::endl;
	int size;
	std::cin >> size;
	int ** arr;
	int result = Sum_Of_The_Main_Diagonal(arr, size);
	std::cout << "is the sum of the diagonal" << std::endl;
	std::cout << result << std::endl;
	deleteArray(arr, size);
}

int Sum_Of_The_Main_Diagonal(int ** & arr, int size) {
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

	return res;
}

void deleteArray(int ** & arr, int size) {
	for (int i = 0; i < size; ++i) {
		delete[] arr[i];
		delete[] arr;
	}
}

