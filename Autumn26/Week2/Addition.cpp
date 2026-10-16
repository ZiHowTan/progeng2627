#include <iostream>

int main(){
    double n1, n2, sum;
    //declare numerical variables
    //double -> general decimal number (date type)

    std::cout << "Enter the first number: " << std::endl;
    std::cin >> n1;

    std::cout<<"Enter the second number: " << std::endl;
    std::cin >> n2;

    sum = n1 + n2;
    //adding n1 & n2 into sum

    std::cout << n1 << " + " << n2 << " = " << sum << std::endl;
}