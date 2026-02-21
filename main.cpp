#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // --- ЗАДАНИЕ 1a: ПРЯМОУГОЛЬНИК ---
    double a, b;
    cout << "--- Расчет Прямоугольника ---" << endl;
    cout << "Введите сторону a: ";
    cin >> a;
    cout << "Введите сторону b: ";
    cin >> b;

    if (a <= 0 || b <= 0) {
        cout << "Ошибка: Стороны должны быть положительными!" << endl;
    } else {
        cout << "Периметр: " << 2 * (a + b) << endl;
        cout << "Площадь: " << a * b << endl;
        cout << "Диагональ: " << sqrt(a * a + b * b) << endl;
    }

    cout << endl << "--- ЗАДАНИЕ 1d: ОКРУЖНОСТЬ ---" << endl;

    // --- ЗАДАНИЕ 1d: ОКРУЖНОСТЬ ---
    const double PI = 3.1415926535;
    double r, angle;

    cout << "Введите радиус окружности: ";
    cin >> r;
    cout << "Введите угол сектора (в градусах): ";
    cin >> angle;

    if (r <= 0) {
        cout << "Ошибка: Радиус должен быть положительным!" << endl;
    } else {
        cout << "Длина окружности: " << 2 * PI * r << endl;
        cout << "Площадь круга: " << PI * r * r << endl;
        cout << "Площадь сектора: " << (PI * r * r * angle) / 360.0 << endl;
    }

    return 0;
}

