#include<iostream>
using namespace std;

bool Prime(int no)
{
    for (int i = 2; i < no; i++)
    {
        if (no % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int no,i;
    cin>>no;
    int flag = 1,k;
    for(i=2;i<=no-i;i++){
        if(Prime(i) && Prime(no-i)){
            cout<<no<<" = "<<i<<" + "<<no-i<<endl;
            flag = 0;
        }
    }
    if(flag)
        cout<<"no";
}
