/*
Question:
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/
#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),ma=INT_MIN,mi=prices[0];
        for(int i=0;i<n;i++)
        {
            if(prices[i]<mi){
                mi=prices[i];
            }
            int k=prices[i]-mi;
            if(k>ma){
                ma=k;
            }
        }
        return ma;
    }
};