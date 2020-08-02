#include <iostream>

int main() {
    int m, n;
    std::cin >> m >> n;
    for (int i = m; i > 0; i--){
        if (m % i == 0 && n % i == 0){
            std::cout << i << std::endl;
            break;
        }
    }
    return 0;
}
