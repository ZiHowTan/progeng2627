#include <iostream>
#include <string>

int main(){
    int n, upper, lower, highlow;
    std::string flag = "no";

    std::cout << "Enter the upper bound: " << std::endl;
    std::cin >> upper;

    std::cout << "Enter the lower bound" << std::endl;
    std::cin >> lower;

    while(flag == "no"){
        n = (upper + lower) / 2;
        std::cout << "Is your number " << n << " ?" << std::endl;
        std::cout << "(yes/no)" << std::endl;
        std::cin >> flag;

        if(flag == "no"){
            std::cout << "Enter (1) if your number is higher and (2) if it's lower." << std::endl;
            std::cin >> highlow;

            while((highlow != 1) && (highlow != 2)){
                    std::cout << "Error" <<std::endl;
                    std::cin >> highlow;
            }
            if(highlow == 1){
                lower = n + 1;
            }
            else if(highlow == 2){
                upper = n - 1;
            }
        } 
    }  
    std::cout << "Awesome! Your number is " << n << std::endl;
}