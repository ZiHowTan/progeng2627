#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    std::ofstream outfile;
    //'o' is for output

    outfile.open("output.txt");

    if(!outfile.is_open()){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    outfile << "Hello" << std::endl;
    //prints on outputfile

    outfile.close();
}