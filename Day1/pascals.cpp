/*
Question:
Given an integer numRows, return the first numRows of Pascal's triangle.
*/
#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pasc(numRows);          //2D vector to store pascal triangle values
        for(int i=0;i<numRows;i++)
        {
            pasc[i].resize(i+1);                   //Dynamically sizing the vector
            pasc[i][0]=1;                          // Setting end values in triangle to one(1) 
            pasc[i][i]=1;
            for(int j=1;j<i;j++)
            {
             pasc[i][j]=pasc[i-1][j-1]+pasc[i-1][j];  //Setting other values of the pasc vector
            }        
        }
    
        return pasc;
    }
};
