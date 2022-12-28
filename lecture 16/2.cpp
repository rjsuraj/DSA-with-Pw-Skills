#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    vector<int> arr;
    cin>>n;
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    for(int ele : arr)
        sum += ele;
    
    int prefixSum = 0,suffixSum,i;
    for(i=0; i<n-1; i++){
        prefixSum += arr[i];
        suffixSum = sum - prefixSum;
        if(prefixSum == suffixSum){
            cout<<"True";
            break;
        }
    }

    if(i==n-1)
        cout<<"False";
}