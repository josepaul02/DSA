/*
Question:
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
Approach:
2 pointer approach - one to track unique elements and the other traverses the array. 
*/
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int d=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[d]!=nums[i])
            {
                nums[d+1]=nums[i];
                d++;

            }
        }
        return d+1;
   
    }
};
