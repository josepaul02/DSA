/*
Question:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Approach:
using hashmap
*/

#include<vector>
#include<unordered_map>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mp;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
        int nu=nums[i];
        int need=target-nu;
        if(mp.find(need)!=mp.end())
        {
            return {mp[need],i};
        }
        mp[nu]=i;
       }
       return {-1,-1};
    }
   
};