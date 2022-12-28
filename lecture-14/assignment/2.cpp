#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

// input - All elements are unique and sorted

void inputArray(vector<int> &arr,int size){
    for(int i=0; i<size; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
}


// using bruteforce approach
string pairSum1(vector<int> &arr,int target){
    for(int i=0; i<arr.size()-1; i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i] + arr[j] == target)
                return "Yes";
        }
    }
    return "No";
}

// using two Pointer approach
string pairSum2(vector<int> &arr,int target){
    int start = 0 , end = arr.size()-1;
    while(start<end){
        if(arr[start] + arr[end] == target)
            return "Yes";
        else if(arr[start] + arr[end] < target)
            start++;
        else
            end--;
    }
    return "No";
}

// using hashing technique approach
string pairSum3(vector<int> &arr,int target){
    unordered_set<int> s;
    for(auto ele : arr){
        if(s.find(target - ele) != s.end()){
            return "YES";
            return 0;
        }
        s.insert(ele);
    }
    return "NO";
}


//using hashing technique
int main()
{
    int n,target;
    cin>>n>>target;
    vector<int> arr;
    inputArray(arr,n);
    cout<<pairSum1(arr,target)<<endl;
    cout<<pairSum2(arr,target)<<endl;
    cout<<pairSum3(arr,target)<<endl;
}