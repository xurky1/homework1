#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    //1
    float R1, R2, R3, R0;
    cin >> R1;
    cin >> R2;
    cin >> R3;
    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);
    cout << "R0 = " << R0 << "\n";

    //2
    const float PI = 3.14;
    float S, L, R;
    cout << "Введите длину окружности: ";
    cin >> L;
    R = L / (PI * 2);
    S = PI * R * R;
    cout << "S = " << S;

    //3
    float v, t, a;
    cout << "Введите v:";
    cin >> v;
    cout << "Введите a:";
    cin >> a;
    cout << "Введите t:";
    cin >> t;
    cout << "s = " << v * t + (a * t * t) / 2;
}
