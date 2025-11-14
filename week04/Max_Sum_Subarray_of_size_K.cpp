#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxSumSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        
        long long windowSum = 0;
        long long maxSum = 0;
        
        for (int i = 0; i < k; i++) {
            windowSum += arr[i];
        }
        
        maxSum = windowSum;
        
        for (int i = k; i < n; i++) {
            windowSum += arr[i];       
            windowSum -= arr[i - k];
            maxSum = max(maxSum, windowSum);
        }
        
        return maxSum;
        
    }
};

