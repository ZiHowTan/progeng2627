#include <iostream>

int main(){
    int n, result, step = 0, curmax;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    result = n;
    curmax = n;

    while(result != 1){
        if((result % 2) != 0){
            result = (3*result) + 1;
        }
        else{
            result = result / 2;
        }
        
        if(curmax < result){
            curmax = result;
        }
        std::cout << result<< "\t";
        step = step + 1;
    }

    std::cout << "\nTotal steps: " << step << std::endl;
    std::cout << "Maximum number: " << curmax << std::endl;
}