// Problem 2: Find the sum of digits in a given number n
#include<iostream>
using namespace std;
int main()
{
    int number,sum = 0;
    cin>>number;
    while(number!=0){
        int digit = number%10;
        sum += digit;
        number /= 10;
    }
    cout<<"sum of digits of a given no is : "<<sum;
}