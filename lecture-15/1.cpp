// pattern - two pointer 

#include<iostream>
using namespace std;



int main()
{
    int arr[] = {1,0,1,0,1,1,1,0,0,0,1,1,0,1,0};
    int start = 0, end = 14;
    while(start < end){
        if(arr[start] > arr[end]){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else if(arr[start] < arr[end]){
            start++;
            end--;
        }
        else if(arr[start] == arr[end] && arr[start]==0)
            start++;
        else
            end--;
    }

    for(int ele : arr)
        cout<<ele<<" ";
}