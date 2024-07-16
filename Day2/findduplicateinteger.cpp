/*
Question:
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

Approach:
Using a frequency vector to keep track of repeating elements
*/
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int n=nums.size();                   //initialise size of vector
       vector<int> a(n,0);                  //frequency vector of same size initialised to 0
       for(int i=0;i<n;i++){                //setting frequency vector to count
        a[nums[i]]++;
       } 
       for(int i=0;i<n;i++){                //finding element with count>1 to return 
        if(a[i]>1)
        return i;
       }
       return 0;
    }
};