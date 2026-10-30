#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;
    cin>>n>>k;
    vector<long long>a(n);
    
    for(auto&x:a)cin>>x;
    sort(a.begin(),a.end());
    vector<vector<long long>>dp(1);
    dp[0].push_back(a[0]);
    
    for(long long i=1;i<n;i++){
        if(a[i]-a[i-1]<=k)dp.back().push_back(a[i]);
        else dp.push_back({a[i]});
    }
    for(auto&b:dp){
        long long h=b.back();
        long long f_h=upper_bound(b.begin(),b.end(),h)-lower_bound(b.begin(),b.end(),h);
        if(f_h%2==0||(long long)b.size()-f_h>=1){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}
