#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <cmath>

int twod_to_oned(int row, int col, int rowlen){
    return row*rowlen + col;
}

int mfind(int n, const std::vector<int>& v){
     for(int i=0; i < v.size(); i++){
        if(v[i] == n){
            return i;
        }
     }
     return -1;
}

bool check_sequence(const std::vector<int>& v){
    for(int n = 1; n <= v.size(); n++){
        if(mfind(n, v) == -1){
            return false;
        }
    }
    return true;
}


void get_row(int r, const std::vector<int>& in, std::vector<int>& out){
    int row_len = std::sqrt(in.size());

    for(int i=0; i < row_len; i++){
        out.push_back(in[twod_to_oned(r, i, row_len)]);
    }
}

void get_col(int c, const std::vector<int>& in, std::vector<int>& out){
    int col_len = std::sqrt(in.size());

    for(int i=0; i < col_len; i++){
        out.push_back(in[twod_to_oned(i, c, col_len)]);
    }
}


void get_subq(int subs, const std::vector<int>& in, std::vector<int>& out){
    int row_len = std::sqrt(in.size());
    int subq_len = std::sqrt(std::sqrt(in.size()));

    int starting_row = ((subs - (subs % subq_len)) / subq_len) * subq_len;
    int starting_col = (subs % subq_len) * subq_len;

    for(int row=0; row < subq_len; row++){
        for(int col=0; col < subq_len; col++){
            out.push_back(in[twod_to_oned(starting_row + row, starting_col + col, row_len)]);
        }
    }
}

bool valid_sudoku(const std::vector<int>& g){
    int side = std::sqrt(g.size());
    std::vector<int> seq;

    for(int i=0; i < side; i++){
        seq.clear();
        get_row(i, g, seq);

        if(!check_sequence(seq)){
            return false;
        }
        
    }

    for(int i=0; i < side; i++){
        seq.clear();
        get_col(i, g, seq);

        if(!check_sequence(seq)){
            return false;
        }
        
    }

    for(int i = 0; i < side; i++){
        seq.clear();
        get_subq(i, g, seq);

        if(!check_sequence(seq)){
            return false;
        }
    }

    return true;
}

int main(int argc, char* argv[]){

    if(argc != 2){
        std::cout << "one argument needed" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<int> s;

    std::ifstream infile;
    infile.open(argv[1]);

    if(!infile.is_open()){
        std::cout << "Error. Can't open input file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        s.push_back(tmp);
    }

    infile.close();

    int side = std::sqrt(s.size());

    for(int i=0; i < side; i++){
        for(int j=0; j < side; j++){
            std::cout << s[twod_to_oned(i, j, side)] << " ";
        }
        std::cout << std::endl;
    }

    bool valid = valid_sudoku(s);

    if(valid){
        std::cout << "valid" << std::endl;
    }
    else{
        std::cout << "not valid" << std::endl;
    }
}