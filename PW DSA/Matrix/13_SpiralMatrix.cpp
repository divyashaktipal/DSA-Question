// Sprial Matrix (Leetcode - 54)


#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cout << "Enter row/columns size: ";
    cin >> m >> n;

    int mat[m][n];
    cout << "Enter element of the matrix: "<< endl;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> mat[i][j];

    cout << endl;

    // spiral 
    int minR = 0, minC = 0;
    int maxR = m-1, maxC = n-1;

    while(minR <= maxR && minC <= maxC){
        // right
        for(int j = minC; j <= maxC; j++)
            cout << mat[minR][j] << " ";
        minR++;

        // to avoid duplication
        if(minR > maxR || minC > maxC) break;

        // down
        for(int i = minR; i <= maxR; i++)
            cout << mat[i][maxC] << " ";
        maxC--;
        if(minR > maxR || minC > maxC) break;

        // left
        for(int j = maxC; j >= minC; j--)
            cout << mat[maxR][j] << " ";
        maxR--;
        if(minR > maxR || minC > maxC) break;

        // up
        for(int i = maxR; i >= minR; i--)
            cout << mat[i][minC] << " ";
        minC++;

    }

    return 0;
}