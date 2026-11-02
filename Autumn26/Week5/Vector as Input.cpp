#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin){
    double sum = 0;

    for(int i=0; i < vin.size(); i++){
        sum = sum + vin[i];
    }
    return sum;
}

int main(){
    std::vector<double> v;
    double n, value;


    std::cout << "How many elements you want to store in the vector?" << std::endl;
    std::cin >> n;
    std::cout << "Enter your elements: " << std::endl;

    for(int i=0; i<n; i++){
        std::cin >> value;
        v.push_back(value);
    }
    
    std::cout << "The sum is " << sum_vector(v) << std::endl;
}