#include <iostream>
#include <fstream>
#include <cstdlib>
//needed for EXIT_FAILURE

int main(){
    std::ifstream infile;
    infile.open("input.txt");

    if(!infile.is_open()){
    //if the file is not open

        std::cout << "Error in opening file" << std::endl;
        return EXIT_FAILURE;
    }
    //if the return is executed thne the following lines will be ignored
    
    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }
    infile.close();

    std::cout << "Print this if u can" << std::endl;
}
