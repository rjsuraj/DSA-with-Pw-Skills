#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

//brute force approach

    // int n,x;
    // cin>>n>>x;
    // int ans = 0;
    // vector<int> arr(n);
    // for(int &ele : arr)
    //     cin>>ele;

    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]+arr[j] == x)
    //             ans++;
    //     }
    // }
    // cout<<ans;


// two pointer approach
    int n,x;
    cin>>n>>x;
    int ans = 0;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    


    sort(arr.begin(),arr.end());

    int i;
    for(i=0;i<n-1;i++){
        if(arr[i] != arr[i+1])
            break;
    }

    if(i==n-1 && (2*arr[i] == x)){
        cout<<ans+1;
        return 0;
    }
    
    int start = 0, end = n-1;
    while(start<end){
        if(arr[start]+arr[end] == x){
            while(arr[start] == arr[start+1])
                start++;
            while(arr[end] == arr[end-1])
                end--;
            start++;
            end--;
            ans++;
        }
        else if(arr[start]+arr[end] < x)
            start++;
        else
            end--;
    }

    cout<<ans;
}