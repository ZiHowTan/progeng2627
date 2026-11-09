#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i=0; i < vin.size(); i++){
        if(vin[i] == s){
            return i;
        }
    }

    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2,
    std::vector<std::string>& vout){

        for(int i=0; i < vin1.size(); i++){
            vout.push_back(vin1[i]);
        }

        std::string currentitem;

        for(int j=0; j < vin2.size(); j++){
            currentitem = vin2[j];
            
            if(search_vector(currentitem, vout) == -1){
                vout.push_back(vin2[j]);
            }
        }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2,
    std::vector<std::string>& vout){

        for(int i=0; i < vin1.size(); i++){
            
            if(search_vector(vin1[i], vin2) != -1){
                vout.push_back(vin1[i]);
            }
        }

}


int main(){
    std::ifstream infile1, infile2;
    infile1.open("warehouse1.txt");
    infile2.open("warehouse2.txt");

    if((!infile1.is_open()) || (!infile2.is_open())){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    std::vector<std::string> vin1;
    std::vector<std::string> vin2;

    while(infile1 >> tmp){
        vin1.push_back(tmp);
    }

    while(infile2 >> tmp){
        vin2.push_back(tmp);
    }

    infile1.close();
    infile2.close();

    std::vector<std::string> u_vout;
    std::vector<std::string> i_vout;

    union_vector(vin1, vin2, u_vout);
    intersection_vector(vin1, vin2, i_vout);

    std::ofstream outfile1, outfile2;

    outfile1.open("union.txt");
    outfile2.open("intersection.txt");

    if((!outfile1.is_open()) || (!outfile2.is_open())){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i=0; i < u_vout.size(); i++){
        outfile1 << u_vout[i] << std::endl;
    }

    for(int j=0; j < i_vout.size(); j++){
        outfile2 << i_vout[j] << std::endl;
    }

    outfile1.close();
    outfile2.close();
}