#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<long long,long long>> v(n);
    for(long long i=0;i<n;i++){
        v[i].first=s[i]-'a';
        v[i].second=s[n-i-1]-'a';
    }
    sort(v.begin(),v.end(),[&](const pair<long long,long long>& a,const pair<long long,long long>& b){
        if(a.first!=b.first) return a.first>b.first;
        return a.second<b.second;
    });
    long long cost=0;
    long long lvl=26;
    for(long long i=0;i<n;i++){
        if(v[i].first<=v[i].second) continue;
        if(v[i].first<lvl){
            cost+=v[i].first-v[i].second;
            lvl=v[i].second;
        }
        else if(v[i].second<lvl){
            cost+=lvl-v[i].second;
            lvl=v[i].second;
        }
    }
    cout<<cost<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--) solve();
}
