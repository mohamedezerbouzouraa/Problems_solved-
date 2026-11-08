//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    vector<long long> ez;
    for(long long i=0;i<n;i++){
        cin>>a[i];
        if(i>0){
            ez.push_back(llabs(a[i]-a[i-1]));}}
    long long sz=n-1;
    vector<long long> x(sz);
    iota(x.begin(),x.end(),0);
    
    sort(x.begin(),x.end(),[&](long long i,long long j){
    if(ez[i]!=ez[j]) return ez[i]>ez[j];
    return i<j;
    });
    long long m=ez[x[0]];
    long long ans=m;
    if(m>0){
        long long j=x[0];
        vector<long long> pre(n+1,0),suf(n+2,0);
        for(long long k=0;k< sz;k++)pre[k+1]=max(pre[k],ez[k]);
        for(long long k=sz-1;k>=0;k--)suf[k]=max(suf[k+1],ez[k]);
        {  
            long long l=j+1;
            long long inner=0;
            for(long long r=l;r<n;r++){
                if(r>l)inner=max(inner,2*ez[r-1]);
                if(inner>=m)break;
                long long val=max(pre[j],inner);
                val=max(val,llabs(a[j]-2*a[r]));
                if(r<n-1)val=max(val,llabs(2*a[l]-a[r+1]));
                val=max(val,suf[r+1]);
                ans=min(ans,val);}
        }
        {
            long long r=j;
            long long inner=0;
            for(long long l=r;l>=0;l--){
                if(l<r)inner=max(inner,2*ez[l]);
                if(inner>=m)break;
                long long val=inner;
 
                if(l>=1)val=max(val,pre[l-1]);
                val=max(val,suf[j+1]);
                val=max(val,llabs(2*a[l]-a[j+1]));
 
                if(l>0)val=max(val,llabs(a[l-1]-2*a[r]));
                ans=min(ans,val);
            }}
    }
    cout<<ans<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}
