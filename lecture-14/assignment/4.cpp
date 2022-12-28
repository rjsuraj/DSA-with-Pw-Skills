#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

// input - All elements are  sorted

void inputArray(int *arr,int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

void printArray(int *arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//using twoPointer approach
int* squaredNumberArray(int *arr,int *newArr,int n){
    int start = 0 , end = n-1;
    
    int j = n-1;
    while(start<=end){
        int s1 = arr[start] * arr[start] , s2 = arr[end]*arr[end];
        if(start == end){
            newArr[j] = s1;
            return newArr;
        }
        else if(s1 >= s2){
            newArr[j--] = s1;
            start++;
        }
        else{
            newArr[j--] = s2;
            end--;
        }
    }
    return newArr;
}


int main()
{
    int n;
    cin>>n;
    int arr[n],newArr[n];
    inputArray(arr,n);
    squaredNumberArray(arr,newArr,n);
    printArray(newArr,n);
}