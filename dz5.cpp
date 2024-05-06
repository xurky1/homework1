// dz5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;



//1
/*int main()
{
    setlocale(LC_ALL, "Russian");
    int number;
    int count = 0;
    int sum = 0;
    int zero = 0;

    cout << "введите число: ";
    cin >> number;

    int temp_number = number;
    while (temp_number != 0) {
        count++;
        sum += temp_number % 10;
        if (temp_number % 10 == 0) {
            zero++;
        }
        temp_number = temp_number / 10;
    }

    float avg = sum / count;

    cout << "количество цифр: " << count << endl;
    cout << "сумма цифр: " << sum << endl;
    cout << "среднее арифметическое: " << avg << endl;
    cout << "кол-во нулей: " << zero << endl;
}*/

//2
/*int main() {
    int size;
    setlocale(LC_ALL, "Russian");
    cout << "размер:";
    cin >> size;

    for (int i = 0; i < size * 3; i++) {
        for (int j = 0; j < size * 4; j++) {
            if ((i / size + j / size) % 2 == 0) {
                cout << "*";
            }
            else {
                cout << "-";
            }
        }
        cout << endl;
    }
}*/

//3
/*int main() {

    setlocale(LC_ALL, "Russian");
    int total_people;
    float total_cost = 0.0;

    cout << "кол-во человек в заказе: ";
    cin >> total_people;

    for (int i = 0; i < total_people; i++) {
        int drinks_choice, food_choice;
        float drinks_cost = 0.0, food_cost = 0.0;

        cout << "чел " << i + 1 << " - выбери напиток (1. чай 150, 2. кофе 200): ";
        cin >> drinks_choice;

        if (drinks_choice == 1) {
            drinks_cost += 150;
        }
        else if (drinks_choice == 2) {
            drinks_cost += 200;
        }

        cout << "чел " << i + 1 << " - выбери еду (1. круассан 175, 2. кекс 200): ";
        cin >> food_choice;

        if (food_choice == 1) {
            food_cost += 175;
        }
        else if (food_choice == 2) {
            food_cost += 200;
        }

        total_cost += drinks_cost + food_cost;
    }

    cout << "заказ " << total_people << " людей стоит: " << total_cost << endl;
}*/

//4
/* int main() {
for (int i = 0; i < 10; i++) {
    for (char c = 'A'; c <= 'J'; c++) {
        cout << c << i << " ";
    }
    cout << endl;
}
}*/