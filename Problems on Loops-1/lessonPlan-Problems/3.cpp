// Problem 3: Reverse the digits of a number

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
//    two pointer approach
    int number;
    cin>>number;
    int ans,i=0;
    while(number!=0){
       int digit = number%10;
       ans = ans*10 + digit;
       number /= 10;
    }
    cout<<"reverse of a given number is : "<<ans;
}