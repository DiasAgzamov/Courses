#include <iostream>
#include <cmath>

int main() {
    double a, b, c, D, x1, x2;
    std::cin >> a >> b >> c;
    if (a == 0) {
        std::cout << "This isn't Quadratic Equation: No decisions" << std::endl;

        return 1;
    }

    D = b * b - 4 * a * c;
    if (D > 0) {
        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = ((-b) - sqrt(D)) / (2 * a);
        std::cout << x1 << " " << x2 << std::endl;
    } else if (D == 0) {
        x1 = -(b / (2 * a));
        std::cout << x1 << std::endl;
    } else if (D < 0) {
        std::cout << "Discriminant less than 0: No decisions" << std::endl;
    }
    return 0;
}