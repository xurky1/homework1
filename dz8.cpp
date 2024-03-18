using namespace std;
#include <iostream>

int main() {
	int index;
	int min, max;
	const int A = 10;
	int array[A];
	cin >> min >> max;
	srand(time(NULL));
	for (int i = 0; i < A; i++) {
		int c = min + rand() % (max - min - 1);
		array[i] = c;
		cout << array[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < A; i++) {
		index = 0;
		for (int j = 1; j < A - i; j++) {
			if (array[j] > array[index]) {
				index = j;
			}
		}

		if (array[index] > array[A - 1 - i]) {
			swap(array[index], array[A - 1 - i]);
		}
	}
	for (int i = 0; i < A; i++) {
		cout << array[i] << " ";
	}
		

}


