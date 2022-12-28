#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int> &arr){
    int n = arr.size();
    int temp = arr[n-1];
    for(int i=n-1 ; i>=1 ; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

void solve(vector<int> &arr,int k){
   while(k--)
        rotateArray(arr);
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    solve(arr,k);
    
    for(int ele : arr)
        cout<<ele<<" ";
}