#include <iostream>

double max2num(double n1, double n2, double n3){
    double max;

    if((n1 > n2)&&(n1 > n3)){
        max = n1;
    }
    else if((n2 > n1)&&(n2 > n3)){
        max = n2;
    }
    else{
        max = n3;
    }

    return max;
}

int main(){
    double num1, num2, num3;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    std::cout << "The maximum of these three numbers is " << max2num(num1, num2, num3) << std::endl;
}