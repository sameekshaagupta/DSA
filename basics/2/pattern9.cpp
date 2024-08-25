#include <bits/stdc++.h>
using namespace std;
void nStarDiamond(int n)
{
    int a = 2 * n;
    if (1 < a)
    {
        int i, flag, k;
        flag = 1;
        for (i = 1, k = 0; i <= 2 * n - 1; i++)
        {
            if (i < n - k)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
                flag = 1 - flag;
            }
            if (i == n + k)
            {
                k++;
                cout << endl;
                if (i == 2 * n - 1)
                {
                    break;
                }

                i = 0;
                flag = 1;
            }
            if (i > n + k)
            {
                cout << " ";
            }
        }
    }
    if (1 < a)
    {
        int i = n;
        int j;
        while (i > 0)
        {
            j = 0;
            while (j < n - i)
            {
                cout << " ";
                j++;
            }
            j = 0;
            while (j < (2 * i) - 1)
            {
                cout << "*";
                j++;
            }
            cout << "\n";
            i--;
        }
    }
}