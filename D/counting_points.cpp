//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n,m;
    cin >> n>>m;
    //W GEOMETRY
    vector<long long> x(n);
    vector<long long> r(n);
    for(long long i=0; i<n;i++){cin>>x[i]; }
    for(long long i=0;i<n;i++)
    {
        cin >> r[i];
    }
    map<long long,long long> mp;
    for(long long i=0;i<n;i++)
    {
        for (long long X=x[i]-r[i];X<=x[i];X++)
        {
            long long d = x[i]-X;
            double h=sqrt((double)r[i]*(double)r[i]-(double)d * (double)d);
            mp[X]=max(mp[X],(long long)h);
            mp[2*x[i]-X]=max(mp[2*x[i]-X],(long long)h);
 
        }
    }
    long long ans=0;
    for (auto it=mp.begin();it!=mp.end();++it)
    {
        ans+=(2*it->second)+1;
    }
    cout<<ans<<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--)solve();
}
