//The more the buzzing,the less the dazzling.
// W problem
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    vector<long long> p(n+1,0);
 
    for (long long i=1;i<=n;i++)
    {
        string s; cin >> s;
        long long nb1_9bal_i=0,nb1_ba3d_i=0;
        for (long long j=1;j<=n;j++)
        {
            if (j==i)continue;
            else if (j<i and s[j-1]=='1'){nb1_9bal_i++;}
            else if (j>i and s[j-1]=='1'){nb1_ba3d_i++;}
        }
        p[n-i+1+(nb1_9bal_i-nb1_ba3d_i)]=i;
    }
    for (long long i=1;i<=n;i++)
    {cout<<p[i]<<" ";}
    cout<<endl;
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
