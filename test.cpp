#include <bits/stdc++.h>
using namespace std;

struct Que
{
    int first, second;
    // operator
};
bool Compare(Que a, Que b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}
void Void()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), b(m + 1);
    int i = 1, j = 1;
    vector<int> c;
    while (i <= n || j <= m)
    {
        if (i > n || (j <= m && b[j] <= a[i]))
        {
            c.push_back(b[j]);
            j += 1;
        }
        else if (j == m + 1 || (i <= n && a[i] < b[j]))
        {
            c.push_back(a[i]);
            i += 1;
        }
    }
}
main()
{
    Void();
}