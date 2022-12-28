#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &arr){
   int max = INT_MIN,index;
   for(int i=0 ; i<arr.size(); i++){
        if(max<arr[i]){
            max = arr[i];
            index = i;
        }
   }
   swap(arr[index],arr[0]);
   max = INT_MIN;
   for(int i=1 ; i<arr.size() ; i++){
        if(max<arr[i])
            max = arr[i];
   }
   return max;
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
    cout<<"second largest : "<<solve(arr);

}