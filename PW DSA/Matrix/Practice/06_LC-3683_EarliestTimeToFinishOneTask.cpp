// Question: LC-3683 Earliest Time to Finish One Task

// You are given a 2D integer array tasks where tasks[i] = [si, ti].
// Each [si, ti] in tasks represents a task with start time si that takes ti units of time to finish.
// Return the earliest time at which at least one task is finished.

// Example 1:
// Input: tasks = [[1,6],[2,3]]
// Output: 5

// Explanation:
// The first task starts at time t = 1 and finishes at time 1 + 6 = 7. The second task finishes at time 2 + 3 = 5. 
// You can finish one task at time 5.

// Approach:
// 1.) Calculated Each row sum and stored them into a new vector 'rowSums'.
// 2.) Find the minimum element from the 'rowSums' vector using '*min_element()' and return it.

// Time Complexity: O(m*n) where m is the number of rows and n is the number of columns.
// Space Complexity: O(m) where m is the number of rows.


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        vector<int> rowSums;
        for(auto &row : tasks){
            int sum = 0;
            for(int val: row)
                sum += val;
            rowSums.push_back(sum);
        }
        int res = *min_element(rowSums.begin(), rowSums.end());
        return res;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> tasks1 = {{1, 6}, {2, 3}};
    vector<vector<int>> tasks2 = {{100, 100}, {100, 100}, {100, 100}};

    int res = sol.earliestTime(tasks1);
    int res2 = sol.earliestTime(tasks2);

    cout << "Earliest task1 completed in " << res << endl;
    cout << "Earliest task2 completed in " << res2;
}