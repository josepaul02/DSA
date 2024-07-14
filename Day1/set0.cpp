/*
Question:
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
*/
#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>>& matrix;
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();      //Initialising m&n with row size and column size
        int n=matrix[0].size();   // of the vector 'matrix'
        vector<int> row(m,1);     //using vectors row and col to track index of
        vector<int> col(n,1);     //matrix to be set to zero(0)
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {                                       //reading indices to be set to zero
                if(matrix[i][j]==0)
                {
                  row[i]=0;
                  col[j]=0;  
                }
            }
        }
         for(int i=0;i<matrix.size();i++)
        {  
            for(int j=0;j<matrix[i].size();j++)
            {                                        //Setting the row and column of required 
                if(row[i]==0 || col[j]==0)           //row and column to zero(0)
                {
                    matrix[i][j]=0; 
                }
            }
        }
    }

};