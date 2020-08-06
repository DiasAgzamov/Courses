#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;
    int a = count(begin(s), end(s), 'f');
    int x = 0;
    if (a == 0){
        std::cout << "-2" << std::endl;
        }else if(a == 1) {
        std::cout << "-1" << std::endl;
    }else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'f') {
                x++;
                if (x == 2) {
                    std::cout << i << std::endl;
                    break;
                }
            }
        }
    }

    return 0;
}
