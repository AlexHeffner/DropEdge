#include "../include/zero_count.h"
#include <chrono>
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

long zero_count(vector<vector<double>> input){
    long count = 0;
    for (size_t i = 0; i < input.size(); i++){
        for (size_t k = 0; k < input[0].size(); k++){
            if(input[i][k] == 0){
                count++;
            }
        }
    }
    // string filenamezeros("zeros_counts.csv");
    // ofstream file_out_zeros;
    // file_out_zeros.open(filenamezeros, std::ios_base::app);
    // file_out_zeros  << count1 << ", " << count2 << endl;
    py::cast(count);
    return count;
}