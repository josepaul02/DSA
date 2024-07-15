/*
Question:
Given an array consisting of only 0s, 1s, and 2s. Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)
LeetCode:Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

Approach: Dutch Flag Algorithm
*/
#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int high=nums.size()-1,low=0,i=0;   //setting low,high,mid(here i=mid)
        while(i<=high)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[low]);
                low++;
                i++;
            }
            else if(nums[i]==2)
            {
                swap(nums[i],nums[high]);
                high--;
            }
            else
            {
                i++;
            }
        } 
    }
};