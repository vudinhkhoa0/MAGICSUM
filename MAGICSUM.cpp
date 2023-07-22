#include <bits/stdc++.h>
using namespace std;
long long a[1000001];
void build()
{
    a[0] = 0;
    for (int i = 1; i <= 1000000; i++)
    {
        a[i] = a[i-1] + i;
    }
}
int main()
{
    int n;
    cin >> n;
    build();
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        sum = sum + a[y] - a[x - 1];
    }
    cout << sum ;
    return 0;
}

