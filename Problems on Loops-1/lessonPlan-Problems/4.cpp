// Problem 1: Find the sum of the following series

//  1 - 2 + 3 - 4 … n
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 1,number,sum = 0;
    while(i<=n){
        number = (i%2==0)?(-i):i;
        sum += number;
        i++;
    }
    cout<<sum;
}