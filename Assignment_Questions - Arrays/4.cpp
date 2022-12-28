#include <iostream>
using namespace std;

pair<int, int> first_min(int arr[], int n)
{
    int min = INT_MAX, index;
    pair<int, int> ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }
    ans.first = min;
    ans.second = index;
    return ans;
}

pair<int, int> second_min(int arr[], int n)
{
    int min = INT_MAX, index;
    pair<int, int> ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min && arr[i] != first_min(arr, n).first)
        {
            min = arr[i];
            index = i;
        }
    }
    ans.first = min;
    ans.second = index;
    return ans;
}

int main()
{
    int a[5] = {5,6,10,4,9}, b[5] = {1, 2, 3, 4, 5};
    pair<int, int> minA = first_min(a, 5), min2A = second_min(a, 5);
    pair<int, int> minB = first_min(b, 5), min2B = second_min(b, 5);

    if (minA.second != minB.second)
        cout<< minA.first + minB.first;
    else
        cout<< min(minA.first + min2B.first, minB.first + min2A.first);
}