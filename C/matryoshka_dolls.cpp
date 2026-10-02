#include <bits/stdc++.h>
using namespace std;

 
void solve()
{
    long long s, x;
    cin >> s >> x;
    int count = 1;
    if (s<x){cout<<1<<endl;return;}
    while (s >= x)
    {
        s /= x;
        count++;
    }
    cout << count << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
