#include <iostream>
#include <vector>

int main(){
    int n, t, value, count;
    std::vector<int> v;

    std::cout << "How many numbers you want to input? " << std::endl;
    std::cin >> n;

    std::cout << "Now enter your " << n << " number(s)" << std::endl;
    
    for(int i=0; i<n; i++){
        std::cin >> value;
        v.push_back(value);
    }

    std::cout << "Enter your upper bound: " << std::endl;
    std::cin >> t;

    std::cout << "Numbers lower than " << t << " : " << std::endl;
    for(int i=0; i<n; i++){
        if(v.at(i) < t){
            std::cout << v.at(i) << std::endl;
        }
    }
}