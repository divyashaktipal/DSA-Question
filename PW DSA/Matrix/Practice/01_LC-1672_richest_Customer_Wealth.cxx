// Question: LC-1672 Richest Customer Wealth
// You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.
// A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

// Example 1:

// Input: accounts = [[1,2,3],[3,2,1]]
// Output: 6
// Explanation:
// 1st customer has wealth = 1 + 2 + 3 = 6
// 2nd customer has wealth = 3 + 2 + 1 = 6
// Both customers are considered the richest with a wealth of 6 each, so return 6.

// Approach:
// 1.) Calculated Each row sum and stored them into a new vector 'rowSums'.
// 2.) Find the maximum element from the 'rowSums' vector using '*max_element()' and return it.

// Time Complexity: O(m*n) where m is the number of rows and n is the number of columns.
// Space Complexity: O(m) where m is the number of rows.


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        vector<int> rowSums;
        for (const auto &row : accounts)
        {
            int sum = 0;
            for (int val : row)
                sum += val;
            rowSums.push_back(sum);
        }
        // find the largest element
        int res = *max_element(rowSums.begin(), rowSums.end());
        return res;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> accounts = {{1, 2, 8}, {3, 99, 1}};

    int res = sol.maximumWealth(accounts);

    cout << "Richest man is: " << res;
}