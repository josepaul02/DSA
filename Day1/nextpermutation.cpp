/*
Question:
A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
*/
#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i=n-2;
        while(i>=0 && nums[i]>=nums[i+1])       //Searching for first decreasing element from end
        {
            i--;
        }
        if(i>=0)
        {
            int j=n-1;
            while(j>=0 && nums[i]>=nums[j])     //Finding next largest element in subset from i to n
            {
                j--;
            }
            swap(nums[i],nums[j]);             //Swapping decreasing element and next largest element
        }
        reverse(nums.begin()+i+1,nums.end());   //Reversing the elements in the sub elements from i to end 
    }
};