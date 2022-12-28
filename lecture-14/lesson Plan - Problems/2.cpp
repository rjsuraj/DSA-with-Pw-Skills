#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// bruteForce Approach
int tripletSumPairs1(vector<int> &arr, int target)
{
    int i, j, k;
    int pairs = 0;
    for (i = 0; i < arr.size(); i++)
    {
        for (j = i + 1; j < arr.size(); j++)
        {
            for (k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[k] + arr[j] == target)
                    pairs++;
            }
        }
    }
    return pairs;
}

int twoSumPair(vector<int> arr, int target,int start)
{
    sort(arr.begin()+start,arr.end());
    int end = arr.size() - 1;
    int pairs = 0;
    while(start<end){
        if(arr[start]+arr[end] == target){
            start++;
            end--;
            pairs++;
        }
        else if(arr[start]+arr[end] < target)
            start++;
        else
            end--;
    }
    return pairs;
}

int tripletSumPairs2(vector<int> &arr,int target){
    int pairs = 0;
    for(int i=0 ; i<arr.size()-2 ; i++){
        int no_of_pairs = twoSumPair(arr,target - arr[i],i+1);
        if(no_of_pairs)
            pairs += abs(no_of_pairs);
    }

    return pairs;
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    cout<<tripletSumPairs1(arr,x)<<endl;
    cout<<tripletSumPairs2(arr,x);
}

