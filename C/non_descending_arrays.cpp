#include <bits/stdc++.h>
using namespace std;
 
 
 
void solve()
{  long long M=998244353;
    long long  n;
    cin >> n;
    vector<long long> a(n);
    long long ans=2;
    vector<long long> b(n);
    for (long long i = 0; i < n; i++) cin >> a[i];
    for (long long i = 0; i < n; i++) cin >> b[i];
    for (long long i = 0; i < n; i++)
    {
        long long x=max(a[i], b[i]),y=min(a[i],b[i]);
        a[i]=x;b[i]=y;
    }
    for (long long i = 0; i < n-1; i++)
    {if (a[i]<=b[i+1])
    {ans=(ans*2) % M;
 
    }
 
    }
 
    cout << ans << endl;
 
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
