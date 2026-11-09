#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

int main(){
    std::string inputfilename;

    std::cout << "Enter name of input file:" << std::endl;
    std::cin >> inputfilename;

    std::ifstream infile;
    infile.open(inputfilename);

    if(!infile.is_open()){         
        std::cout << "error opening input file" << std::endl;        
        return EXIT_FAILURE;    
    }

    std::string tmp;
    std::vector <std::string> v;

    while(infile >> tmp){
        v.push_back(tmp);
    }

    infile.close();

    std::ofstream outfile;
    outfile.open("output2.txt");

    if(!outfile.is_open()){         
        std::cout << "error opening input file" << std::endl;        
        return EXIT_FAILURE;    
    }

    for(int i=0; i < v.size(); i++){
        outfile << v[i] << std::endl;
    }

    outfile.close();
}
