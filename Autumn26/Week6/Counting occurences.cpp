#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int count_occurences(std::vector<std::string>& vin, const std::string target){
    int count = 0;

    for(int i=0; i < vin.size(); i++){
        if(target == vin[i]){
            count ++;
        }
    }
    
    return count;
}

int main(){
    std::vector<std::string> v_text;
    std::vector<std::string> v_word;
    std::ifstream infile_text, infile_word;
    infile_text.open("text.txt");
    infile_word.open("words.txt");

    if((!infile_text.is_open()) || (!infile_word.is_open())){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile_text >> tmp){
        v_text.push_back(tmp);
    }

    while(infile_word >> tmp){
        v_word.push_back(tmp);
    }


    for(int i=0; i < v_word.size(); i++){
        std::cout << v_word[i] << ": " << count_occurences(v_text, v_word[i]) << std::endl;
    }

    infile_text.close();
    infile_word.close();

}