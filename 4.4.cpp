#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double xp, xk, dx, R;
    cout << "Введіть значення xp (початковий x): ";
    cin >> xp;
    cout << "Введіть значення xk (кінцевий x): ";
    cin >> xk;
    cout << "Введіть значення кроку dx: ";
    cin >> dx;
    cout << "Введіть значення R: ";
    cin >> R;

    double x, y;

    cout << fixed;
    cout << "--------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(15) << "y" << " |" << endl;
    cout << "--------------------------------------------" << endl;

    x = xp;
    while (x <= xk) {
        if (x <= 0)
            y = (-(R * x + 6 * R)) / (6);
        else if (0 < x && x <= R)
            y = -sqrt(R * R - x * x);
        else if (R < x && x <= 2 * R)
            y = sqrt(R * R - (x - 2 * R) * (x - 2 * R));
        else
            y = R;

        cout << "|" << setw(10) << setprecision(2) << x
            << " |" << setw(16) << setprecision(4) << y
            << " |" << endl;

        x += dx;
    }

    cout << "--------------------------------------------" << endl;

    return 0;
}
