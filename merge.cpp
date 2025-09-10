#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    int c[m + n];
    int l = 0, r = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    while (l < n && r < m)
    {
        if (a[l] <= b[r])
        {
            c[k] = a[l];
            l++;
            k++;
        }
        else
        {
            c[k] = b[r];
            r++;
            k++;
        }
    }
    while (l < n)
    {
        c[k] = a[l];
        l++;
        k++;
    }
    while (r < n)
    {
        c[k] = b[r];
        r++;
        k++;
    }
    for (int i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }
}