#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &arr){
    int ans = 0;
    for(int ele : arr){
        ans ^= ele;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int ans = solve(arr);
    cout<<ans;
    return 0;
}