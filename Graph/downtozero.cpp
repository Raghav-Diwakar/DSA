#include <bits/stdc++.h>

using namespace std;

int dtz(int n)
{
    if (n == 1)
        return 0;
    else
    {
        int a, b, m;
        for (int i = 0; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                a = i;
                b = n / a;
                m = max(a, b);
                n = m;
                break;
            }
            dtz(n);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int ans = dtz(n);
    cout<<ans;
    }