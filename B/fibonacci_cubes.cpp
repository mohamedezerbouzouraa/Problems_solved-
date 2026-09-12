#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;



void solve()
{
    int n,m;
    cin >> n>>m;
    vector<vector<long long>>a(m);
    for (long long i=0;i<m;i++)
    {
        a[i].resize(3);
        cin >> a[i][0] >> a[i][1] >> a[i][2];
        sort(a[i].begin(),a[i].end());
    }
    vector<long long>f(n+1);
    f[0]=0;
    f[1]=1;
    f[2]=2;
    for (long long i=3;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    string s;
    for (long long i=0;i<m;i++)
    {   if (f[n]>a[i][0]){s=s+'0';}
        else if (f[n]+f[n-1]>a[i][1] and f[n]+f[n-1]>a[i][2])
        {
            s=s+'0';
        }
        else{s=s+'1';}
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
