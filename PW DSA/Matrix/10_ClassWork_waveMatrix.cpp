// Write a program to print the matrix in wave form.
// Example:
// Input: 
// 1 2 3 
// 4 5 6 
// 7 8 9

// ouptut: 
// 1 2 3 
// 6 5 4
// 7 8 9

// Approach: 
// 1) Print 1st row and 2nd row reverse it and print them.
// 2) Repeat it until you don't reach the end element.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cout << "Enter rows of matrix: ";
    cin >> m;

    int n;
    cout << "Enter columns of matrix: ";
    cin >> n;
    
    int a[m][n];
    cout << "Enter elements of the matrix: " << endl;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        cin >> a[i][j];

    // wave print
    for(int i = 0; i < m; i++)
        if(i % 2 == 0)
            for(int j = 0; j < n; j++)
                cout << a[i][j] << " ";
        
        else // i = 1,3,5
            for(int j = n-1; j >= 0; j--)
                cout << a[i][j] << " ";
    
    return 0;
}
