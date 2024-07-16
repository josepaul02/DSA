/*
Question:
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int i=m-1,j=0;
       while(i>=0 && j<n)
       {
        if(nums1[i]>nums2[j])               //setting muns1 with smaller elements and
        {                                   //setting nums2 with larger elements
            swap(nums1[i],nums2[j]);
            i--;
            j++;
        }
        else{break;}
       }
       sort(nums1.begin(),nums1.begin()+m);
       sort(nums2.begin(),nums2.end());
       i=m;j=0;
       while(i<m+n)                         //joining the two arrays to nums1 to get result
       {
        nums1[i]=nums2[j];
        i++;
        j++;
       }
    }
};