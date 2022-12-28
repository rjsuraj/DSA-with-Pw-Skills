// Problem : Print a rectangular pattern as shown in the example below.

// Example if row=4,col=6

// 123456
// 123456
// 123456
// 123456
#include<iostream>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
           cout<<j;
        }
        cout<<endl;
   }
}