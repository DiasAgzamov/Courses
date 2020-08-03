#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;
    int a = count(begin(s), end(s), 'f');
    int x = 0;
    for(int i = 0; i < s.size(); i++){
        if (a == 0){
            std::cout << "-2" << std::endl;
            break;
        }else if(a == 1){
            std::cout << "-1" << std::endl;
            break;
        }else if (a >= 2) {
            if (s[i] == 'f'){
                x++;
                if (x == 2){
                    x = i;
                    std::cout << i << std::endl;
                }
            }
        }
    }

    return 0;
}
