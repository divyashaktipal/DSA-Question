/*----------------------------------------------------------------------------------------------------------------------
Source: Leetcode
Link: https://leetcode.com/problems/maximize-sum-of-at-most-k-distinct-elements/description/

3684 Maximize Sum of At Most K Distinct Elements

Problem statement:
    You are given a positive integer array nums and an integer k.
    Choose at most k elements from nums so that their sum is maximized. However, the chosen numbers
    must be distinct. Return an array containing the chosen numbers in strictly descending order.

Example:
    Input: nums = [84,93,100,77,90], k = 3
    Output: [100,93,90]

    Explanation:
    The maximum sum is 283, which is attained by choosing 93, 100 and 90. We rearrange them in strictly
    descending order as [100, 93, 90].
----------------------------------------------------------------------------------------------------------------------*/
// Date: 15/09/2025
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> maxKDistinct(vector<int> &nums, int k)
    {
        // Step 1: Sort in descending order
        sort(nums.begin(), nums.end(), greater<int>());

        // Step 2: Use a set to track distinct values
        unordered_set<int> seen;
        vector<int> result;

        // Step 3: Collect up to k distinct values
        for (int val : nums)
        {
            if (seen.find(val) == seen.end())
            {
                result.push_back(val);
                seen.insert(val);
                if (result.size() == k)
                    break;
            }
        }
        return result;
    }
};

int main()
{
    Solution sol;
    vector<int> nums1 = {84, 93, 100, 77, 90};
    vector<int> nums2 = {5, 5, 2, 5};

    int k1 = 3;
    int k2 = 2;
    vector<int> result1 = sol.maxKDistinct(nums1, k1);
    vector<int> result2 = sol.maxKDistinct(nums2, k2);

    cout << "Result 1: ";
    for (int val : result1)
        cout << val << " ";

    cout << "\nResult 2: ";
    for (int val : result2)
        cout << val << " ";
    return 0;
}