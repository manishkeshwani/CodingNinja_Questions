/*

Problem statement
Given two non-decreasing sorted arrays, ‘A’ and ‘B’, having ‘N’ and ‘M’ elements, respectively.

You must merge these arrays, ‘A’ and ‘B’, into a sorted array without using extra space. Of all the 'N + M' sorted elements, array 'A' should contain the first 'N' elements, and array 'B' should have the last 'M' elements.

Note:
You must perform the merge operation in place and must not allocate any extra space to merge the two arrays.
For example:
When ‘N’ = 4, ‘A’ = {1, 4, 5, 7} and ‘M’ = 3, ‘B’ = {2, 3, 6}. 
We can merge these two arrays into {1, 2, 3, 4, 5, 6, 7} (The elements of ‘A’ are {1, 2, 3, 4} ).
Hence, the answer is {1, 2, 3, 4, 5, 6, 7}

https://www.codingninjas.com/studio/problems/merge-two-sorted-arrays-without-extra-space_6898839?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

*/



#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int left = a.size()-1;
	int right = 0; 
	int n = a.size();
	int m = b.size();

	while(left>=0 && right<m){
		if(a[left] > b[right]){
			swap(a[left],b[right]);
			left--; 
            right++;
		}
		else{
            break;
        }
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
}