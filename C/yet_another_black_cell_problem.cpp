#include <bits/stdc++.h>
using namespace std;
 
long long remains(const vector<long long>& a, long long k) {
    int n = a.size();
    vector<char> stuck(n);
    for (int i = 0; i < n; i++) {
        long long d=LLONG_MAX;
        if (i>0) d=min(d, a[i]-a[i-1]);
        if (i+1<n) d = min(d, a[i+1] - a[i]);
        stuck[i]=(d>k);
    }
    long long ans=0;
    for (int i = 0; i < n; i++) {
        if (!stuck[i]) continue;
        ans++;
        if (i+1<n && stuck[i+1] && a[i+1]-a[i]<=2*k) i++;
    }
    return ans;
}
 
void solve()
{
    long long n,x;
    cin>>n>>x;
    vector<long long> a(n);
    long long maxdiff=0;
    for(long long i=0;i<n;i++)
    {cin>>a[i];
       }
    long long t=0;
    for (int i=0;i<n;i++) {
        long long d=LLONG_MAX;
        if (i>0)d=min(d, a[i] - a[i-1]);
        if (i+1<n)d=min(d,a[i+1]-a[i]);
        t = max(t, d);
    }
    long long lo = 1, hi = t;
    while (lo < hi) {
        long long mid = (lo + hi) / 2;
        if (remains(a,mid)<=x) hi = mid;
        else lo = mid + 1;
    }
    cout << lo << endl;
 
 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}
