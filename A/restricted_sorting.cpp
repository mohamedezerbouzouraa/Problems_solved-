#include <bits/stdc++.h>
using namespace std;
 
const long long M = 1000000007;
 
 
 
int nbBits(long long x)
{
    int c = 0;
    while (x > 0)
    {
        c++;
        x /= 2;
    }
    return c;
}
 
void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long mn=LLONG_MAX,Mx=0;
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
        if (Mx < a[i]){Mx=a[i];}
        if (a[i]<mn){mn=a[i];}
 
    }
    vector<long long> b = a;
    sort(b.begin(), b.end());
    if (a == b) { cout << -1 << "\n"; return; }
    long long ans = LLONG_MAX;
    for (long long i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            ans = min(ans, max(a[i] - mn, Mx - a[i]));
    }
    cout << ans << "\n";
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
