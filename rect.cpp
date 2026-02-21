#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;

    cout << "Введите сторону a: ";
    cin >> a;
    cout << "Введите сторону b: ";
    cin >> b;

    if (a <= 0 || b <= 0) {
        cout << "Ошибка: Стороны должны быть положительными!" << endl;
        return 1;
    }

    double perimeter = 2 * (a + b);
    double area = a * b;
    double diagonal = sqrt(a * a + b * b);

    cout << "--- Результаты ---" << endl;
