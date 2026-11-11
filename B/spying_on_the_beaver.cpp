//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long nb_uns(long long x){
    long long c=0;
    while(x>0){c+=x&1;x>>=1;}
    return c;}
 
void solve(){
    long long n;
    cin>>n;
    long long x;
    vector<long long> par(n+1,0);
    vector<long long> depth(n+1,0);
    for(long long i=2;i<=n;i++)
    {cin>>x;
        depth[i]=depth[x]+1;
        par[i]=x;
    }
    long long m=0;
    cin>>m;
    vector<long long> a(m);
    long long a9rb_we7d;
    for(long long i=0;i<m;i++)
    {
        cin>>a[i];
        if (i==0){a9rb_we7d=a[i];}
        else
        {
            if (depth[a[i]]<depth[a9rb_we7d]){a9rb_we7d=a[i];}
        }
    }
    cout<<m-1<<" ";
    for(long long i=0;i<m;i++)
    {
        if (a[i]!=a9rb_we7d)
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    
 
 
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
