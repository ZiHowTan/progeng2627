#include <iostream>

double max2num(double n1, double n2){
    double max;

    if(n1 > n2){
        max = n1;
    }
    else{
        max = n2;
    }

    return max;
}

int main(){
    double num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "The maximum of these two numbers is " << max2num(num1, num2) << std::endl;
}