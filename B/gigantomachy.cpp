#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> w(m);
    long long sv=0,sw=0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i != 0){sv+=(v[i-1]-v[i]+1);}
    }
    for (int i = 0; i < m; i++)
    {
        cin >> w[i];
        if (i != 0){sw+=(w[i-1]-w[i]+1);}
    }
    sv+=v[n-1];
    sw+=w[m-1];
if (sv>=sw) cout << 1 << endl;
    else cout << 2 << endl;

}

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
