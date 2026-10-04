#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long a, b, d;
    cin >> a >> b >> d;
    double D = (double)d;
    double ans = D * D / 2.0;
    cout << fixed << setprecision(6) << ans << "\n";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
