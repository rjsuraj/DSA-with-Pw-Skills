#include<iostream>
#include<vector>
using namespace std;

void inputArray(vector<int> &arr,int size){
    for(int i=0; i<size; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
}
void printArray(vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> arr1,arr2;
    int m,n;
    cin>>m>>n;
    vector<int> newArr(m+n);
    inputArray(arr1,m);
    inputArray(arr2,n);

    for(int i=0; i<m; i++){
        newArr[i] = arr1[i];
    }

    for(int i=0,j=m; j<(m+n) && i<m; i++,j++){
        newArr[j] = arr2[i];
    }

    printArray(newArr);
}