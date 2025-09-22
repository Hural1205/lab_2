// Lab_02.cpp 
// < Юрій Гураль > 
// Лабораторна робота № 2.1 
// Лінійні програми. 
// Варіант 3 

#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double a;  // вхідний параметр
    double b;
    double c;
    double z1; // результат обчислення 1-го виразу 
    double z2; // результат обчислення 2-го виразу 

    cout << "a = "; cin >> a;
    
    b = sin(2 * a) + sin(5 * a) - sin(3 * a);
    c = cos(a) + 1 - 2 * pow(sin(2 * a), 2);
    z1 = b / c;
    z2 = 2 * sin(a);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}
