// GFG: https://www.geeksforgeeks.org/problems/search-in-a-row-wise-sorted-matrix/0

// Search in a row-wise sorted matrix
// Question:
// Given a row-wise sorted 2D matrix mat[][] of size n x m and an integer x, find whether element x is present in the matrix.
// Note: In a row-wise sorted matrix, each row is sorted in itself, i.e. for any i, j within bounds, mat[i][j] <= mat[i][j+1].

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        int m = mat.size();
        int n = mat[0].size();
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(x == mat[i][j]){
                    return true;
                    break;
                }
            }
        }
        return false;
    }
};

int main(){
    Solution sol;
    vector<vector<int>> mat1 = {{3,4,9},{2,5,6},{9,25,27}};
    int x1 = 9;

    vector<vector<int>> mat2 = {{19, 22, 27, 38, 55, 67}};
    int x2 = 56;

    bool res1 = sol.searchRowMatrix(mat1, x1);
    bool res2 = sol.searchRowMatrix(mat2, x2);

    if(res1 == 1)
        cout << "X1 is present " <<endl;
    else    
        cout << "X1 is not present ";
    
    if(res2 == 1)
        cout << "X2 is present " <<endl;
    else    
        cout << "X2 is not present ";
    
}