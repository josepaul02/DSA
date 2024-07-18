/*
Question:
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
Approach: 
sort the intervals
set the intervals to new vector and check each new interval before adding to the new vector
*/
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>> a;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++)
        {
            if(a.empty() || intervals[i][0]>a.back()[1])
            {
                a.push_back(intervals[i]);
            }
            else{
                a.back()[1]=max(intervals[i][1],a.back()[1]);
            }
        }
        return a;
    }
};