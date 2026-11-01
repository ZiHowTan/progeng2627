#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    //vector declaration
    //<> specifies the data type
    //vector initially empty

    v.push_back(10);
    //adding elements

    v.push_back(20);

    std::cout << v[0] << std::endl;

    v[0] = 5;
    //overwrite cell values

    v.push_back(30);

    std::cout << v.size() << std::endl;
    //print how manny cells in vector

    int result;
    result = v[0] * (v[1] + v[2]);

    std::cout << result << std::endl;

}