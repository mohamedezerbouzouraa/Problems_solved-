//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> dp(n);
    for (long long i = 0; i < n; i++){cin >> a[i];dp[i] = a[i];}
    for (long long i=0;i<n;i++)
    {
        if (i+a[i]<n)
        {
            dp[i+a[i]] = max(dp[i+a[i]], dp[i]+a[i+a[i]]);
        }
 
    }
    long long mx=0;
    for (long long i=0;i<n;i++)
    {mx=max(mx,dp[i]);}
        cout<<mx<<endl;
    }
 
 
 
 
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
