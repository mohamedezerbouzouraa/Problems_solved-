#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i%2==0){a[i]=llabs(a[i]);}
        else{a[i]=-llabs(a[i]);}
    }
    for (long long i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;


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
