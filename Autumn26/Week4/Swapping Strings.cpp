#include <iostream>
#include <string>

void swap_string(std::string& str1, std::string& str2){

    std::string tmp;
    tmp = str1;
    str1 = str2;
    str2 = tmp;

}

int main(){
    std::string str1, str2;

    std::cout << "Enter two strings: " << std::endl;
    std::cin >> str1 >> str2;

    std::cout << "You've entered" << std::endl;
    std::cout << "String 1: " << str1 << std::endl;
    std::cout << "String 2: " << str2 << std::endl;

    swap_string(str1, str2);

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "String 1: " << str1 << std::endl;
    std::cout << "String 2: " << str2 << std::endl;
}