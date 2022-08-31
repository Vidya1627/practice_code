#include <bits/stdc++.h> 

/*
    Time Complexity: O(N + M + N*M + N*M + N + M) 
    Space Complexity:O(1) 

    Where N & M are dimensions of the given matrix.
*/

void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
    int m = matrix[0].size();
    int isRowZero = 1;
    int isClmZero = 1;
    for (int j = 0; j < m; j ++) {
        if(matrix[0][j] == 0) {
            isRowZero = 0;
        }
    }
    
    for (int i = 0; i < n; i ++) {
        if(matrix[i][0] == 0) {
            isClmZero = 0;
        }
    }
    
    for (int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    
    for (int i = n-1; i > 0; i--) {
        for(int j = m-1; j > 0; j--) {
            if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
    
    if(isRowZero == 0) {
      for (int j = 0; j < m; j ++) {
            matrix[0][j] = 0;
      }
    }
    
    if(isClmZero == 0) {
      for (int i = 0; i < n; i ++) {
            matrix[i][0] = 0;
      }
    }
    
}
