// (without using sort function )
// new approach
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int low= 0;
    int high= n-1;
    int mid=0;
    while(mid<=high){ 
        if(arr[mid]==0 && mid<=high){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }      
        if(arr[mid]==1 && mid<=high){
            mid++;
        }      
        if(arr[mid]==2 && mid<=high){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
