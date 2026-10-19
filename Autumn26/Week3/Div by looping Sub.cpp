#include <iostream>

int main(){
    int a, b, q = 0, r;
    bool flag = false;

    std::cout << "Enter two numbers you want to divide: " << std::endl;
    std::cin >> a >> b;

    while(flag == false){
        if(a > b){
            q = q + 1;
            a = a - b;
        }
        else{
            r = a;
            flag = true;
        }
    }
    
    std::cout << "The quotient is " << q << std::endl;
    std::cout << "The remainder is " << r << std::endl;
}