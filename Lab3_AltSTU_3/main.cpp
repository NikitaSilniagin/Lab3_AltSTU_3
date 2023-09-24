// 17 Вариант, 3 задание
//
// Вычислить значение функции y = f (x) при произвольных x.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double A = 1.3;  // Используем 'const' для объявления констант
    const double B = 2.4;
    const double E = 2.71828;
    
    double x;
    
    // Запрашиваем ввод значения переменной X
    cout << "Введите значение переменной X: ";
    cin >> x;

    double z = 0; // Инициализируем z

    if (x < 3) {
        z = pow(E, sin(x));
    } else if (x < 5) {
        z = cos(sqrt(A * x));
    } else{
        z = pow(sin(B * x), 2);
    }

    // Выводим результат функции f(x)
    cout << "При x = " << x << ", f(x) = " << z << endl;

    return 0;
}

