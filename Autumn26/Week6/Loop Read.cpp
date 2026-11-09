#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile;
    infile.open("input.txt");

    if(infile.is_open()){
        int tmp;
        int sum=0;

        while(infile >> tmp){
            std::cout << tmp << std::endl;
            sum = sum + tmp;
        } 

        infile.close();
        std::cout << "The sum is " << sum << std::endl;
    }
    else{
        std::cout << "Error in opening file" << std::endl;
    }
}