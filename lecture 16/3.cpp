#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> prefixSum;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        prefixSum.push_back(temp);
    }

    for(int i=1; i<n; i++){
        prefixSum[i] += prefixSum[i-1];
    }

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==1)
            cout<<"sum is between given ranges is "<<prefixSum[r-1]-0;
        else
            cout<<"sum is between given ranges is "<<prefixSum[r-1]-prefixSum[l-2];
    }
}