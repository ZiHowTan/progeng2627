#include <iostream>

int main(){
    int n, rem;
    //declare integer variables

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    rem = n % 2;

    std::cout << "In the following line 0 means even and 1 means odd" << std::endl;
    std::cout << rem;
}