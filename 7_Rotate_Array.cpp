#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int N;

    cin>>N;

    int arr[N];

    for(int i=0; i<N; i++)

    {

        cin>>arr[i];

    }

    int k;

    cin>>k;

    k=k%N;

    reverse(arr,arr+k);

    reverse(arr+k,arr+N);

    reverse(arr, arr+N);

    for(int i=0; i<N; i++)

    {

        cout<<arr[i]<<" ";

    }

    return 0;
}



//decond optima solution

for(int m =0; m<k; m++){
        for(int n=N-1; n>0; n--){
            int temp = arr[n];
            arr[n] = arr[n-1];
            arr[n-1] = temp;
        }
    }
ok 