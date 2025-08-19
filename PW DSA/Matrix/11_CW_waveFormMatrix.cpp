// Write a program to print the matrix in wave form(from bottom to up).
// Example:
// Input: 
// 1 2 3 
// 4 5 6 
// 7 8 9

// ouptut: 
// 7 8 9 
// 6 5 4
// 1 2 3

// Approach: 
// 1) Start from last row and print them.
// if currentRow is even then print them as it is else reverse them and print them.
// 2) Repeat it until you don't reach the first element.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cout << "Enter rows/columns of matrix: ";
    cin >> m >> n;
    
    int a[m][n];
    cout << "Enter elements of the matrix: " << endl;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        cin >> a[i][j];

    // wave print
    cout << "Resultant Matrix is: " <<endl;
    for(int i = m-1; i >= 0; i--)
        if(i % 2 == 0)
            for(int j = 0; j < n; j++)
                cout << a[i][j] << " ";
        
        else // i = 1,3,5
            for(int j = n-1; j >= 0; j--)
                cout << a[i][j] << " ";
    
    return 0;
}
