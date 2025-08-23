// Leetcode - 1572 (Matrix Diagonal Sum)

// Question:
// Given a square matrix mat, return the sum of the matrix diagonals.
// Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

// Example:
// Input: mat = [[1,2,3],
//               [4,5,6],
//               [7,8,9]]
// Output: 25(1+5+9 + 3+7)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int m = mat.size();
        int sum = 0;

        for (int i = 0; i < m; i++)
        {
            sum += mat[i][i];         // primary
            sum += mat[i][m - i - 1]; // secondary
        }
        if (m % 2 == 1) // for odd rows(middle element will be count two times)
            sum -= mat[m / 2][m / 2];
        return sum;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> mat1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> mat2 = {{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};

    int res1 = sol.diagonalSum(mat1);
    int res2 = sol.diagonalSum(mat2);

    cout << "Example 1: " << res1 << endl;
    cout << "Example 2: " << res2;
}
