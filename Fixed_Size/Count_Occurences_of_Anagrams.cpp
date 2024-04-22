// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
#include <bits/stdc++.h>
using namespace std;

long maximumSumSubarray(int k, vector<int> &ar, int n)
{

    int l = 0, r = 0;
    long sum = 0;
    long mx = 0;
    while (r < n)
    {

        if (r - l + 1 == k)
        {
            sum = sum + ar[r];
            mx = max(mx, sum);
            sum = sum - ar[l];
            l++;
            r++;
        }
        else
        {
            sum = sum + ar[r];
            r++;
        }
    }

    return mx;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        ;
        vector<int> Arr;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            Arr.push_back(x);
        }
        cout << maximumSumSubarray(K, Arr, N) << endl;
    }
    return 0;
}