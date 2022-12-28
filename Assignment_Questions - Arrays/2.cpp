#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,3,4,1,5};
    int max = INT_MIN , min = INT_MAX;
    for(auto element : arr){
        if(element > max)
            max = element;
        if(element<min)
            min = element;
    }
    cout<<max<<" "<<min;
}