#include <iostream>
#include <cmath>  
#include <iomanip> 

using namespace std;

int main() {
    cout << fixed << setprecision(2);

    // --- ЗАДАНИЕ 1.a: ПРЯМОУГОЛЬНИК ---
    cout << "=== Задание 1.a: Прямоугольник ===" << endl;
    double sideA, sideB;
    
    cout << "Введите сторону a: ";
    cin >> sideA;
    cout << "Введите сторону b: ";
    cin >> sideB;

    if (sideA <= 0 || sideB <= 0) {
        cout << "Ошибка: Стороны должны быть положительными!" << endl;
    } else {
        double rectPerimeter = 2 * (sideA + sideB);
        double rectArea = sideA * sideB;
        double rectDiagonal = sqrt(pow(sideA, 2) + pow(sideB, 2));

        cout << "Результаты:" << endl;
        cout << "- Периметр: " << rectPerimeter << endl;
        cout << "- Площадь: " << rectArea << endl;
        cout << "- Диагональ: " << rectDiagonal << endl;
    }

    cout << endl; 

    // --- ЗАДАНИЕ 1.d: ОКРУЖНОСТЬ ---
    cout << "=== Задание 1.d: Окружность ===" << endl;
    const double PI = 3.141592653589793;
    double radius, sectorAngle;

    cout << "Введите радиус (r): ";
    cin >> radius;
    cout << "Введите угол сектора (в градусах): ";
    cin >> sectorAngle;

    if (radius <= 0) {
        cout << "Ошибка: Радиус должен быть положительным" << endl;
    } else {
        double circumference = 2 * PI * radius;
        double circleArea = PI * pow(radius, 2);
        double sectorArea = (circleArea * sectorAngle) / 360.0;

        cout << "Результаты:" << endl;
        cout << "- Длина окружности: " << circumference << endl;
        cout << "- Площадь круга: " << circleArea << endl;
        cout << "- Площадь сектора: " << sectorArea << endl;
    }

    cout << endl << "Работа программы завершена." << endl;

    return 0;
}
