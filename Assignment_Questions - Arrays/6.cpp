#include<iostream>
using namespace std;
int main()
{
    int arr[] = {6,7,4,5,9,10};
    int n = 6,i,j,k;
    for(i = 1 ; i < n-1 ; i++){

        for(j = 0 ; j < i ; j++){
            if(arr[j] > arr[i])
                break;
        }

        for(k = i + 1; k < n ; k++){
            if(arr[k] < arr[i])
                break;
        }

        if(j == i && k == n){
            cout<<arr[i];
            break;
        }
    }
    if(i == n-1)
        cout<<"-1";
}