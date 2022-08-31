#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> vec;
    vector<long long int> vec1;
    vec1.push_back(1);
    vec.push_back(vec1);
    
    for (int i = 1; i < n; i++) {
        vector<long long int> temp;
        temp.push_back(1);
        for(int j = 1; j < i; j++) {
            temp.push_back(vec1[j-1] + vec1[j]);
        }
        temp.push_back(1);
        vec1 = temp;
        vec.push_back(vec1);
    }
    return vec;
}
