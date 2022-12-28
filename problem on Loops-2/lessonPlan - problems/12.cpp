// 5
//     1
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int no;
   for(int i=1;i<=n;i++){
        no = 1;
        for(int j=1;j<=(n+i-1);j++){
            if(j<=(n-i))
                cout<<" ";
            else{
                cout<<no;
                (j<n)?no++:no--;
            }
        }
        cout<<endl;
   }
}