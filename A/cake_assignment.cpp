#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;
 
 
 
void solve()
{
    long long k,x;
    cin >> k >> x;
    vector<long long> a;
    long long y=(1LL<<(k+1))-x;
    while (x!=(1LL<<k))
    {
        if (x<y)
        {
            x=2*x;
            y=(1LL<<(k+1))-x;
            a.push_back(1);
        }
        else
        {
            y=2*y;
            x=(1LL<<(k+1))-y;
            a.push_back(2);
        }
    }
    if (a.size()!=0)
    {
        cout<<a.size()<<endl;
        for (long long i=0;i<a.size();i++)
        {
            cout<<a[a.size()-1-i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<0<<endl;
        cout<<endl;
    }
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
