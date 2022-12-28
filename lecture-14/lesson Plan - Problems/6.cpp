#include<iostream>
#include<vector>
using namespace std;



int main()
{
    int size1 = 11,size2 = 4;
    int arr[] = {2,3,5,8,9,11,7,2,3,7,11},freq[100000] = {0};
    int query[] = {0,3,7,11};
    for(int i=0 ; i<size1; i++){
        freq[arr[i]]++;
    }

    int i;
    for(i=0; i<size2; i++){
        if(freq[query[i]] == 0)
            break;
    }

    if(i == size2)
        cout<<"all queries are present";
    else
        cout<<"not present";
}