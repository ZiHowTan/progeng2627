#include <iostream>
#include <fstream>
//for working with text files

int main(){
    std::ifstream infile;
    //declare object that represents the textfile
    //of type std::ifstream => 'i' is for input

    infile.open("input.txt");

    if(infile.is_open()){
    //check if can read the file
        
        int tmp;

        infile >> tmp;
        std::cout << tmp << std::endl;
        //read and print first number in file

        infile>>  tmp;
        std::cout << tmp << std::endl;
        //read and print second number in file

        infile >> tmp;
        std::cout << tmp << std::endl;
        //read and print third number in file

        infile>>  tmp;
        std::cout << tmp << std::endl;
        //read and print fourth number in file

        infile.close();
    }
    else{
        std::cout << "Error opening file: " << std::endl;
    }
}