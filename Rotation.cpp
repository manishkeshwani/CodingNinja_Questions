/*
Rotation

You are given an array 'arr' having 'n' distinct integers sorted in ascending order. The array is right rotated 'r' times
Find the minimum value of 'r'.
Right rotating an array means shifting the element at 'ith' index to (‘i+1') mod 'n' index, for all 'i' from 0 to ‘n-1'.

Example:
Explain
Input: 'n' = 5 , ‘arr’ = [3, 4, 5, 1, 2]
Output: 3 
Explanation:
If we rotate the array [1 ,2, 3, 4, 5] right '3' times then we will get the 'arr'. Thus 'r' = 3.

https://www.codingninjas.com/studio/problems/rotation_7449070?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

*/
int findKRotation(vector<int> &nums){
      int low=0;
        int high = nums.size()-1;
        int ans = 1e9;
        int idx=-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(nums[low]<=nums[high]){
                if(nums[low]<ans){
                    ans = nums[low];
                    idx = low;
                }
                return idx;
            }
            if(nums[low]<=nums[mid]){
                if(nums[low]<ans){
                    ans = nums[low];
                    idx = low;
                }
                low = mid+1;
            }
            else{
                if(nums[mid]<ans){
                    ans = nums[low];
                    idx = mid;
                }
                high = mid-1;
            }
        }
        return idx;
}