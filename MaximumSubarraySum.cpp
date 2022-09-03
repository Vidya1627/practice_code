#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    if(n == 0) {
        return 0;
    }
    long long temp_sum = 0;
    long long sum = arr[0];
    for(int i = 0; i < n; i++) {
        temp_sum += arr[i];
        sum = max(sum, temp_sum);
        if(temp_sum < 0) {
            temp_sum = 0;
        }
    }
    if(sum < 0) {
        sum = 0;
    }
    return sum;
}
