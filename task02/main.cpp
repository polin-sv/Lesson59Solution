#include "util.h"

int main() {
	int size;

	cout << "input size of array: ";
	cin >> size;

	int* array = create(size);

	if (array == NULL) {
		return -1;
	}

	init_random(array, size, -20, 50);

	print("array: " + convert(array, size) + "\n");
}