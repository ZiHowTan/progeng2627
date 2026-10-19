#include <iostream>

int main(){
    int n = -1, sum = 0;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    
    while(n != 0){
        sum = sum + n;
        std::cout << "The sum so far is: " << std::endl;
        std::cout << sum << std::endl;

        std::cout << "Enter a number: " << std::endl;
        std::cin >> n;
        
        
    }
}