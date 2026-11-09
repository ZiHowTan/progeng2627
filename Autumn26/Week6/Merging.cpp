#include <iostream>
#include <vector>


void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    int complete =0;

    for(int i=0; i < v1.size(); i++){
        int count = 0;
        for(int j=complete; j < v2.size(); j++){
            if(v1[i] >= v2[j]){
                merged.push_back(v2[j]);
                count++;
            }
        }
        complete = complete + count;
        merged.push_back(v1[i]);
    }

    if(complete != v2.size()){
        for(int k=complete; k < v2.size(); k++){
            merged.push_back(v2[k]);
        }
    }
}

int main(){
    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;
    
    
    std::vector<int> expected_output;

    v1 = {2, 3, 5, 6};
    v2 = {1, 6, 10};
    expected_output = {1, 2, 3, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out==expected_output){
        std::cout << "passed" << std::endl;
    }

    else{
        std::cout << "not passed" << std::endl;
    }
}

