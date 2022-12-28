#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int upperRow = (n/2)+1;
    int lowerRow = n - upperRow;
    for(int i=1;i<=upperRow;i++){
        char k = 'A';
        for(int j=1;j<=(upperRow+i-1);j++){

            if(j<=(upperRow-i))
                cout<<" ";
            else{
                cout<<k;
                k++;
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=lowerRow;i++){
        char k = 'A';
        for(int j=1;j<=(n-i);j++){

            if(j<=i)
                cout<<" ";
            else{
                cout<<k;
                k++;
            }
        }
        cout<<endl;
    }
}