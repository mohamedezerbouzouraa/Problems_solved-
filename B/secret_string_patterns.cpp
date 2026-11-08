#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    //The more the buzzing, the less the dazzling.
    cin>>n;
    long long x,y;
    cout<<"? 1 "<<n<<endl;
    cin>>x;
    if(x==0){
        cout<<"! NO"<<endl;
        return;
    }
    cout<<"? 1 "<<x<<endl;
    cin>>y;
    if(y==x)cout<<"! NO"<<endl;
    else cout<<"! YES"<<endl;
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
