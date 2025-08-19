// Write a program to print the matrix in wave form(Column wise).

// Example:
// Input: 
// 1 2 3 
// 4 5 6 
// 7 8 9

// ouptut: 
// 1 4 7 
// 8 5 2
// 3 6 9

// Approach: 
// 1) Print 1st row and 2nd row reverse it and print them.
// 2) Repeat it until you don't reach the end element.

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
    cout << "Resultant Matrix is: " << endl;
    for(int j = 0; j < n; j++)
        if(j % 2 == 0)
            for(int i = 0; i < m; i++)
                cout << a[i][j] << " ";
        
        else // j = 1,3,5(odd)
            for(int i = m-1; i >= 0; i--)
                cout << a[i][j] << " ";
    
    return 0;
}
