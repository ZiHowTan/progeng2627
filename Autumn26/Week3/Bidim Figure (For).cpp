#include <iostream>

int main(){
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        for (int i2 = 0; i2 < n; i2++){
            std::cout << "*";
        }
        
        std::cout << std::endl;

    }
}