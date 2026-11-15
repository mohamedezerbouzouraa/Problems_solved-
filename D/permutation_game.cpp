//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long best(const vector<long long> &vb,const vector<long long> &a,long long k)
{
    long long l=vb.size();
    long long h=0,sum=0;
    for (long long i=1;i<=l;i++)
    {
        h=max(h,sum+a[vb[i-1]]*(k-i+1));
        sum+=a[vb[i-1]];
    }
    return h;
}
void solve() {
    long long n,k,pb,ps;
    cin>>n>>k>>pb>>ps;
    vector<long long> p(n+1);
    vector<long long> a(n+1);
    for (long long i=1;i<=n;i++) cin>>p[i];
    for (long long i=1;i<=n;i++) cin>>a[i];
    long long x=min(k,n);
    vector<long long> vb,vs;
    long long f1=pb,f2=ps;
    for(long long i=0;i<x;i++){
        vb.push_back(f1); f1=p[f1];
        vs.push_back(f2); f2=p[f2];
    }
    long long sb=best(vb,a,k), ss=best(vs,a,k);
    if (ss<sb) cout<<"Bodya"<<endl;
    else if (ss>sb) cout<<"Sasha"<<endl;
    else cout<<"Draw"<<endl;
 
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
