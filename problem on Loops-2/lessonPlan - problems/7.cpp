// Problem1 Given n, print a rectangular pattern as shown in the example below.For
// Example if n=7

// 1 2 3 4 5 6 7
// 2 3 4 5 6 7 1
// 3 4 5 6 7 1 2
// 4 5 6 7 1 2 3
// 5 6 7 1 2 3 4
// 6 7 1 2 3 4 5
// 7 1 2 3 4 5 6

#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int no;
   for(int i = 1; i<=n ; i++){
        // no = i;
        // for(int j = 1; j<=(n-i+1) ; j++){
        //     cout<<no;
        //     no++;
        // }  
        // no = 1;
        // for(int j = 1; j<=(i-1) ; j++){
        //     cout<<no;
        //     no++;
        // }

        no = i;
        for(int j = 1; j<=n ; j++){
            no = (j==(n-i+2)) ? 1 : no;
            cout<<no;
            no++;
        }

        cout<<endl;
   }
}