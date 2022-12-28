#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int start = 0,end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

void printArray(int arr[],int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {2,3,4,1,5};
    reverseArray(arr,5);
    printArray(arr,5);
}