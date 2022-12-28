// Problem : Given n, print a triangular pattern as shown in the example below.

// Example if n=4

//  *

//  **

//  ***

//  ****
#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(j<=i)
                cout<<"*";
        }
        cout<<endl;
   }
}