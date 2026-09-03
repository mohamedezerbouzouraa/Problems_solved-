#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;


void solve()
{
    long long n,x,y;
    cin >> n>>x>>y;
    vector<long long> a(n);
    long long max=0,s=0;
    long long ibc=0;
    vector<long long> net(n,0);
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
        net[i]=a[i]-(long long)(a[i]/x)*y;
        if (i==0){max=net[i];}
        else{if (net[i]>max){max=net[i];ibc=i;}}}
    for (long long i = 0; i < n; i++)
    {
        if (i!=ibc){s+=((long long)(a[i]/x)*y);}
        else{s+=a[i];}
    }
    cout<<s<<endl;

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
