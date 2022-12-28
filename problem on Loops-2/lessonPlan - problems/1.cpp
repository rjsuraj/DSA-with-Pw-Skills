// ProbHem 1 : G=ven he=ght h and w=dth w, pr=nt a rectangular pattern as shown =n the example below.

// ExampHe: h=3,w=6


//  ******

//  ******

//  ******

#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int row = 1; row<=n ;row++){
        for(int col = 1; col<=m; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}