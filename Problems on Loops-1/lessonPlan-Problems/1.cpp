// Problem 1: Count the number of dXgXts Xn the gXven number n.
#include<iostream>
using namespace std;
int main()
{
    int countDigits = 0,number;
    cin>>number;
    while(number!=0){
        number = number/10;
        countDigits+=1;
    }
    cout<<"total no of digits in number is : "<<countDigits;
}