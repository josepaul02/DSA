/*
Question:
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

Approach:
using an unordered set
similar to mapping

*/

#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int l=0,n=nums.size();
        if(n==0)return 0;
        unordered_set<int> ma;
        for(int i=0;i<n;i++)
            ma.insert(nums[i]);
        for(auto i:ma)
        {
            if(ma.find(i-1)==ma.end())
            {
                int c=1;
                int x=i;
                while(ma.find(x+1)!=ma.end()){
                    c++;
                    x++;
                }
                l=max(c,l);
            }
        }
        return l;
    }
};