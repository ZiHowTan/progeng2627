#include <iostream>

int main(){
    double x, product = 1;
    int n;

    std::cout << "Enter your base and index: " << std::endl;
    std::cin >> x >> n;

    for(int i = 0; i < n; i++){
        product = product * x;
    }

    std::cout << "The result is " << product << std::endl;
}