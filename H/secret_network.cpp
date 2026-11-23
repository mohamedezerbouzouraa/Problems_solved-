//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long M=(1LL<<62);
 
void solve() {
    long long n;
    cin>>n;
    string s;
    cin>>s;
    long long ans=0;
    for(long long i=0;i<s.length();i++)
    {
        if (s[i]=='0' and (n-1-i)<62)ans=(ans+((1LL<<(n-1-i))))%M;
    }
    cout<<ans<<endl;
 
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
 
}
