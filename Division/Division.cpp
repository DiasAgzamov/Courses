#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    if (B == 0){
        std::cout << "Impossible: Division by Zero" << std::endl;
    } else {
        std::cout << A / B << std::endl;
    }
    return 0;
}
