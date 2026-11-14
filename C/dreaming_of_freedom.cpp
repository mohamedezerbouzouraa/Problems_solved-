//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long nb_uns(long long x){
    long long c=0;
    while(x>0){c+=x&1;x>>=1;}
    return c;}
 
void solve(){
    long long n,m;
    cin>>n>>m;
    if(n==1){cout<<"YES\n";return;}
    if(n<=m){cout<<"NO\n";return;}
    for(long long p=2;p*p<=n && p<=m;p++)
        if(n%p==0){cout<<"NO\n";return;}
    cout<<"YES\n";
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
