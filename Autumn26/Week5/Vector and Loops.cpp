#include <iostream>
#include <vector>

int main(){
    std::vector<int> sequence;
    int tmp = 1;

    std::cout << "Enter a sequence terminated by 0" << std::endl;
    
    while(tmp != 0){
        std::cin >> tmp;
        sequence.push_back(tmp);
    }

    std::cout << "You have finished inputting your sequence." <<std::endl;

    for(int i=0; i<sequence.size(); i++){
        std::cout << sequence[i] <<std::endl;
    }

    std::cout << "In reverse order: " << std::endl;

    for(int i=sequence.size()-1; i>-1; i--){
        std::cout << sequence[i] << std::endl;
    }
}