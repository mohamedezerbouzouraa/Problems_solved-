#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;

void solve()
{
    long long A,B;
    cin >> A >> B;
    if (B<9 or A==0){cout<<0<<endl;return;}
    long long p=10;
    long long i=1;
    while (p*10-1<=B)
    {
        p*=10;
        i++;
    }
    cout<<i*A<<endl;
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
