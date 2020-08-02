#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, p, x;
    std::cin >> N;
    std::vector<int> v = {};

    while (N != 0){
        p = N % 2;
        x = N / 2;
        v.push_back(p);
        N = x;
    }
    reverse(begin(v), end(v));
    for(auto i : v){
        std::cout << i << " ";
    }
    return 0;
}
