#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    double min;
    int index;
    
    if(vin.size() == 0){
        return -1;
    }
    else{
        min = vin[0];
        index = 0;

        for(int i=0; i < vin.size(); i++){
            if(min > vin[i]){
                min = vin[i];
                index = i;
            }
        }
    }
    return index;
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
    
    std::cout << min_vector_element(v) << std::endl;
}