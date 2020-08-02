#include <iostream>

int main(){
    int A, B;
    std::cin >> A >> B;
    while(A > 0 && B > 0){
        if (A > B){
            A = A % B;
        }else{
            B = B % A;
        }
    }
    std::cout << A + B << std::endl;
    return 0;
}