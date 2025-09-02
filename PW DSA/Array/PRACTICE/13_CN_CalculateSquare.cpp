/*----------------------------------------------------------------------------------------------------------------------
Source: Code360 POTD

Calculate Square of a Number

Problem statement:
    Given an integer ‘N’, you are supposed to return the square of the given integer without using multiplication (*),
    division (/) or power function (pow()).

Example:
    Sample Input 1:
    2
    3
    -4
    Sample Output 1:
    9
    16
----------------------------------------------------------------------------------------------------------------------*/
// Date: 02/09/2025
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;
int calculateSquare(int num)
{
    // 1. Recursive Solution:O(n)
    // num = abs(num);
    // if(num == 0) return 0;
    // return calculateSquare(num-1)+(2*num-1);

    // 2. Iterative Solution(Using Addition):O(n)
    int square = 0;
    for (int i = 0; i < abs(num); i++)
        square += abs(num);
    return square;
}
int main()
{
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    cout << "Enter the numbers: " << endl;
    while (t--)
    {
        int num;
        cin >> num;
        cout << "Square is: " << calculateSquare(num) << endl;
    }
    return 0;
}