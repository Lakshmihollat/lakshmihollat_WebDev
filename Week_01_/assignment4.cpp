#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n = 1, num = 1;

    for (i = 1; n <= 5; i++)
        {
        for (j = 1; j <= n; j++)
         {
            cout << num << " ";
            num++;
        }
        cout << endl;
        n++;
    }

    return 0;
}
