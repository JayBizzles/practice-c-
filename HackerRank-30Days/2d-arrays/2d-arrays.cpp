// C++ program to add the hourglasses in 6x6 array and print the max sum of all hourglasses
#include <iostream>
#include <vector>

using namespace std;

int main(){
    // take the first three numbers in the array
    // take the number underneath the median by adding one to the row value
    // take the first three numbers underneath the swivel by adding 2 to the row value fro, the numbers in the beginning

    //[0,0] [0,1] [0,2]
    //      [1,1]
    //[2,0] [2,1] [2,2]

    //after adding these numbers and saving them to a variable, check to see if the we ran through this 4 times(dine by adding to a counter everytime that save a sum to a variable)
    //shift down if the counter = 4
    //reset counter and repeat the algo
    int rows = 6;
    int cols = 6;
    int init_val = 0;

    vector<vector<int>> matrix;
    matrix.resize(rows, vector<int>(cols, init_val));
    for(int i = 0; i<rows;i++){
        for(int j = 0;j<cols;j++){
            cout << matrix[i][j];
        }
    }
    return 0;
}