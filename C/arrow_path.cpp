//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    string a,b;
    cin>>n>>a>>b;
 
    bool ok=true;
    for (int i=0; i+1<n;i++) {
        if(i%2==1){
            if (a[i]=='<' and b[i+1]=='<')ok=false;}
            else{
 
            if (b[i]=='<' and a[i+1]=='<')ok =false;
 
 
        }
    }
    cout<<(ok ?"YES":"NO")<<'\n';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
