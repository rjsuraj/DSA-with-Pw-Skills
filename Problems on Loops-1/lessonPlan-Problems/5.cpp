// Problem 2 : Given 2 numbers a and b. find a raise to the power b.

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans  = 1;
    while(b--){
        ans *= a;
    }
    cout<<ans;
}
