//first approach 
#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
  int n = nums.size();
    
    int s = 0;
    int e = n-1;
    while(s < e)
    {
        if(nums[s] < 0 and nums[e] > 0)
        {
            s++;
            e--;
        }
        else if(nums[s] > 0 and nums[e] < 0)
        {
            swap(nums[s],nums[e]);
            s++;
            e--;     
        }
        else if(nums[s] < 0 and nums[e] < 0)
        {
            s++;
        }
        else
        {
            e--;
        }
    }
    return nums;
}

// second 
#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
    int n = nums.size();
    int s = 0;
    for(int i = 0;i<n;i++)
    {
        if(nums[i] < 0)
        {
            swap(nums[i],nums[s++]);
        }    
    }
    return nums;
}
