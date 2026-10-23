#include <iostream>
#include <cmath>

int main(){
    int x, n, sum=0;
    std::cin >> x >> n;

    for(int i=0; i<n+1; i++){
        sum = sum + std::pow(x, i);
    }

    std::cout << "The sum of power is " << sum << std::endl;
}