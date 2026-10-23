#include <iostream> 

int main(){
    int n;
    bool found_factor = false;
    
    std::cout << "Enter an integer greater than 1" << std::endl;
    std::cin >> n;

    for(int cf = 2; cf < n; cf++){
        if((n % cf) == 0){
            found_factor = true;
        }
    }

    if(found_factor){
        std::cout << "The number is not prime." << std::endl;
    }
    else{
        std::cout << "The number is prime." << std::endl;
    }
}