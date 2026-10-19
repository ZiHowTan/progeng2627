#include <iostream>

int main(){
    int n, c = 0, r = 0;
    std::cin >> n;

    while(c < n){
        r = 0;
        while(r < n){
            std::cout << "*";
            r = r + 1;
        }

        std::cout << std::endl;
        c = c + 1;
    }
}