// Code360 POTD
// Date: 09/10/2025

// Question:
// You are given an array/list ‘ARR’ consisting of ‘N’ non - negative integers and an integer ‘K’. 
// Your task is to return the K-th smallest element of the array.

// For example :-
// Given an array/list ‘ARR' = [ 3, 2, 4, 5, 6 ] and 'K' = 3. 
// The 3rd smallest element is "4" because the order of numbers is [ 2, 3, 4, 5, 6 ].

#include <bits/stdc++.h> 
using namespace std;

int kthSmallest(vector<int>& v, int n, int k) {
    // TC: O(nlogn), SC: O(1)
	// sort the array in ascending order.
	// return their index(i.e. k-1 bcz 1-based indexing)

	sort(v.begin(), v.end());
	// return the index
	return v[k-1];

    // TC: O(n), SC: O(1)
	// traverse the array and find index.
	// int idx = 0;
	// for(int i = 1; i <= n; i++){
	// 	if(i == k){
	// 		idx = v[i-1];
	// 		break;
	// 	}
	// 	else
	// 		continue;
	// }
	// return idx;
} 

