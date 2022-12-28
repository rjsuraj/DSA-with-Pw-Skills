#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,8,6};
    int even_no_count = 0;
    int odd_no_count = 0;
    for(int element : arr){
        if(element%2)
            odd_no_count++;
        else
            even_no_count++;
    }

    cout<<"Even Number = "<<even_no_count<<"\nOdd Number = "<<odd_no_count;
    return 0;
}