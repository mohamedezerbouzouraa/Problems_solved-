//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin>>n;
    vector<long long> a(n+1);
    a[0]=0;
    for(long long i=1;i<=n;i++){cin>>a[i];}
    vector<long long> b(n+1,0);
    for(long long i=1;i<=n;i++)
    {long long a5yeb_valeur=i-n;
        if (a[i]-a5yeb_valeur+1>=1 and a[i]-a5yeb_valeur+1<=n and b[a[i]-a5yeb_valeur+1]==0)
        {
            b[a[i]-a5yeb_valeur+1]=i;
        }
        else{cout<<-1<<endl;return;}
 
    }
    for(long long i=1;i<=n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
