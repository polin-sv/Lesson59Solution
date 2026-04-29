#include "logic.h"

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


	int count = count_local_minimums(array, size);
	int* minimums = get_all_local_minimums(array, size);

	print("all local minimums: " + convert(minimums, count) + "\n");
	print("sum of local minimums is " 
		+ to_string(sum_local_minimums(minimums, count)) + "\n");

	remove(array);
	remove(minimums);

	return 0;
}