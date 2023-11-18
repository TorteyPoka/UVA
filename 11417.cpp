#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j;
    while(cin>>n && n != 0)
    {
        int  G = 0;
         for (i = 1; i < n; i++)
            for (j = i + 1; j <= n; j++)
            {
                G += __gcd(i, j);
            }
            cout<<G<<endl;
    }

    return 0;
}
