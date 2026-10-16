#include <iostream>
#include <string>

int main(){
    std::string first_name;
    std::string last_name;
    //variable declaration

    std::cout << "Enter your first name: " << std::endl;
    //output instruction
    std::cin >> first_name;
    //store input into variable
    
    std::cout << "Enter your last name: " << std::endl;
    std::cin >> last_name;

    std::cout << "Hello " << first_name << " " << last_name << std::endl;
    //printing text and content of variables
}