#include <iostream>

void myswap(int& n1, int& n2){
//symbol '&' used for passing by reference

    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;

}


int main(){
    int n1, n2;

    std::cout << "Enter two values: " << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "You've entered" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    myswap(n1, n2);

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
}