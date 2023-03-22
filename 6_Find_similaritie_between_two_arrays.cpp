  sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int count = 0;
    int i = 0;
    int j = 0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]) i++;
        else if(arr2[j]<arr1[i]) j++;
        else if(arr1[i++]==arr2[j++]) count++;
    }
    
    unordered_set<int>s1;
    for(int i = 0; i<max(n,m); i++){
        if(i<n) s1.insert(arr1[i]);
        if(i<m) s1.insert(arr2[i]);
    }
    
    return {count,s1.size()};

ok
