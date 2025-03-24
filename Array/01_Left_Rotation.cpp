/*-----------------------------------------------------------------
Problem statement:
    Given an array 'arr' containing 'n' elements, rotate this array left once and return it.
    Rotating the array left by one means shifting all elements by one place to the left and moving 
    the first element to the last position in the array.

Example:
Input: 'a' = 5, 'arr' = [1, 2, 3, 4, 5]
Output: [2, 3, 4, 5, 1]
-----------------------------------------------------------------*/

// Brute Force Approach

// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp = arr[0];

    // for rotation
    for(int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    // update the last element with temp variable.
    arr[n-1] = temp;
    return arr;
}
