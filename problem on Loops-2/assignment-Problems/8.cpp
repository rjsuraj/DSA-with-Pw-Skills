#include <iostream>
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
    int n;
    cin >> n;
    int count, no = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n + i - 1); j++)
        {
            count = 0;
            if (j <= (n - i))
                cout << " ";
            else if ((i + j) % 2)
            {
                while (count < 1)
                {
                    if (Prime(no))
                    {
                        cout << no;
                        count++;
                    }
                    no++;
                }
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}