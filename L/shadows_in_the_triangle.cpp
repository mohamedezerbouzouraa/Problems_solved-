//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long skip(string s,long long p)
{stack<long long> st;
    long long ans=0;
    for(int i=0;i<s.length();i++)
    {
        if (i==p)continue;
        if (s[i]=='(')st.push(1LL);
        else
        {
            if (st.empty())continue;
            ans++;
            st.pop();
        }
 
    }
    return ans;
}
void solve() {
    double x,y;
    cin>>x>>y;
    cout<<fixed << setprecision(1) <<(x*y)/(2.0)<<endl;
 
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
 
}
