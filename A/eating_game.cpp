#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){cin>>a[i];}
    sort(a.begin(),a.end(),greater<long long>());
    long long ans=1,x=a[0];
    while (ans<n and a[ans]==x){ans++;}
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
 
}
