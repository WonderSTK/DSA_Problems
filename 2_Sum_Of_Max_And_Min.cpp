#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
        if(arr[i]<mini){
            mini = arr[i];
        }
        
    }
    return maxi+mini;
}
