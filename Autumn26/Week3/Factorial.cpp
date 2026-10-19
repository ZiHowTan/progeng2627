#include <iostream>

int main(){
    int n, count, result = 1;

    std::cout << "Enter a number for factorial: " << std::endl;
    std::cin >> n;
    count = n;
    for(int i=0; i < count; i++){
        result = result * n;
        n = n - 1;
    }
    std::cout << "The result is " << result << std::endl;
}