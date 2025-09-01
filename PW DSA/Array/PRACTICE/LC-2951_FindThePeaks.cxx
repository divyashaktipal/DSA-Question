/*----------------------------------------------------------------------------------------------------------------------
Source: Leetcode
Link: https://leetcode.com/problems/find-the-peaks/description/

2951. Find The Peaks

Problem statement:
    You are given a 0-indexed array mountain. Your task is to find all the peaks in the mountain array.
    Return an array that consists of indices of peaks in the given array in any order.

Notes:
    A peak is defined as an element that is strictly greater than its neighboring elements.
    The first and last elements of the array are not a peak.

Example:
    Input: mountain = [1,4,3,8,5]
    Output: [1,3]
    Explanation: mountain[0] and mountain[4] can not be a peak because they are first and last elements of the array.
    mountain[2] also can not be a peak because it is not strictly greater than mountain[3] and mountain[1].
    But mountain [1] and mountain[3] are strictly greater than their neighboring elements.
    So the answer is [1,3].
----------------------------------------------------------------------------------------------------------------------*/
// Date: 01/09/2025
// Time Complexity: O(n)
// Space Complexity: O(k)

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        // a vector that store the peak elements
        vector<int> peak;
        int n = mountain.size();

        // loop start from idx 1
        for(int i = 1; i <= n-2; i++){
            if(mountain[i] > mountain[i+1] && mountain[i] > mountain[i-1])
                peak.push_back(i);
            else
                continue;
        }
        return peak;
    }
};

int main(){
    Solution sol;
    vector<int> mountain = {1,4,3,8,5}; // [1,3]
    vector<int> mountain2 = {2,4,4}; // []

    vector<int> ans = sol.findPeaks(mountain);
    vector<int> ans2 = sol.findPeaks(mountain2);

    cout << "Example 1: ";
    for(auto i: ans)
        cout<< i<<" ";

    cout << "\nExample 2: ";
    for(auto i: ans2)
        cout<< i<<" ";
    return 0;
}