#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;



void solve()
{
    int n;
    cin >> n;
    vector<long long>c(n);
    for (long long i = 0; i < n; i++) cin >> c[i];

    long long count=0;
    for (long long i = 0; i < n-1; i++)
    {
        if (c[i+1]<c[i]){count=count+(c[i]-c[i+1]);}}
    cout << count + c[n-1] - 1 << endl;}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
