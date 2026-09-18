#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;
 
void solve()
{
    long long n,q,x,y,m;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
        if (i==0){b[0]=a[0];}
        else{b[i]=b[i-1]+a[i];;}
    }
    cin >> q;
    vector<vector<long long>> c(q, vector<long long>(3));
    for (long long i = 0; i < q; i++)
    {
        cin>>c[i][0]>>c[i][1]>>c[i][2];
    }
    for (long long i = 0; i < q; i++)
    {
        cout<<min(max(c[i][0],b[n-1]),c[i][1]+b[c[i][2]-1])<<endl;
    }
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}
