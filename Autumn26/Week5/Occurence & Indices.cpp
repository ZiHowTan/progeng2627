#include <iostream>
#include <vector>

int main(){
    int n, s, value, count=0;
    std::vector<int> v;
    std::vector<int> indices;

    std::cout << "How many numbers you want to input? " << std::endl;
    std::cin >> n;

    std::cout << "Now enter your " << n << " number(s)" << std::endl;
    
    for(int i=0; i<n; i++){
        std::cin >> value;
        v.push_back(value);
    }

    std::cout << "Enter your s: " << std::endl;
    std::cin >> s;

    for(int i=0; i<n; i++){
        if(v.at(i) == s){
            count = count + 1;
            indices.push_back(i);
        }
    }

    if(count == 0){
        std::cout << "There are no occurence of " << s << std::endl;
    }
    else{
        std::cout << "There are " << count << " occurence(s) of " << s;
        std::cout << "at indices: " << std::endl;

        for(int i=0; i<indices.size(); i++){
            std::cout << indices.at(i) << std::endl;
        }
    }
}