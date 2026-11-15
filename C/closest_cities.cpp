//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin>>n;
    
    vector<long long> a(n);
    for(long long i=0;i<n;i++){cin>>a[i];}
    vector<long long> c(n);
    c[0]=1;
    c[n-1]=n-2;
    for(long long i=1;i<n-1;i++)
    {
        if(a[i]-a[i-1]<a[i+1]-a[i]) c[i]=i-1;
        else c[i]=i+1;
    }
 
    vector<long long> e(n,0), e2(n,0);
    for(long long i=0;i+1<n;i++)
    {
        if(c[i]==i+1){e[i+1]=e[i]+1;}
        else
        {
            e[i+1]=e[i]+(a[i+1]-a[i]);
 
        }
    }
    for(long long i=n-1;i>=1;i--)
    {
        if(c[i]==i-1){ e2[i-1]=e2[i]+1;}
        else{e2[i-1]=e2[i]+(a[i]-a[i-1]);}
    }
 
    long long m;
    cin>>m;
    while(m--)
    {long long x,y;
 
        cin>>x>>y;
        x--; y--;
        if(x<y) cout<<e[y]-e[x]<<"\n";
        else  cout<<e2[y]-e2[x]<<"\n";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
