#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    vector<vector<long long>> lists(n);
    vector<long long> x(n);
    for (int i = 0; i < n; i++)
    {
        long long k;
        cin >> k;
        lists[i].resize(k);
        for (int j = 0; j < k; j++)
        {
            cin >> lists[i][j];
            x[lists[i][j]-1] ++;;
        }

    }
    long long sz=0;
    for (int i = 0; i < n; i++)
    {
        if (x[i]>(long long)(n/2)){sz++;}
    }
    cout << sz << endl;
    for (int i = 0; i < n; i++)
    {
        if (x[i]>(long long)(n/2)){cout<<i+1<<endl;}
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
