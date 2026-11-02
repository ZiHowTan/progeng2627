#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for(int i=0; i<vin.size(); i++){
        if(vin[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){
    std::vector<int> v;
    int n, value;

    std::cout << "How many elements you want to store in the vector?" << std::endl;
    std::cin >> n;
    std::cout << "Enter your elements: " << std::endl;

    for(int i=0; i<n; i++){
        std::cin >> value;
        v.push_back(value);
    }
    
    std::cout << search_vector(7, v) << std::endl;
}