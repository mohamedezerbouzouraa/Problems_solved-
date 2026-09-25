#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>


#include <cmath>
using namespace std;






void solve()
{
    long long n;
    cin >> n ;
    vector<long long> a(n);
    vector<long long> pos(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        pos[a[i]-1]=i%2;
    }
    if (n==3)
    {
        if (a[1]<a[2] and a[1]<a[0]){cout<<"NO"<<endl;return;}
        cout<<"YES"<<endl;return;
    }
    if (pos[n-1]==pos[n-2]){cout<<"NO"<<endl;return;}
    long long i=n-3;
    while (i>1)
    {
        if (pos[i]==pos[i-1]){cout<<"NO"<<endl;return;}
        i-=2;
    }
    cout<<"YES"<<endl;


}

















int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t ;
    cin >> t;
    while(t!=0)
    {
        solve();
        t--;
    }
    }

