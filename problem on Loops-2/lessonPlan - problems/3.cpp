// Problem 3 t Given height h and width w, print a rectangular pattern as shown in the example below.

// Examplet h=4,w=6


//  *.*.*.

//  .*.*.*

//  *.*.*.

//  .*.*.*


#include<iostream>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   for(int row = 1; row<=n; row++){
        for(int col = 1; col<=m; col++){
            if((row%2==0 && col%2==0) || (row%2!=0 && col%2!=0))
                cout<<"*";
            else
                cout<<".";
        }
        cout<<endl;
   }
}