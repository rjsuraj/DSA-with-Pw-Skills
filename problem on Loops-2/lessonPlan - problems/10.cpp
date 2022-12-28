// 121212
// 212121
// 121212
// 212121


#include<iostream>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   int no;
   for(int i=1;i<=n;i++){
        no = (i%2) ? 1 : 2;
        for(int j=1;j<=m;j++){
           cout<<no;
           no = (no==2) ? 1 : 2;
        }
        cout<<endl;
   }
}