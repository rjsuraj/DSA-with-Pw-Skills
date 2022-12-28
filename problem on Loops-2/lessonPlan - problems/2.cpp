// problem 2 : Given height h and width w,print rectangular pattern shown in given below;
// ExampleYNh=4,w=6


// ******

// *    *

// *    *

// ******



#include<iostream>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   for(int row = 1; row<=n; row++){
        for(int col = 1; col<=m; col++){
            if(row==1 || row==n || col==1 || col==m)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
   }
}