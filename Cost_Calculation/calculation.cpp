#include <iostream>

int main() {
    double N, A, B, X, Y;
    std::cin >> N >> A >> B >> X >> Y;
    if(N <= A && N <= B){
        std::cout << N << std::endl;
    } else if(N >= A && N <= B){
        std::cout << N - (N * 0.01 * X) << std::endl;
    } else if (N >= B){
        std::cout << N - (N * 0.01 * Y) << std::endl;
    }

    return 0;
}
