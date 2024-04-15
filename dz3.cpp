using namespace std;
#include <iostream>



//1
/*int main()
{
    setlocale(LC_ALL, "RU");
    int num;
    cout << "шестизначное число:";
    cin >> num;

    if (num >= 100000 && num <= 999999) {
        int firstsum = (num / 100000) + (num / 10000 % 10) + (num / 1000 % 10);
        int secondsum = (num / 100 % 10) + (num / 10 % 10) + (num % 10);
        if (firstsum == secondsum) {
            cout << "число" << num << "счастливое\n";
        }
        else {
            cout << "число " << num << " не счастливое\n";
        }
    }
    else {
        cout << "ошибка, еще раз попробуйте\n";
    }
}*/


//2
/*int main() {
    setlocale(LC_ALL, "RU");
    int num, a, newnum = 0;

    cout << "введите четырехзначное число: ";
    cin >> num;

    if (num < 1000 || num > 9999) {
        cout << "ошибка, введено не четырехзначное число!\n";
    }
    else {
        a = num;
        newnum += ((a % 100) / 10) * 1000;
        a /= 100;
        newnum += ((a % 10) * 10) + ((a / 10) * 100);
        a = num;
        newnum += ((a % 10) * 100);
        a /= 10;
        newnum += ((a % 10) * 10);

        cout << "новое число: " << newnum << endl;
    }
}*/

//3
int main() {
    setlocale(LC_ALL, "RU");
    int max;
    int num;
    cin >> max;
cout << "Введите 7 целых чисел через пробел:\n";
    for (int i = 1; i < 7; ++i) {
        cin >> num;
        if (num > max) {
            max = num;
        }
    }
    cout << "Максимальное число: " << max << endl;
}