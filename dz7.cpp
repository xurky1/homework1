using namespace std;
#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");
    const int A = 10;
    int array[A];
    int min, max;
    cin >> min >> max;
    srand(time(NULL));
    for (int i = 0; i < A; i++) {
        int c = min + rand() % (max - min + 1);
        array[i] = c;
        cout << array[i] << " ";
    }
    cout << endl;
    // bubblesort
    bool flag;
    for (int j = 0; j < A; j++) {
        for (int i = 0; i < A - 1 - j; i++) {
            flag = true;
            if (array[i] > array[i + 1]) {
                swap(array[i], array[i + 1]);
                flag = false;
            }
        }
        if (flag) break;
    }
    for (int i = 0; i < A; i++) {
        cout << array[i] << " ";
    }
}
