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
    cin>>x;
    vector<long long> a(n);
    long long c=0;
    long long mx_a=0;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];c+=a[i];
        mx_a=max(mx_a,a[i]);
    }
    cout<<max((c+x-1)/x,mx_a)<<endl;
 
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
