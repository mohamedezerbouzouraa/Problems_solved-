#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(auto &x:a)cin>>x;
    sort(a.begin(),a.end());
    long long med=a[n/2];
    long long cost=0;
    for(auto x:a)cost+=llabs(x-med);
    cout<<cost<<" "<<a[n-1]-a[0]<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
 
}
