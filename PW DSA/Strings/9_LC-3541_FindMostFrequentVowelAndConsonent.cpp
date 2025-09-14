// Leetcode - 3541. Find Most Frequent Vowel and Consonant

// Question:
// You are given a string s consisting of lowercase English letters ('a' to 'z').
// Your task is to:
// Find the vowel (one of 'a', 'e', 'i', 'o', or 'u') with the maximum frequency.
// Find the consonant (all other letters excluding vowels) with the maximum frequency.
// Return the sum of the two frequencies.

// Note: If multiple vowels or consonants have the same maximum frequency, you may choose any one of them.
// If there are no vowels or no consonants in the string, consider their frequency as 0.
// The frequency of a letter x is the number of times it occurs in the string.

// Example 1:
// Input: s = "successes"
// Output: 6

// Explanation:
// The vowels are: 'u' (frequency 1), 'e' (frequency 2). The maximum frequency is 2.
// The consonants are: 's' (frequency 4), 'c' (frequency 2). The maximum frequency is 4.
// The output is 2 + 4 = 6.

// Approach:
// 1.) Create a frequency map to store the frequency of each character in the string.
// 2.) Traverse the frequency map to find the maximum frequency of vowels and consonants.
// 3.) Return the sum of the maximum frequencies of vowels and consonants.

// Time Complexity: O(n) where n is the length of the string.
// Space Complexity: O(1) as the size of the frequency map is constant (26 letters).

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxFreqSum(string s)
    {
        unordered_map<char, int> freq;
        for (char ch : s)
            freq[ch]++;

        int maxVow = 0, maxCons = 0;

        // C++ 17 feature
        // for(const auto&[ch, count]: freq){
        //     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        //         maxVow = max(maxVow, count);
        //     else
        //         maxCons = max(maxCons, count);
        // }

        // C++ 14 feature
        for (const auto &it : freq)
        {
            // `it` is a key-value pair from the map.
            // `it.first` gives you the key — in this case, a character like 'a', 'b', etc.
            // `it.second` gives you the value — the number of times that character appears in the string.
            // So int count = it.second; extracts the frequency of the current character and stores it in the variable count.
            char ch = it.first;
            int count = it.second;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                maxVow = max(maxVow, count);
            else
                maxCons = max(maxCons, count);
        }

        int res = maxVow + maxCons;
        return res;
    }
};

int main()
{
    Solution sol;
    string s1 = "successes";
    string s2 = "aeiaeia";
    string s3 = "zzzz";

    int res1 = sol.maxFreqSum(s1);
    int res2 = sol.maxFreqSum(s2);
    int res3 = sol.maxFreqSum(s3);

    cout << "Example 1: " << res1 << endl;
    cout << "Example 2: " << res2 << endl;
    cout << "Example 3: " << res3;
}