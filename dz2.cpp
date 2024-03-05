#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    //1
    float sec;
    cout << "введите время в секундах:";
    cin >> sec;
    cout << sec / 60 << " минут" << endl;
    cout << sec / 3600 << " часов\n";
    //2
    float n;
    int dollar, cent;
    cout << "введите дробное число: ";
    cin >> n;
    dollar = n;
    cent = (n - dollar) * 100;
    cout << dollar << "," << cent << endl;
    //3
    int d, a;
    cout << "введите количество дней:" << endl;
    cin >> d;
    a = d % 7;
    cout << "введите количество дней:";
    cout << d / 7 << " неделя " << a << " дней ";
    //4
    float speed, distance, time;
    int minutes, seconds;
    cout << "Calculating running speed.";
    cout << " Enter the length of distance(meters) = ";
    cin >> distance;
    cout << " Enter time(min.sec) = ";
    cin >> time;
    minutes = time;
    seconds = (time - minutes) * 100;
    time = (minutes * 60) + seconds;
    speed = distance / time * 3.6;
    cout << "Distance: " << distance << "m\n";
    cout << "Time: " << minutes << " min " << seconds << " sec = " << time << " seconds\n";
    cout << "You were running at speed " << speed << "km/h\n";
    //5
    float dep, procent;
    cout << "введите сумму денежного вклада в евро: ";
    cin >> dep;
    cout << "введите процент годовых, выплачиваемый банком: ";
    cin >> procent;

    float procentmonth = procent / 12 / 100;
    float dengimonth = dep * procentmonth;
    
    cout << "ежемесячный платеж: " << dengimonth << "евро";


}

