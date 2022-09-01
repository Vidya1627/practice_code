#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int start = 0;
    int end = n-1;
    while(arr[start] == 0) {
        start ++;
    }
    while(arr[end] == 2) {
        end --;
    }
    while(start <= end) {
        while(arr[start] == 0 && start < n) {
            start ++;
        }
        while((arr[end] == 2 || arr[end] == 1) && end > -1) {
            end --;
        }
        if(start >= end) {
            break;
        }
        if(arr[end] == 0) {
            //swap end and start
            arr[end] = arr[start];
            arr[start] = 0;
            start ++;
        }
    }
    
    end = n-1;
    while(arr[end] == 2 && end > -1) {
        end --;
    }
    while(arr[start] == 1 && start < n) {
        start ++;
    }
    
    while(start <= end) {
        while(arr[end] == 2 && end > -1) {
            end --;
        }
        while(arr[start] == 1 && start < n) {
            start ++;
            continue;
        }
        if(start >= end) {
            break;
        }
        if(arr[start] > arr[end]) {
            //swap end and start
            arr[start] = arr[end];
            arr[end] = 2;
            end --;
        }
    }
}
