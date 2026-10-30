#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, k;
    string s;
    cin>>n>>k>>s;
    vector<int> par(k, 0);
    for (int i=0;i<n; i++)
        if (s[i]=='1')par[i%k]+=1;
    for (int r=0;r<k;r++)
        if (par[r]%2!=0){ cout<<"NO\n";return; }
    cout << "YES\n";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
