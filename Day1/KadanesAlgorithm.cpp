/*
Question:
Given an integer array nums, find the subarray with the largest sum, and return its sum.
*/
#include<vector>
#include<iostream>

using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {                 
        int m=INT_MIN;                      //setting m to min value to track max value
        int sum=0;                          
        for(int i=0;i<nums.size();i++){     //iterating through the array          
            sum+=nums[i];                   //setting 'sum' to sum of subarray
            if(sum>m){                      //if sum of subarray is larger than max value                         
              m=sum;                         //replace max value
            }
            if(sum<0)                       //if the sum is negative set sum back to 0
            sum=0;
        }                                   
        return m;                           //return max sum of subarray
    }
};