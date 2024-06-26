// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int r = 0, l = 0;
    long long int ans = 0;
    while (l < n && r < m)
    {
        int cnt1 = 0, cnt2 = 0, curr = a[l];
        while (a[l] == curr && l < n)
        {
            cnt1++;
            l++;
        }

        while (curr > b[r] && r < m)
        {
            r++;
        }

        while (b[r] == curr && r < m)
        {
            cnt2++;
            r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }

    cout << ans << "\n";

    return 0;
}