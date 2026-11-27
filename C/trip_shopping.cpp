//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n), b(n);
    for(long long i=0;i<n;i++) cin>>a[i];
    long long sum=0;
    for(long long i=0;i<n;i++)
    {
        cin>>b[i];
        if(a[i]>b[i]) swap(a[i],b[i]);
        sum+=b[i]-a[i];
    }
    vector<long long> idx(n);
    iota(idx.begin(),idx.end(),0);
    sort(idx.begin(),idx.end(),[&](long long i,long long j)
    {
        if(a[i]!=a[j]) return a[i]<a[j];
        return b[i]<b[j];
    });
 
    long long maxfin=b[idx[0]];
    for(long long p=1;p<n;p++)
    {
        long long i=idx[p];
        if(b[i]<=maxfin){cout<<sum<<endl;return; }
        maxfin=max(maxfin,b[i]);
    }
    long long best=LLONG_MAX;
    for(long long p=0;p+1<n;p++)
    {
        long long i=idx[p],j=idx[p+1];
        long long cout_= llabs(a[i]-b[j])+llabs(b[i]-a[j])-(b[i]-a[i])-(b[j]-a[j]);
        best=min(best,cout_);
    }
    cout<<sum+best<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
}
