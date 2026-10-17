#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &v : a) cin >> v;
    for (int i = 1; i < n; i++)
        if ((a[i] - a[0]) % 2 != 0) { cout << -1 << "\n"; return; }
    vector<long long> ops;
    while (true)
    {
        long long mn = *min_element(a.begin(), a.end());
        long long mx = *max_element(a.begin(), a.end());
        if (mn==mx)
        {
            if (mx != 0) ops.push_back(mx);
            break;
        }
        long long x=(mn+mx)/2;
        ops.push_back(x);
        for (auto &v : a)v=llabs(v-x);}
    cout << ops.size() << "\n";
    for (auto x : ops) cout << x << " ";
    cout << "\n";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
