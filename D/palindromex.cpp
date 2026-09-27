#include <bits/stdc++.h>
using namespace std;

bool ispalind(const vector<long long> &v, long long i, long long j)
{
    while (i < j)
    {
        if (v[i] != v[j]) return false;
        i++;
        j--;
    }
    return true;
}

void solve()
{
    long long n;
    cin >> n;
    long long len = 2 * n;
    vector<long long> a(len);
    vector<vector<long long>> b(n, vector<long long>(2, -1));

    for (long long i = 0; i < len; i++)
    {
        cin >> a[i];
        if (b[a[i]][0] == -1) { b[a[i]][0] = i; }
        else { b[a[i]][1] = i; }
    }

    long long adv = 0;
    bool p = ispalind(a, b[0][0], b[0][1]);
    while (p and b[0][0]-adv-1>=0 and b[0][1]+adv+1<=len-1 and a[b[0][0]-adv-1]==a[b[0][1]+adv+1])
    {
        adv++;
    }

    if (p == true)
    {
        vector<bool> vu(n,false);
        long long t1 = b[0][0]-adv, t2 = b[0][1]+adv;
        for (long long i = t1; i <= t2; i++)
        {
            vu[a[i]] = true;
        }
        long long i = 0;
        while (i < n and vu[i]) { i++; }
        cout << i << endl;return;
    }
    else
    {
        long long best = 1;

        adv = 0;
        p = true;   
        while (b[0][0]-adv-1>=0 and b[0][0]+adv+1<=len-1 and a[b[0][0]-adv-1]==a[b[0][0]+adv+1])
        {
            adv++;
        }
        {
            vector<bool> vu(n,false);
            long long t1 = b[0][0]-adv, t2 = b[0][0]+adv;
            for (long long i = t1; i <= t2; i++)
            {
                vu[a[i]] = true;
            }
            long long i = 0;
            while (i < n and vu[i]) { i++; }
            best = max(best, i);
        }

        adv = 0;
        while (b[0][1]-adv-1>=0 and b[0][1]+adv+1<=len-1 and a[b[0][1]-adv-1]==a[b[0][1]+adv+1])
        {
            adv++;
        }
        {
            vector<bool> vu(n,false);
            long long t1 = b[0][1]-adv, t2 = b[0][1]+adv;
            for (long long i = t1; i <= t2; i++)
            {
                vu[a[i]] = true;
            }
            long long i = 0;
            while (i < n and vu[i]) { i++; }
            best = max(best, i);
        }

        cout << best << endl;return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t != 0)
    {
        solve();
        t--;
    }
}
