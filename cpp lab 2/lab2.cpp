#include <iostream>
#include <cmath>
using namespace std;

double pow(double x, int y) {
    long double c = 1;
    for (int i = 0; i < y; i++) {
        c = c * x;
    }
    return c;
}
double factorial(int x) {
    double c = 1;
    if (x % 2 == 0) {
        for (int i = 2; i <= x; i += 2) {
            c = c * i;
        }
    }
    else {
        for (int i = 1; i <= x; i += 2) {
            c = c * i;
        }
    }
    return c;
}
double t(double x) {
    double chisl = 0;
    double znamen = 0;
    for (int k = 0; k <= 10; k++) {
        chisl += pow(x, 2 * k + 1) / factorial(2 * k + 1);
    }
    for (int k = 0; k <= 10; k++) {
        znamen += pow(x, 2 * k) / factorial(2 * k);
    }
    double t = chisl / znamen;
    return t;
}

int main() {
    int y;
    cin >> y;
    double otvet = (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(pow(y, 2) - 1));
    cout << otvet;

    return 0;
}