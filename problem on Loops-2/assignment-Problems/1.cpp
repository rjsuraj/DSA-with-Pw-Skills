// Q1 - Write a program to calculate the factorial of a number.

#include<iostream>
using namespace std;
int main()
{
    int fact = 1,n;
    cin>>n;
    for(int i=2;i<=n;i++){
        fact *= i;
    }
    cout<<fact;
}