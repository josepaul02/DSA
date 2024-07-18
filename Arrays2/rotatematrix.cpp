/*
Question:
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

Approach: Transpose the matrix and then reverse each row of the transposed matrix
*/
#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){                           //transposing the matrix
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)                            //Reversing each row of the matrix
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};