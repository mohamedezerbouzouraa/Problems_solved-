#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) cin >> a[i];
    long long pp=a[0],ppp=a[n-1];
    long long p=max_element(a.begin(), a.end())-a.begin();
    sort(a.begin(), a.end(), greater<long long>());
    long long sum=0;
    if (k>=2)
    {
        for (long long i = 0; i < k+1; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }
    else
    {
        if (n==2){cout << a[1]+a[0] << endl;return;}
        if (p==0 or p==n-1){cout<<a[0]+a[1]<<endl;return;}
        else
        {
            cout<<a[0]+max(ppp,pp)<<endl;
        }
 
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
