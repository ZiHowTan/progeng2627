#include <iostream>

int main(){
    double length, width, perimeter, area;
    std::cout << "Enter the length: " << std::endl;
    std::cin >> length;
    std::cout << "Enter the width: " << std:: endl;
    std::cin >> width;

    perimeter = (2*length) + (2*width);
    area = length * width;

    std::cout << "The perimeter of your rectangle is " << perimeter << std::endl;
    std::cout << "The area of your rectangle is " << area << std::endl;

}