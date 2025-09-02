/*----------------------------------------------------------------------------------------------------------------------
Source: Leetcode
Link: https://leetcode.com/problems/concatenation-of-array/description/

1929. Concatenation of Array

Problem statement:
    Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] 
    and ans[i + n] == nums[i] for 0 <= i < n (0-indexed). Specifically, ans is the concatenation of two nums arrays. 
    Return the array ans.

Example:
    Input: nums = [1,2,1]
    Output: [1,2,1,1,2,1]

    Explanation: The array ans is formed as follows:
    - ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
    - ans = [1,2,1,1,2,1]
----------------------------------------------------------------------------------------------------------------------*/
// Date: 02/09/2025
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> res;
        for(int i = 0; i < n; i++){
            res.push_back(nums[i]);
        }
        for(int i = 0; i < n; i++){
            res.push_back(nums[i]);
        }
        return res;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1,2,1}; // [1,2,1,1,2,1]
    vector<int> nums2 = {1,3,2,1}; // [1,3,2,1,1,3,2,1]

    vector<int> ans = sol.getConcatenation(nums);
    vector<int> ans2 = sol.getConcatenation(nums2);

    cout << "Example 1: ";
    for(auto i: ans)
        cout<< i<<" ";

    cout << "\nExample 2: ";
    for(auto i: ans2)
        cout<< i<<" ";
}
