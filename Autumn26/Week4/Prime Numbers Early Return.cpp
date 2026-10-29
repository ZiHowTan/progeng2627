#include <iostream>

int smallest_factor(int n){
    for(int cf=2; cf < n; cf++){
        if((n % cf)== 0){
            return cf;
        }
    }
    return 0;
}

int main(){
    int n1, n2;

    std::cout << "Enter a range [LowerBound] [UpperBound]: " << std::endl;
    std::cin>> n1 >> n2;

    for(int i=n1; i<n2+1; i++){
        if(smallest_factor(i) == 0){
            std::cout << i << std::endl;
        }
    }
}