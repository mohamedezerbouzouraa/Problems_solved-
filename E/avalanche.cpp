//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){cin>>a[i];}
    long long x=0,v=0,tot=0;
    for(long long i=n-1;i>=0;i--)
    {
        if (i+k+1<n) v=(v-a[i+k+1]+2)%2;
        a[i]=(a[i]+v)%2;
        v=(v+a[i])%2;
 
        tot=(tot+a[i])%2;
    }
    if(tot==0) cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--) solve();
}
