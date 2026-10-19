#include <iostream>

int main(){
    int n = -1, sum = 0;
    double avg = 0, count = 0;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    
    while(n != 0){
        count = count + 1;
        sum = sum + n;
        avg = sum / count;
        std::cout << "The average so far is: " << std::endl;
        std::cout << avg << std::endl;

        std::cout << "Enter a number: " << std::endl;
        std::cin >> n;
        
        
    }
}