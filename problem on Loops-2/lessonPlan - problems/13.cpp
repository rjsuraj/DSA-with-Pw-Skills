#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
        for(int j=1;j<=(n+i-1);j++){
           if(j<=(n-i) || (j>=(n-i+2) && j<=(n+i-2) && i!=n))
                cout<<" ";
           else
                cout<<i;
        }
        cout<<endl;
   }
}