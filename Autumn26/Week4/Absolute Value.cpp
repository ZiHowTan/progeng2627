#include <iostream>

double myabs(double in){
//functions declaration
//input parameter of type double (double in)
    double abs;

    if(in < 0){
        abs = -in;
    }
    else{
        abs = in;
    }

    return abs;
}

int main(){
    double n;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;
}