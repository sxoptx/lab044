// lab044.cpp
// Дем'ян Аліна
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком.
// Варіант 7

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double R;
    double xp;
    double xk;
    double dx;
    double x;
    double y;

    cout << "R = ";  cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "y" << " |" << endl;
    cout << "----------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -R)
            y = R;
        else
            if (x <= R)
                y = R - sqrt(R * R - x * x);
            else
                if (x <= 6)
                    y = R + (-3 - R) / (6 - R) * (x - R);
                else
                    y = x - 9;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }
    cout << "----------------------" << endl;

    cin.get();
    cin.get();
    return 0;
}