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

double sum_of_powers(double x, int n){
    double sum=0;

    for(int i=1; i<n+1; i++){
        sum = sum + mypow(x, i);
    }

    return sum;
}

int main(){
    double x;
    int n;

    std::cin >> x >> n;
    std::cout << "The sum of powers is " << sum_of_powers(x, n) << std::endl;
}