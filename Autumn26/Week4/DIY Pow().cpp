#include <iostream>

double mypow(double base, int exp){
    double result=1;

    if(exp > 0){
        for(int i=0; i<exp; i++){
            result = result * base;
        }
    }
    else{
        for(int i=0; i<-exp; i++){
            result = result * base;
        }
    }

    return result;
}

int main(){
    int x, n, sum=0;
    std::cin >> x >> n;

    for(int i=0; i<n+1; i++){
        sum = sum + mypow(x, i);
    }

    std::cout << "The sum of power is " << sum << std::endl;
}