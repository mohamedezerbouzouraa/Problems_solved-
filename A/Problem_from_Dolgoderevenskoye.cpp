//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int x=s[s.size()-1]-'0';
    if (x%2==1){cout<<"YES"<<endl;return;}
    int n=x;
    if (s.size()>=2)n+=10*(s[s.size()-2]-'0');
    if ((n/2)%2==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--)solve();
}
