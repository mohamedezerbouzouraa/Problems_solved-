#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>


#include <cmath>
using namespace std;



bool estpremier(long long x)
{
    for (long long i = 2; i * i <= x; i++)
    {
        if (x % i == 0){return false;}
    }
    return true;
}



void solve()
{
    long long n,k;
    cin >> n>>k;
    vector<long long> l(n);
    vector<long long> r(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    vector<long long> s(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> r[i];
    }
    iota(s.begin(), s.end(), 0);
    sort(s.begin(), s.end(), [&](int i,int j){return min(l[i],r[i]) > min(l[j],r[j]);});

    long long dk=0;
    for (long long i = 0; i < k-1; i++)
    {dk=dk+(l[s[i]]+r[s[i]]);}
    for (long long i = k-1; i < n; i++)
    {
        dk+=max(l[s[i]],r[s[i]]);
    }
    cout << dk+1 << endl;



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
