//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
long long M=1221;
vector<long long> dp(M,false);
void solve() {
    long long x;
    cin>>x;
 
    if (x>=M)
    {
        cout<<"YES"<<endl;return;
    }
    cout<<(dp[x]==true?"YES":"NO")<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    dp[0]=true;
    for (long long i=1; i<11; i++)
    {
        dp[i*11]=true;
    }
    long long curr=111;
    for (long long i=111;i<M; i++)
    {bool ans=false;
        if (i>=curr*10+1)
        {
            curr=curr*10+1;
        }
        long long x=curr;
        while (x>=11)
        {
            ans |=dp[i-x];
            x/=10;
        }
        dp[i]=ans;
 
    }
    long long t;
    cin>>t;
    while(t--){solve();
    }
 
}
