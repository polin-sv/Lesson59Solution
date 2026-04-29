#include <iostream>
using namespace std;

int main() {
	int* ptr = NULL;

	ptr = new int;

	*ptr = 10;

	cout << "address = " << ptr << " - value = " << *ptr << endl;

	delete ptr;

	return 0;
}