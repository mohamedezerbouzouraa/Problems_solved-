#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long n;
    cin>>n ;
    vector<long long> a(n);
    long long mx_a=0;
    long long mn_a=LLONG_MAX;
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
        mn_a=min(mn_a,a[i]);
        mx_a=max(mx_a,a[i]);
    }
    cout<<mx_a-mn_a+1<<endl;
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
