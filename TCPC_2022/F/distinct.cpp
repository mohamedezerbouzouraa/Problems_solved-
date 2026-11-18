//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    int n,q;
    cin >> n>>q;
    string s;
    cin >> s;
    s='0'+s;
    vector<int> b(n+1,0);
    for(int i=1;i<=n;i++)
    {
        if(s[i]=='*')
        {
            b[i]=b[i-1]+1;
        }
        else
        {
            b[i]=b[i-1]-1;
        }
    }
    vector<int> ns(n+1,n+1);
    stack<int> st;
    for(int i=n;i>=0;i--)
    {
        while(!st.empty() && b[st.top()]>=b[i]) st.pop();
        
        
        ns[i]=st.empty()?n+1:st.top();
        st.push(i);
    }
    int LG=1;
    
    while((1<<LG)<=n+1)LG++;
    vector<vector<int>> sp(LG,vector<int>(n+1));
    
    sp[0]=b;
    for(int k=1;k<LG;k++)
    {
        for(int i=0;i+(1<<k)<=n+1;i++)
        {
            sp[k][i]=max(sp[k-1][i],sp[k-1][i+(1<<(k-1))]);}}
            
    while (q--)
    {
        int l,r;
        
        cin >> l >> r;
        int L=l-1;
        
        int p=ns[L];
        int rp=min(r,p-1);
        int k=31-__builtin_clz(rp-L+1);
        int mx=max(sp[k][L],sp[k][rp-(1<<k)+1]);
        int ans=mx-b[L]+1+(p<=r?1:0);
        cout<<ans<<"\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){solve();}
 
}
